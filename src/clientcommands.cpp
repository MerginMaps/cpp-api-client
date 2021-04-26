/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "clientcommands.h"
#include <QEventLoop>
#include <QTimer>
#include <QTextStream>

#include "merginuserauth.h"

ClientCommands::ClientCommands( const QString &dir, int timeout ):
  mTimeout( timeout ),
  mLocalProjectsManager( dir ),
  mApi( mLocalProjectsManager )
{
}

void ClientCommands::login( const QString &url, const QString &user, const QString &pass )
{
  if ( url.isEmpty() )
    mApi.setApiRoot( MerginApi::defaultApiRoot() );
  else
    mApi.setApiRoot( url );

  QTimer timer;
  timer.setSingleShot( true );
  QEventLoop loop;

  connect( &mApi, &MerginApi::authFailed, &loop, &QEventLoop::quit );
  connect( &mApi, &MerginApi::authChanged, &loop, &QEventLoop::quit );
  connect( &timer, &QTimer::timeout, &loop, &QEventLoop::quit );
  timer.start( mTimeout );
  mApi.authorize( user, pass );
  loop.exec();

  if ( !timer.isActive() )
    throw QString( "timeout for login" );

  if ( !isAuthorized() )
    throw QString( "not authorized" );
}

void ClientCommands::create( const QString &projectNamespace, const QString &projectName )
{
  Q_ASSERT( isAuthorized() );
  QTimer timer;
  timer.setSingleShot( true );
  QEventLoop loop;

  connect( &mApi, &MerginApi::projectCreated, &loop, &QEventLoop::quit );
  connect( &timer, &QTimer::timeout, &loop, &QEventLoop::quit );
  timer.start( mTimeout );
  mApi.createProject( projectNamespace, projectName );
  loop.exec();

  if ( !timer.isActive() )
    throw QString( "timeout for create" );
}

void ClientCommands::remove( const QString &projectNamespace, const QString &projectName )
{
  Q_ASSERT( isAuthorized() );
  QTimer timer;
  timer.setSingleShot( true );
  QEventLoop loop;

  connect( &mApi, &MerginApi::serverProjectDeleted, &loop, &QEventLoop::quit );
  connect( &timer, &QTimer::timeout, &loop, &QEventLoop::quit );
  timer.start( mTimeout );
  mApi.deleteProject( projectNamespace, projectName );
  loop.exec();

  if ( !timer.isActive() )
    throw QString( "timeout for delete" );

}

void ClientCommands::download( const QString &projectNamespace, const QString &projectName )
{
  Q_ASSERT( isAuthorized() );

  QTimer timer;
  timer.setSingleShot( true );
  QEventLoop loop;

  connect( &mApi, &MerginApi::syncProjectFinished, &loop, &QEventLoop::quit );
  connect( &timer, &QTimer::timeout, &loop, &QEventLoop::quit );
  timer.start( mTimeout );
  mApi.updateProject( projectNamespace, projectName );
  loop.exec();

  if ( !timer.isActive() )
    throw QString( "timeout for download" );
}

void ClientCommands::sync()
{
  Q_ASSERT( isAuthorized() );
  LocalProject lp = mLocalProjectsManager.projectFromDirectory( QDir::currentPath() );
  if ( !lp.isValid() )
    throw QString( "no mergin project in the current directory" );
  download( lp.projectNamespace, lp.projectName );
}

static void printVal( bool isJsonFormat,
                      QTextStream &out,
                      const QString &key,
                      const QString &val,
                      bool isLast )
{

  QChar separator;
  QChar quote;
  QString space;
  if ( isJsonFormat )
  {
    separator = ',';
    quote = '"';
  }
  else
  {
    separator = '\n';
    space = " ";
  }

  out << quote << key << quote << ":"  << space << quote << val << quote
      ;

  if ( !isLast )
    out << separator;
}

void ClientCommands::info( bool isJsonFormat )
{
  Q_ASSERT( isAuthorized() );
  LocalProject lp = mLocalProjectsManager.projectFromDirectory( QDir::currentPath() );
  if ( !lp.isValid() )
    throw QString( "no mergin project in the current directory" );

  QTextStream out( stdout );

  QChar prefix;
  QChar suffix;
  if ( isJsonFormat )
  {
    suffix = '}';
    prefix = '{';
  }
  else
  {
    suffix = '\n';
  }

  out << prefix;
  printVal( isJsonFormat, out, "name", lp.projectName, false );
  printVal( isJsonFormat, out, "namespace", lp.projectNamespace, false );
  printVal( isJsonFormat, out, "id", lp.id(), false );
  printVal( isJsonFormat, out, "localVersion", QString::number( lp.localVersion ), true );
  out << suffix;
}


bool ClientCommands::isAuthorized()
{
  return !mApi.userAuth()->authToken().isEmpty();
}
