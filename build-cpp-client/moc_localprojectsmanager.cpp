/****************************************************************************
** Meta object code from reading C++ file 'localprojectsmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../input/core/localprojectsmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'localprojectsmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocalProjectsManager_t {
    QByteArrayData data[14];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalProjectsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalProjectsManager_t qt_meta_stringdata_LocalProjectsManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "LocalProjectsManager"
QT_MOC_LITERAL(1, 21, 17), // "localProjectAdded"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "LocalProject"
QT_MOC_LITERAL(4, 53, 7), // "project"
QT_MOC_LITERAL(5, 61, 23), // "localProjectDataChanged"
QT_MOC_LITERAL(6, 85, 25), // "aboutToRemoveLocalProject"
QT_MOC_LITERAL(7, 111, 15), // "dataDirReloaded"
QT_MOC_LITERAL(8, 127, 18), // "removeLocalProject"
QT_MOC_LITERAL(9, 146, 9), // "projectId"
QT_MOC_LITERAL(10, 156, 14), // "projectIsValid"
QT_MOC_LITERAL(11, 171, 4), // "path"
QT_MOC_LITERAL(12, 176, 11), // "projectName"
QT_MOC_LITERAL(13, 188, 14) // "projectChanges"

    },
    "LocalProjectsManager\0localProjectAdded\0"
    "\0LocalProject\0project\0localProjectDataChanged\0"
    "aboutToRemoveLocalProject\0dataDirReloaded\0"
    "removeLocalProject\0projectId\0"
    "projectIsValid\0path\0projectName\0"
    "projectChanges"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalProjectsManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       7,    0,   68,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   69,    2, 0x02 /* Public */,
      10,    1,   72,    2, 0x02 /* Public */,
       9,    1,   75,    2, 0x02 /* Public */,
      12,    1,   78,    2, 0x02 /* Public */,
      13,    1,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Bool, QMetaType::QString,   11,
    QMetaType::QString, QMetaType::QString,   11,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::QString, QMetaType::QString,    9,

       0        // eod
};

void LocalProjectsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocalProjectsManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localProjectAdded((*reinterpret_cast< const LocalProject(*)>(_a[1]))); break;
        case 1: _t->localProjectDataChanged((*reinterpret_cast< const LocalProject(*)>(_a[1]))); break;
        case 2: _t->aboutToRemoveLocalProject((*reinterpret_cast< const LocalProject(*)>(_a[1]))); break;
        case 3: _t->dataDirReloaded(); break;
        case 4: _t->removeLocalProject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { bool _r = _t->projectIsValid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->projectId((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->projectName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->projectChanges((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LocalProjectsManager::*)(const LocalProject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalProjectsManager::localProjectAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LocalProjectsManager::*)(const LocalProject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalProjectsManager::localProjectDataChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LocalProjectsManager::*)(const LocalProject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalProjectsManager::aboutToRemoveLocalProject)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LocalProjectsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalProjectsManager::dataDirReloaded)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LocalProjectsManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LocalProjectsManager.data,
    qt_meta_data_LocalProjectsManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LocalProjectsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalProjectsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalProjectsManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LocalProjectsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void LocalProjectsManager::localProjectAdded(const LocalProject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LocalProjectsManager::localProjectDataChanged(const LocalProject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LocalProjectsManager::aboutToRemoveLocalProject(const LocalProject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LocalProjectsManager::dataDirReloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
