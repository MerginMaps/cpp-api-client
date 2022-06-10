win32 {
  INPUT_DIR = $$PWD/../../input
  GEODIFF_INCLUDE_DIR = $$PWD/../../geodiff/geodiff/src
  GEODIFF_LIB_DIR = $$PWD/../../build-geodiff/Release
  SQLITE3_INCLUDE_DIR = C:/vcpkg/packages/sqlite3_x64-windows-static/include
  SQLITE3_LIB_DIR = C:/vcpkg/packages/sqlite3_x64-windows-static/lib
}

unix {
  INPUT_DIR = $$PWD/../../input
  GEODIFF_INCLUDE_DIR = /usr/include
  GEODIFF_LIB_DIR = /usr/lib
  SQLITE3_INCLUDE_DIR = /usr/include
  SQLITE3_LIB_DIR = /usr/lib
}

mac {
  INPUT_DIR = $$PWD/../../input
  GEODIFF_INCLUDE_DIR = $$PWD/../../geodiff/geodiff/src
  GEODIFF_LIB_DIR = $$PWD/../../build-geodiff
  SQLITE3_INCLUDE_DIR = /usr/local/opt/sqlite3/include
  SQLITE3_LIB_DIR = /usr/local/opt/sqlite3/lib
}