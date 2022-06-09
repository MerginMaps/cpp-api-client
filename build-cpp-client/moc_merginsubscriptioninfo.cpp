/****************************************************************************
** Meta object code from reading C++ file 'merginsubscriptioninfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../input/core/merginsubscriptioninfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'merginsubscriptioninfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MerginSubscriptionInfo_t {
    QByteArrayData data[15];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MerginSubscriptionInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MerginSubscriptionInfo_t qt_meta_stringdata_MerginSubscriptionInfo = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MerginSubscriptionInfo"
QT_MOC_LITERAL(1, 23, 23), // "subscriptionInfoChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 20), // "planProductIdChanged"
QT_MOC_LITERAL(4, 69, 19), // "planProviderChanged"
QT_MOC_LITERAL(5, 89, 14), // "storageChanged"
QT_MOC_LITERAL(6, 104, 7), // "storage"
QT_MOC_LITERAL(7, 112, 9), // "planAlias"
QT_MOC_LITERAL(8, 122, 12), // "planProvider"
QT_MOC_LITERAL(9, 135, 13), // "planProductId"
QT_MOC_LITERAL(10, 149, 18), // "subscriptionStatus"
QT_MOC_LITERAL(11, 168, 21), // "subscriptionTimestamp"
QT_MOC_LITERAL(12, 190, 13), // "nextBillPrice"
QT_MOC_LITERAL(13, 204, 22), // "ownsActiveSubscription"
QT_MOC_LITERAL(14, 227, 14) // "actionRequired"

    },
    "MerginSubscriptionInfo\0subscriptionInfoChanged\0"
    "\0planProductIdChanged\0planProviderChanged\0"
    "storageChanged\0storage\0planAlias\0"
    "planProvider\0planProductId\0"
    "subscriptionStatus\0subscriptionTimestamp\0"
    "nextBillPrice\0ownsActiveSubscription\0"
    "actionRequired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MerginSubscriptionInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       8,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495001,
       8, QMetaType::Int, 0x00495001,
       9, QMetaType::QString, 0x00495001,
      10, QMetaType::Int, 0x00495001,
      11, QMetaType::QString, 0x00495001,
      12, QMetaType::QString, 0x00495001,
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void MerginSubscriptionInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MerginSubscriptionInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->subscriptionInfoChanged(); break;
        case 1: _t->planProductIdChanged(); break;
        case 2: _t->planProviderChanged(); break;
        case 3: _t->storageChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MerginSubscriptionInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginSubscriptionInfo::subscriptionInfoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MerginSubscriptionInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginSubscriptionInfo::planProductIdChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MerginSubscriptionInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginSubscriptionInfo::planProviderChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MerginSubscriptionInfo::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginSubscriptionInfo::storageChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MerginSubscriptionInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->planAlias(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->planProvider(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->planProductId(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->subscriptionStatus(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->subscriptionTimestamp(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->nextBillPrice(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->ownsActiveSubscription(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->actionRequired(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MerginSubscriptionInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MerginSubscriptionInfo.data,
    qt_meta_data_MerginSubscriptionInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MerginSubscriptionInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MerginSubscriptionInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MerginSubscriptionInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MerginSubscriptionInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MerginSubscriptionInfo::subscriptionInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MerginSubscriptionInfo::planProductIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MerginSubscriptionInfo::planProviderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MerginSubscriptionInfo::storageChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
