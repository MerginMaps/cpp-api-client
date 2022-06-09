/****************************************************************************
** Meta object code from reading C++ file 'project.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../input/core/project.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'project.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocalProject_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalProject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalProject_t qt_meta_stringdata_LocalProject = {
    {
QT_MOC_LITERAL(0, 0, 12) // "LocalProject"

    },
    "LocalProject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalProject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject LocalProject::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_LocalProject.data,
    qt_meta_data_LocalProject,
    nullptr,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_ProjectStatus_t {
    QByteArrayData data[6];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProjectStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProjectStatus_t qt_meta_stringdata_ProjectStatus = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProjectStatus"
QT_MOC_LITERAL(1, 14, 6), // "Status"
QT_MOC_LITERAL(2, 21, 9), // "NoVersion"
QT_MOC_LITERAL(3, 31, 8), // "UpToDate"
QT_MOC_LITERAL(4, 40, 9), // "OutOfDate"
QT_MOC_LITERAL(5, 50, 8) // "Modified"

    },
    "ProjectStatus\0Status\0NoVersion\0UpToDate\0"
    "OutOfDate\0Modified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProjectStatus[] = {

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
       1,    1, 0x0,    4,   19,

 // enum data: key, value
       2, uint(ProjectStatus::NoVersion),
       3, uint(ProjectStatus::UpToDate),
       4, uint(ProjectStatus::OutOfDate),
       5, uint(ProjectStatus::Modified),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject ProjectStatus::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ProjectStatus.data,
    qt_meta_data_ProjectStatus,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
