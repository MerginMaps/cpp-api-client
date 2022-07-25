/*
 * mergin-cpp-client
 * Copyright (C) 2021 Lutra Consulting
 * License: MIT
 */

#include <QDebug>
#include <QCommandLineParser>
#include <QProcessEnvironment>
#include <QDir>
#include <QTextStream>

#include "clientcommands.h"
#include "coreutils.h"

struct Args
{
  QString url;
  QString pass;
  QString user;
  QString dir;
  QString command;
  QString projectNamespace;
  QString projectName;
  QString dataDir;
  bool isVerbose;
  bool isJsonFormat;
  int timeout = 10000;
};

QString parseEnvArg( const QString &value, const QString &envKey, bool required = true )
{
  QString ret( value );
  QProcessEnvironment env = QProcessEnvironment::systemEnvironment();
  if ( ret.isEmpty() )
  {
    if ( env.contains( envKey ) )
    {
      ret = env.value( envKey );
    }
  }

  if ( required && ret.isEmpty() )
  {
    throw QString( "missing required option: " ) + envKey;
  }

  return ret;
}

QString appDescription()
{
  QString ret =
    "Mergin Command Line Client\n"\
    "\n"\
    "Auth\n"\
    "----\n"\
    " - use URL, username, password from command line args - e.g.  --url https://dev.mergin.io/ --user martin --password XYZ\n"\
    " - for any bits (URL / username / password) not specified as command line args, you may use env variables: MERGIN_URL, MERGIN_USER, MERGIN_PASSWORD\n"\
    " - if URL is omitted, we would use app.merginmaps.com\n"\
    "\n"\
    "Commands\n"\
    "--------\n"\
    "  1. manage remote projects (create / remote)\n"\
    "    mergin create martin/test-project\n"\
    "    mergin remove martin/test-project\n"\
    "\n"\
    "  2. initial download\n"\
    "    mergin download martin/test-project\n"\
    "      - project is downloaded to current dir + 'test-project' subdir - like git does\n"\
    "  3. operations within the current working directory (error if .mergin subdir is missing in the current dir)\n"\
    "    mergin sync\n"\
    "      - both pulls remote changes and pushes local changes to server\n"\
    "    mergin info [--json]\n"\
    "      - shows project information";
  return ret;
}

Args parseArgs()
{
  Args args;
  QCommandLineParser parser;
  parser.setApplicationDescription( appDescription() );
  QCommandLineOption helpOption = parser.addHelpOption();
  QCommandLineOption versionOption = parser.addVersionOption();
  QCommandLineOption verboseOption( "verbose", "Verbose mode. Prints out more information." );
  parser.addOption( verboseOption );
  QCommandLineOption jsonOption( "json", "Output 'info' command output in JSON format" );
  parser.addOption( jsonOption );
  QCommandLineOption urlOption( "url", "or use env. var MERGIN_URL. defaults to https://app.merginmaps.com/", "url" );
  parser.addOption( urlOption );
  QCommandLineOption userOption( "user", "or use env. var MERGIN_USER", "user" );
  parser.addOption( userOption );
  QCommandLineOption passwordOption( "password", "or use env. var MERGIN_PASSWORD", "password" );
  parser.addOption( passwordOption );

  parser.addPositionalArgument( "command", "create/remove/download/sync/info" );
  parser.addPositionalArgument( "project", "namespace/projectname [only for create/remove/download]" );

  parser.parse( QCoreApplication::arguments() );

  const QStringList posArgs = parser.positionalArguments();
  if ( parser.isSet( helpOption ) || posArgs.isEmpty() )
    parser.showHelp(); // exits the app

  if ( parser.isSet( versionOption ) )
    parser.showVersion(); // exits the app

  args.url = parseEnvArg( parser.value( urlOption ), "MERGIN_URL", false ); // MerginApi has app.merginmaps.com as default
  args.user = parseEnvArg( parser.value( userOption ), "MERGIN_USER" );
  args.pass = parseEnvArg( parser.value( passwordOption ), "MERGIN_PASSWORD" );
  args.isVerbose = parser.isSet( verboseOption );
  args.isJsonFormat = parser.isSet( jsonOption );

  if ( args.isVerbose )
  {
    CoreUtils::setLogFilename( CoreUtils::LOG_TO_STDOUT );
  }
  else
  {
    CoreUtils::setLogFilename( CoreUtils::LOG_TO_DEVNULL );
  }

  args.command = posArgs.at( 0 );
  if ( args.command == "create" ||
       args.command == "remove" ||
       args.command == "download"
     )
  {
    if ( posArgs.size() < 2 )
    {
      throw QString( "project is required create/remove/download command" );
    }

    if ( !MerginApi::extractProjectName( posArgs.at( 1 ), args.projectNamespace, args.projectName ) )
      throw QString( "Invalid project, must have format namaspace/project: " ) + posArgs.at( 1 );

    args.dataDir = QDir::currentPath();

  }
  else if ( args.command == "sync" ||
            args.command == "info" )
  {
    QDir current = QDir::current();
    current.cdUp();
    args.dataDir = current.path();
  }
  else
  {
    throw QString( "unknown command" ) + args.command;
  }

  return args;
}

int main( int argc, char *argv[] )
{
  QCoreApplication app( argc, argv );


  const QString version = CoreUtils::appVersion();
  QCoreApplication::setApplicationName( "mergin" );
  QCoreApplication::setApplicationVersion( version );
  QCoreApplication::setOrganizationName( "Lutra Consulting" );
  QCoreApplication::setOrganizationDomain( "lutraconsulting.co.uk" );

  try
  {
    Args args = parseArgs();
    ClientCommands cmd( args.dataDir, args.timeout );

    if ( args.command == "create" )
    {
      cmd.login( args.url, args.user, args.pass );
      cmd.create( args.projectNamespace, args.projectName );
    }
    else if ( args.command == "remove" )
    {
      cmd.login( args.url, args.user, args.pass );
      cmd.remove( args.projectNamespace, args.projectName );
    }
    else if ( args.command == "download" )
    {
      cmd.login( args.url, args.user, args.pass );
      cmd.pull( args.projectNamespace, args.projectName );
    }
    else if ( args.command == "sync" )
    {
      cmd.login( args.url, args.user, args.pass );
      cmd.sync();
    }
    else if ( args.command == "info" )
    {
      cmd.info( args.isJsonFormat );
    }
    else
    {
      throw QString( "invalid command" ) + args.command;
    }

  }
  catch ( const QString &s )
  {
    QTextStream out( stderr );
    out << "Error: " << s;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
