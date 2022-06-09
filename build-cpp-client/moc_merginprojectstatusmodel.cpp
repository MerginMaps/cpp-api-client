/****************************************************************************
** Meta object code from reading C++ file 'merginprojectstatusmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../input/core/merginprojectstatusmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'merginprojectstatusmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MerginProjectStatusModel_t {
    QByteArrayData data[22];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MerginProjectStatusModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MerginProjectStatusModel_t qt_meta_stringdata_MerginProjectStatusModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "MerginProjectStatusModel"
QT_MOC_LITERAL(1, 25, 4), // "data"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 43, 5), // "index"
QT_MOC_LITERAL(5, 49, 4), // "role"
QT_MOC_LITERAL(6, 54, 15), // "loadProjectInfo"
QT_MOC_LITERAL(7, 70, 15), // "projectFullName"
QT_MOC_LITERAL(8, 86, 22), // "ProjectChangelogStatus"
QT_MOC_LITERAL(9, 109, 5), // "Added"
QT_MOC_LITERAL(10, 115, 7), // "Deleted"
QT_MOC_LITERAL(11, 123, 7), // "Updated"
QT_MOC_LITERAL(12, 131, 9), // "Changelog"
QT_MOC_LITERAL(13, 141, 7), // "Message"
QT_MOC_LITERAL(14, 149, 5), // "Roles"
QT_MOC_LITERAL(15, 155, 6), // "Status"
QT_MOC_LITERAL(16, 162, 4), // "Text"
QT_MOC_LITERAL(17, 167, 8), // "Filename"
QT_MOC_LITERAL(18, 176, 7), // "Inserts"
QT_MOC_LITERAL(19, 184, 7), // "Deletes"
QT_MOC_LITERAL(20, 192, 7), // "Updates"
QT_MOC_LITERAL(21, 200, 7) // "Section"

    },
    "MerginProjectStatusModel\0data\0\0"
    "QModelIndex\0index\0role\0loadProjectInfo\0"
    "projectFullName\0ProjectChangelogStatus\0"
    "Added\0Deleted\0Updated\0Changelog\0Message\0"
    "Roles\0Status\0Text\0Filename\0Inserts\0"
    "Deletes\0Updates\0Section"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MerginProjectStatusModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       2,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x02 /* Public */,
       6,    1,   29,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QVariant, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Bool, QMetaType::QString,    7,

 // enums: name, alias, flags, count, data
       8,    8, 0x0,    5,   42,
      14,   14, 0x0,    7,   52,

 // enum data: key, value
       9, uint(MerginProjectStatusModel::Added),
      10, uint(MerginProjectStatusModel::Deleted),
      11, uint(MerginProjectStatusModel::Updated),
      12, uint(MerginProjectStatusModel::Changelog),
      13, uint(MerginProjectStatusModel::Message),
      15, uint(MerginProjectStatusModel::Status),
      16, uint(MerginProjectStatusModel::Text),
      17, uint(MerginProjectStatusModel::Filename),
      18, uint(MerginProjectStatusModel::Inserts),
      19, uint(MerginProjectStatusModel::Deletes),
      20, uint(MerginProjectStatusModel::Updates),
      21, uint(MerginProjectStatusModel::Section),

       0        // eod
};

void MerginProjectStatusModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MerginProjectStatusModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QVariant _r = _t->data((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->loadProjectInfo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MerginProjectStatusModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_MerginProjectStatusModel.data,
    qt_meta_data_MerginProjectStatusModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MerginProjectStatusModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MerginProjectStatusModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MerginProjectStatusModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int MerginProjectStatusModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
