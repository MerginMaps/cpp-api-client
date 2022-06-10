TEMPLATE  = app
TARGET    = mergin
CONFIG   += c++17
CONFIG   += console
CONFIG   -= app_bundle

QT += core network
QT -= gui

include(config.pri)
include($${INPUT_DIR}/app/version.pri)
include($${INPUT_DIR}/core/core.pri)

INCLUDEPATH += $${INPUT_DIR}/core

SOURCES += \
  clientmain.cpp \
  clientcommands.cpp

HEADERS += \
  clientcommands.h

# Geodiff
DEFINES += "GEODIFF_STATIC"
INCLUDEPATH += $${GEODIFF_INCLUDE_DIR}
LIBS += -L$${GEODIFF_LIB_DIR}
LIBS += -lgeodiff 

INCLUDEPATH += $${SQLITE3_INCLUDE_DIR}
LIBS += -L$${SQLITE3_LIB_DIR}
LIBS += -lsqlite3 

win32 {
    LIBS += -lshlwapi
}
