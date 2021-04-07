win32 {
  INPUT_DIR = $$PWD/../input
  GEODIFF_INCLUDE_DIR = $$PWD/../geodiff/geodiff
  GEODIFF_LIB_DIR = $$PWD/../build-geodiff
}

lnx {
  INPUT_DIR = $$PWD/../input
  GEODIFF_INCLUDE_DIR = /usr/include
  GEODIFF_LIB_DIR = /usr/lib
}

mac {
  INPUT_DIR = $$PWD/../input
  GEODIFF_INCLUDE_DIR = /usr/local/include
  GEODIFF_LIB_DIR = /usr/local/lib
}