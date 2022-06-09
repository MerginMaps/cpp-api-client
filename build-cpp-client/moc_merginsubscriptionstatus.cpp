/****************************************************************************
** Meta object code from reading C++ file 'merginsubscriptionstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../input/core/merginsubscriptionstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'merginsubscriptionstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MerginSubscriptionStatus_t {
    QByteArrayData data[7];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MerginSubscriptionStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MerginSubscriptionStatus_t qt_meta_stringdata_MerginSubscriptionStatus = {
    {
QT_MOC_LITERAL(0, 0, 24), // "MerginSubscriptionStatus"
QT_MOC_LITERAL(1, 25, 18), // "SubscriptionStatus"
QT_MOC_LITERAL(2, 44, 16), // "FreeSubscription"
QT_MOC_LITERAL(3, 61, 17), // "ValidSubscription"
QT_MOC_LITERAL(4, 79, 25), // "SubscriptionInGracePeriod"
QT_MOC_LITERAL(5, 105, 24), // "SubscriptionUnsubscribed"
QT_MOC_LITERAL(6, 130, 20) // "CanceledSubscription"

    },
    "MerginSubscriptionStatus\0SubscriptionStatus\0"
    "FreeSubscription\0ValidSubscription\0"
    "SubscriptionInGracePeriod\0"
    "SubscriptionUnsubscribed\0CanceledSubscription"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MerginSubscriptionStatus[] = {

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
       2, uint(MerginSubscriptionStatus::FreeSubscription),
       3, uint(MerginSubscriptionStatus::ValidSubscription),
       4, uint(MerginSubscriptionStatus::SubscriptionInGracePeriod),
       5, uint(MerginSubscriptionStatus::SubscriptionUnsubscribed),
       6, uint(MerginSubscriptionStatus::CanceledSubscription),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject MerginSubscriptionStatus::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_MerginSubscriptionStatus.data,
    qt_meta_data_MerginSubscriptionStatus,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
