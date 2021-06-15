/*
 * mergin-cpp-client
 * Copyright (C) 2021 Lutra Consulting
 * License: MIT
 */

#ifndef CLIENTCOMMANDS_H
#define CLIENTCOMMANDS_H

#include <memory>
#include <QtGlobal>

#include "coreutils.h"
#include "merginapi.h"

class ClientCommands: public QObject
{
  public:
    ClientCommands( const QString &dir, int timeout );

    void login(
      const QString &url,
      const QString &user,
      const QString &pass
    );

    void create( const QString &projectNamespace, const QString &projectName );
    void remove( const QString &projectNamespace, const QString &projectName );
    void download( const QString &projectNamespace, const QString &projectName );
    void sync( );
    void info( bool isJsonFormat );

  private:
    bool isAuthorized();
    int mTimeout;
    LocalProjectsManager mLocalProjectsManager;
    MerginApi mApi;
};

#endif // CLIENTCOMMANDS_H
