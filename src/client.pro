TEMPLATE  = app
TARGET    = mergin
CONFIG   += console
CONFIG   -= app_bundle

QT += core network
QT -= gui

INCLUDEPATH += $${INPUT_DIR}}/core

include(config.pri)
include($${INPUT_DIR}}/app/version.pri)
include($${INPUT_DIR}}/core/core.pri)

SOURCES += \
  clientmain.cpp \
  clientcommands.cpp

HEADERS += \
  clientcommands.h

# Geodiff
INCLUDEPATH += $${GEODIFF_INCLUDE_DIR}
LIBS += -L$${GEODIFF_LIB_DIR}
LIBS += -lgeodiff
