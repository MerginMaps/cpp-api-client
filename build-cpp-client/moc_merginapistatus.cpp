/****************************************************************************
** Meta object code from reading C++ file 'merginapistatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../input/core/merginapistatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'merginapistatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MerginApiStatus_t {
    QByteArrayData data[7];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MerginApiStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MerginApiStatus_t qt_meta_stringdata_MerginApiStatus = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MerginApiStatus"
QT_MOC_LITERAL(1, 16, 13), // "VersionStatus"
QT_MOC_LITERAL(2, 30, 7), // "UNKNOWN"
QT_MOC_LITERAL(3, 38, 7), // "PENDING"
QT_MOC_LITERAL(4, 46, 9), // "NOT_FOUND"
QT_MOC_LITERAL(5, 56, 2), // "OK"
QT_MOC_LITERAL(6, 59, 12) // "INCOMPATIBLE"

    },
    "MerginApiStatus\0VersionStatus\0UNKNOWN\0"
    "PENDING\0NOT_FOUND\0OK\0INCOMPATIBLE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MerginApiStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    5,   19,

 // enum data: key, value
       2, uint(MerginApiStatus::UNKNOWN),
       3, uint(MerginApiStatus::PENDING),
       4, uint(MerginApiStatus::NOT_FOUND),
       5, uint(MerginApiStatus::OK),
       6, uint(MerginApiStatus::INCOMPATIBLE),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject MerginApiStatus::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_MerginApiStatus.data,
    qt_meta_data_MerginApiStatus,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
