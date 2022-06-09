/****************************************************************************
** Meta object code from reading C++ file 'merginsubscriptiontype.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../input/core/merginsubscriptiontype.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'merginsubscriptiontype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MerginSubscriptionType_t {
    QByteArrayData data[6];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MerginSubscriptionType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MerginSubscriptionType_t qt_meta_stringdata_MerginSubscriptionType = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MerginSubscriptionType"
QT_MOC_LITERAL(1, 23, 16), // "SubscriptionType"
QT_MOC_LITERAL(2, 40, 20), // "NoneSubscriptionType"
QT_MOC_LITERAL(3, 61, 21), // "AppleSubscriptionType"
QT_MOC_LITERAL(4, 83, 22), // "StripeSubscriptionType"
QT_MOC_LITERAL(5, 106, 20) // "TestSubscriptionType"

    },
    "MerginSubscriptionType\0SubscriptionType\0"
    "NoneSubscriptionType\0AppleSubscriptionType\0"
    "StripeSubscriptionType\0TestSubscriptionType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MerginSubscriptionType[] = {

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
       2, uint(MerginSubscriptionType::NoneSubscriptionType),
       3, uint(MerginSubscriptionType::AppleSubscriptionType),
       4, uint(MerginSubscriptionType::StripeSubscriptionType),
       5, uint(MerginSubscriptionType::TestSubscriptionType),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject MerginSubscriptionType::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_MerginSubscriptionType.data,
    qt_meta_data_MerginSubscriptionType,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
