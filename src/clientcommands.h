/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

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

  private:
    bool isAuthorized();
    int mTimeout;
    LocalProjectsManager mLocalProjectsManager;
    MerginApi mApi;
};

#endif // CLIENTCOMMANDS_H
