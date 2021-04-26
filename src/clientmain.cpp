/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include <QDebug>
#include <QCommandLineParser>
#include <QProcessEnvironment>
#include <QDir>

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
  QString logFile;
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

Args parseArgs()
{
  Args args;
  QCommandLineParser parser;
  parser.setApplicationDescription( "Mergin Command Line Client" );
  QCommandLineOption helpOption = parser.addHelpOption();
  QCommandLineOption versionOption = parser.addVersionOption();
  QCommandLineOption logOption("log", "log file (debug output)", "log");
  parser.addOption(logOption);

  parser.addPositionalArgument( "command", "create/remove/download/sync" );
  parser.addPositionalArgument( "project", "namespace/projectname [only for create/remove/download]" );

  QCommandLineOption urlOption( "url", "or use env. var MERGIN_URL. defaults to https://public.cloudmergin.com/", "url" );
  parser.addOption( urlOption );
  QCommandLineOption userOption( "user", "or use env. var MERGIN_USER", "user" );
  parser.addOption( userOption );
  QCommandLineOption passwordOption( "password", "or use env. var MERGIN_PASSWORD", "password" );
  parser.addOption( passwordOption );

  parser.parse( QCoreApplication::arguments() );
  if ( parser.isSet( helpOption ) )
    parser.showHelp(); // exits the app
  if ( parser.isSet( versionOption ) )
    parser.showVersion(); // exits the app

  args.url = parseEnvArg( parser.value( urlOption ), "MERGIN_URL", false ); // MerginApi has public.cloudmergin.com as default
  args.user = parseEnvArg( parser.value( userOption ), "MERGIN_USER" );
  args.pass = parseEnvArg( parser.value( passwordOption ), "MERGIN_PASSWORD" );
  args.logFile = parser.value( logOption );

  const QStringList posArgs = parser.positionalArguments();
  if ( posArgs.isEmpty() )
    throw QString( "command is required positional argument" );

  if (!args.logFile.isEmpty())
    CoreUtils::setLogFilename(args.logFile);

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
      throw QString( "Invalid project, must have format namaspace/projectname: " ) + posArgs.at( 1 );

    args.dataDir = QDir::currentPath();

  }
  else if ( args.command == "sync" )
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

    cmd.login( args.url,
               args.user,
               args.pass
             );


    if ( args.command == "create" )
    {
      cmd.create( args.projectNamespace, args.projectName );
    }
    else if ( args.command == "remove" )
    {
      cmd.remove( args.projectNamespace, args.projectName );
    }
    else if ( args.command == "download" )
    {
      cmd.download( args.projectNamespace, args.projectName );
    }
    else if ( args.command == "sync" )
    {
      cmd.sync();
    }
    else
    {
      throw QString( "invalid command" ) + args.command;
    }

  }
  catch ( const QString &s )
  {
    CoreUtils::log( "merginclient", s );
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
