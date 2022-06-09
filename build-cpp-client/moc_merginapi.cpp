/****************************************************************************
** Meta object code from reading C++ file 'merginapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../input/core/merginapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'merginapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MerginApi_t {
    QByteArrayData data[118];
    char stringdata0[1958];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MerginApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MerginApi_t qt_meta_stringdata_MerginApi = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MerginApi"
QT_MOC_LITERAL(1, 10, 31), // "apiSupportsSubscriptionsChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 28), // "supportsSelectiveSyncChanged"
QT_MOC_LITERAL(4, 72, 20), // "listProjectsFinished"
QT_MOC_LITERAL(5, 93, 18), // "MerginProjectsList"
QT_MOC_LITERAL(6, 112, 14), // "merginProjects"
QT_MOC_LITERAL(7, 127, 12), // "projectCount"
QT_MOC_LITERAL(8, 140, 4), // "page"
QT_MOC_LITERAL(9, 145, 9), // "requestId"
QT_MOC_LITERAL(10, 155, 18), // "listProjectsFailed"
QT_MOC_LITERAL(11, 174, 26), // "listProjectsByNameFinished"
QT_MOC_LITERAL(12, 201, 19), // "syncProjectFinished"
QT_MOC_LITERAL(13, 221, 15), // "projectFullName"
QT_MOC_LITERAL(14, 237, 12), // "successfully"
QT_MOC_LITERAL(15, 250, 7), // "version"
QT_MOC_LITERAL(16, 258, 28), // "projectReloadNeededAfterSync"
QT_MOC_LITERAL(17, 287, 24), // "syncProjectStatusChanged"
QT_MOC_LITERAL(18, 312, 8), // "progress"
QT_MOC_LITERAL(19, 321, 20), // "networkErrorOccurred"
QT_MOC_LITERAL(20, 342, 7), // "message"
QT_MOC_LITERAL(21, 350, 5), // "topic"
QT_MOC_LITERAL(22, 356, 8), // "httpCode"
QT_MOC_LITERAL(23, 365, 19), // "storageLimitReached"
QT_MOC_LITERAL(24, 385, 10), // "uploadSize"
QT_MOC_LITERAL(25, 396, 6), // "notify"
QT_MOC_LITERAL(26, 403, 13), // "authRequested"
QT_MOC_LITERAL(27, 417, 11), // "authChanged"
QT_MOC_LITERAL(28, 429, 10), // "authFailed"
QT_MOC_LITERAL(29, 440, 21), // "registrationSucceeded"
QT_MOC_LITERAL(30, 462, 18), // "registrationFailed"
QT_MOC_LITERAL(31, 481, 14), // "apiRootChanged"
QT_MOC_LITERAL(32, 496, 23), // "apiVersionStatusChanged"
QT_MOC_LITERAL(33, 520, 14), // "projectCreated"
QT_MOC_LITERAL(34, 535, 6), // "result"
QT_MOC_LITERAL(35, 542, 20), // "serverProjectDeleted"
QT_MOC_LITERAL(36, 563, 14), // "projecFullName"
QT_MOC_LITERAL(37, 578, 15), // "userInfoChanged"
QT_MOC_LITERAL(38, 594, 23), // "subscriptionInfoChanged"
QT_MOC_LITERAL(39, 618, 13), // "configChanged"
QT_MOC_LITERAL(40, 632, 18), // "pingMerginFinished"
QT_MOC_LITERAL(41, 651, 10), // "apiVersion"
QT_MOC_LITERAL(42, 662, 27), // "serverSupportsSubscriptions"
QT_MOC_LITERAL(43, 690, 3), // "msg"
QT_MOC_LITERAL(44, 694, 16), // "pullFilesStarted"
QT_MOC_LITERAL(45, 711, 16), // "pushFilesStarted"
QT_MOC_LITERAL(46, 728, 12), // "pushCanceled"
QT_MOC_LITERAL(47, 741, 18), // "projectDataChanged"
QT_MOC_LITERAL(48, 760, 15), // "projectDetached"
QT_MOC_LITERAL(49, 776, 23), // "projectAttachedToMergin"
QT_MOC_LITERAL(50, 800, 19), // "previousProjectName"
QT_MOC_LITERAL(51, 820, 29), // "projectAlreadyOnLatestVersion"
QT_MOC_LITERAL(52, 850, 25), // "missingAuthorizationError"
QT_MOC_LITERAL(53, 876, 14), // "accountDeleted"
QT_MOC_LITERAL(54, 891, 21), // "userIsAnOrgOwnerError"
QT_MOC_LITERAL(55, 913, 25), // "listProjectsReplyFinished"
QT_MOC_LITERAL(56, 939, 31), // "listProjectsByNameReplyFinished"
QT_MOC_LITERAL(57, 971, 21), // "pullInfoReplyFinished"
QT_MOC_LITERAL(58, 993, 25), // "downloadItemReplyFinished"
QT_MOC_LITERAL(59, 1019, 17), // "cacheServerConfig"
QT_MOC_LITERAL(60, 1037, 22), // "pushStartReplyFinished"
QT_MOC_LITERAL(61, 1060, 21), // "pushInfoReplyFinished"
QT_MOC_LITERAL(62, 1082, 21), // "pushFileReplyFinished"
QT_MOC_LITERAL(63, 1104, 23), // "pushFinishReplyFinished"
QT_MOC_LITERAL(64, 1128, 23), // "pushCancelReplyFinished"
QT_MOC_LITERAL(65, 1152, 19), // "getUserInfoFinished"
QT_MOC_LITERAL(66, 1172, 27), // "getSubscriptionInfoFinished"
QT_MOC_LITERAL(67, 1200, 12), // "saveAuthData"
QT_MOC_LITERAL(68, 1213, 21), // "createProjectFinished"
QT_MOC_LITERAL(69, 1235, 21), // "deleteProjectFinished"
QT_MOC_LITERAL(70, 1257, 10), // "informUser"
QT_MOC_LITERAL(71, 1268, 17), // "authorizeFinished"
QT_MOC_LITERAL(72, 1286, 20), // "registrationFinished"
QT_MOC_LITERAL(73, 1307, 8), // "username"
QT_MOC_LITERAL(74, 1316, 8), // "password"
QT_MOC_LITERAL(75, 1325, 23), // "pingMerginReplyFinished"
QT_MOC_LITERAL(76, 1349, 21), // "deleteAccountFinished"
QT_MOC_LITERAL(77, 1371, 22), // "onPlanProductIdChanged"
QT_MOC_LITERAL(78, 1394, 12), // "listProjects"
QT_MOC_LITERAL(79, 1407, 16), // "searchExpression"
QT_MOC_LITERAL(80, 1424, 4), // "flag"
QT_MOC_LITERAL(81, 1429, 9), // "filterTag"
QT_MOC_LITERAL(82, 1439, 18), // "listProjectsByName"
QT_MOC_LITERAL(83, 1458, 12), // "projectNames"
QT_MOC_LITERAL(84, 1471, 11), // "pullProject"
QT_MOC_LITERAL(85, 1483, 16), // "projectNamespace"
QT_MOC_LITERAL(86, 1500, 11), // "projectName"
QT_MOC_LITERAL(87, 1512, 8), // "withAuth"
QT_MOC_LITERAL(88, 1521, 11), // "pushProject"
QT_MOC_LITERAL(89, 1533, 13), // "isInitialPush"
QT_MOC_LITERAL(90, 1547, 10), // "cancelPush"
QT_MOC_LITERAL(91, 1558, 10), // "cancelPull"
QT_MOC_LITERAL(92, 1569, 9), // "authorize"
QT_MOC_LITERAL(93, 1579, 5), // "login"
QT_MOC_LITERAL(94, 1585, 11), // "getUserInfo"
QT_MOC_LITERAL(95, 1597, 19), // "getSubscriptionInfo"
QT_MOC_LITERAL(96, 1617, 9), // "clearAuth"
QT_MOC_LITERAL(97, 1627, 12), // "resetApiRoot"
QT_MOC_LITERAL(98, 1640, 16), // "resetPasswordUrl"
QT_MOC_LITERAL(99, 1657, 12), // "registerUser"
QT_MOC_LITERAL(100, 1670, 5), // "email"
QT_MOC_LITERAL(101, 1676, 15), // "confirmPassword"
QT_MOC_LITERAL(102, 1692, 11), // "acceptedTOC"
QT_MOC_LITERAL(103, 1704, 10), // "pingMergin"
QT_MOC_LITERAL(104, 1715, 22), // "migrateProjectToMergin"
QT_MOC_LITERAL(105, 1738, 23), // "detachProjectFromMergin"
QT_MOC_LITERAL(106, 1762, 13), // "deleteAccount"
QT_MOC_LITERAL(107, 1776, 18), // "getFullProjectName"
QT_MOC_LITERAL(108, 1795, 8), // "userAuth"
QT_MOC_LITERAL(109, 1804, 15), // "MerginUserAuth*"
QT_MOC_LITERAL(110, 1820, 8), // "userInfo"
QT_MOC_LITERAL(111, 1829, 15), // "MerginUserInfo*"
QT_MOC_LITERAL(112, 1845, 16), // "subscriptionInfo"
QT_MOC_LITERAL(113, 1862, 23), // "MerginSubscriptionInfo*"
QT_MOC_LITERAL(114, 1886, 7), // "apiRoot"
QT_MOC_LITERAL(115, 1894, 24), // "apiSupportsSubscriptions"
QT_MOC_LITERAL(116, 1919, 21), // "supportsSelectiveSync"
QT_MOC_LITERAL(117, 1941, 16) // "apiVersionStatus"

    },
    "MerginApi\0apiSupportsSubscriptionsChanged\0"
    "\0supportsSelectiveSyncChanged\0"
    "listProjectsFinished\0MerginProjectsList\0"
    "merginProjects\0projectCount\0page\0"
    "requestId\0listProjectsFailed\0"
    "listProjectsByNameFinished\0"
    "syncProjectFinished\0projectFullName\0"
    "successfully\0version\0projectReloadNeededAfterSync\0"
    "syncProjectStatusChanged\0progress\0"
    "networkErrorOccurred\0message\0topic\0"
    "httpCode\0storageLimitReached\0uploadSize\0"
    "notify\0authRequested\0authChanged\0"
    "authFailed\0registrationSucceeded\0"
    "registrationFailed\0apiRootChanged\0"
    "apiVersionStatusChanged\0projectCreated\0"
    "result\0serverProjectDeleted\0projecFullName\0"
    "userInfoChanged\0subscriptionInfoChanged\0"
    "configChanged\0pingMerginFinished\0"
    "apiVersion\0serverSupportsSubscriptions\0"
    "msg\0pullFilesStarted\0pushFilesStarted\0"
    "pushCanceled\0projectDataChanged\0"
    "projectDetached\0projectAttachedToMergin\0"
    "previousProjectName\0projectAlreadyOnLatestVersion\0"
    "missingAuthorizationError\0accountDeleted\0"
    "userIsAnOrgOwnerError\0listProjectsReplyFinished\0"
    "listProjectsByNameReplyFinished\0"
    "pullInfoReplyFinished\0downloadItemReplyFinished\0"
    "cacheServerConfig\0pushStartReplyFinished\0"
    "pushInfoReplyFinished\0pushFileReplyFinished\0"
    "pushFinishReplyFinished\0pushCancelReplyFinished\0"
    "getUserInfoFinished\0getSubscriptionInfoFinished\0"
    "saveAuthData\0createProjectFinished\0"
    "deleteProjectFinished\0informUser\0"
    "authorizeFinished\0registrationFinished\0"
    "username\0password\0pingMerginReplyFinished\0"
    "deleteAccountFinished\0onPlanProductIdChanged\0"
    "listProjects\0searchExpression\0flag\0"
    "filterTag\0listProjectsByName\0projectNames\0"
    "pullProject\0projectNamespace\0projectName\0"
    "withAuth\0pushProject\0isInitialPush\0"
    "cancelPush\0cancelPull\0authorize\0login\0"
    "getUserInfo\0getSubscriptionInfo\0"
    "clearAuth\0resetApiRoot\0resetPasswordUrl\0"
    "registerUser\0email\0confirmPassword\0"
    "acceptedTOC\0pingMergin\0migrateProjectToMergin\0"
    "detachProjectFromMergin\0deleteAccount\0"
    "getFullProjectName\0userAuth\0MerginUserAuth*\0"
    "userInfo\0MerginUserInfo*\0subscriptionInfo\0"
    "MerginSubscriptionInfo*\0apiRoot\0"
    "apiSupportsSubscriptions\0supportsSelectiveSync\0"
    "apiVersionStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MerginApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      86,   14, // methods
       7,  700, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      36,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  444,    2, 0x06 /* Public */,
       3,    0,  445,    2, 0x06 /* Public */,
       4,    4,  446,    2, 0x06 /* Public */,
      10,    0,  455,    2, 0x06 /* Public */,
      11,    2,  456,    2, 0x06 /* Public */,
      12,    3,  461,    2, 0x06 /* Public */,
      16,    1,  468,    2, 0x06 /* Public */,
      17,    2,  471,    2, 0x06 /* Public */,
      19,    4,  476,    2, 0x06 /* Public */,
      19,    3,  485,    2, 0x26 /* Public | MethodCloned */,
      19,    2,  492,    2, 0x26 /* Public | MethodCloned */,
      23,    1,  497,    2, 0x06 /* Public */,
      25,    1,  500,    2, 0x06 /* Public */,
      26,    0,  503,    2, 0x06 /* Public */,
      27,    0,  504,    2, 0x06 /* Public */,
      28,    0,  505,    2, 0x06 /* Public */,
      29,    0,  506,    2, 0x06 /* Public */,
      30,    0,  507,    2, 0x06 /* Public */,
      31,    0,  508,    2, 0x06 /* Public */,
      32,    0,  509,    2, 0x06 /* Public */,
      33,    2,  510,    2, 0x06 /* Public */,
      35,    2,  515,    2, 0x06 /* Public */,
      37,    0,  520,    2, 0x06 /* Public */,
      38,    0,  521,    2, 0x06 /* Public */,
      39,    0,  522,    2, 0x06 /* Public */,
      40,    3,  523,    2, 0x06 /* Public */,
      44,    0,  530,    2, 0x06 /* Public */,
      45,    0,  531,    2, 0x06 /* Public */,
      46,    2,  532,    2, 0x06 /* Public */,
      47,    1,  537,    2, 0x06 /* Public */,
      48,    1,  540,    2, 0x06 /* Public */,
      49,    2,  543,    2, 0x06 /* Public */,
      51,    1,  548,    2, 0x06 /* Public */,
      52,    1,  551,    2, 0x06 /* Public */,
      53,    1,  554,    2, 0x06 /* Public */,
      54,    0,  557,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      55,    1,  558,    2, 0x08 /* Private */,
      56,    1,  561,    2, 0x08 /* Private */,
      57,    0,  564,    2, 0x08 /* Private */,
      58,    0,  565,    2, 0x08 /* Private */,
      59,    0,  566,    2, 0x08 /* Private */,
      60,    0,  567,    2, 0x08 /* Private */,
      61,    0,  568,    2, 0x08 /* Private */,
      62,    0,  569,    2, 0x08 /* Private */,
      63,    0,  570,    2, 0x08 /* Private */,
      64,    0,  571,    2, 0x08 /* Private */,
      65,    0,  572,    2, 0x08 /* Private */,
      66,    0,  573,    2, 0x08 /* Private */,
      67,    0,  574,    2, 0x08 /* Private */,
      68,    0,  575,    2, 0x08 /* Private */,
      69,    1,  576,    2, 0x08 /* Private */,
      69,    0,  579,    2, 0x28 /* Private | MethodCloned */,
      71,    0,  580,    2, 0x08 /* Private */,
      72,    2,  581,    2, 0x08 /* Private */,
      72,    1,  586,    2, 0x28 /* Private | MethodCloned */,
      72,    0,  589,    2, 0x28 /* Private | MethodCloned */,
      75,    0,  590,    2, 0x08 /* Private */,
      76,    0,  591,    2, 0x08 /* Private */,
      77,    0,  592,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      78,    4,  593,    2, 0x02 /* Public */,
      78,    3,  602,    2, 0x22 /* Public | MethodCloned */,
      78,    2,  609,    2, 0x22 /* Public | MethodCloned */,
      78,    1,  614,    2, 0x22 /* Public | MethodCloned */,
      78,    0,  617,    2, 0x22 /* Public | MethodCloned */,
      82,    1,  618,    2, 0x02 /* Public */,
      82,    0,  621,    2, 0x22 /* Public | MethodCloned */,
      84,    3,  622,    2, 0x02 /* Public */,
      84,    2,  629,    2, 0x22 /* Public | MethodCloned */,
      88,    3,  634,    2, 0x02 /* Public */,
      88,    2,  641,    2, 0x22 /* Public | MethodCloned */,
      90,    1,  646,    2, 0x02 /* Public */,
      91,    1,  649,    2, 0x02 /* Public */,
      92,    2,  652,    2, 0x02 /* Public */,
      94,    0,  657,    2, 0x02 /* Public */,
      95,    0,  658,    2, 0x02 /* Public */,
      96,    0,  659,    2, 0x02 /* Public */,
      97,    0,  660,    2, 0x02 /* Public */,
      98,    0,  661,    2, 0x02 /* Public */,
      99,    5,  662,    2, 0x02 /* Public */,
     103,    0,  673,    2, 0x02 /* Public */,
     104,    2,  674,    2, 0x02 /* Public */,
     104,    1,  679,    2, 0x22 /* Public | MethodCloned */,
     105,    3,  682,    2, 0x02 /* Public */,
     105,    2,  689,    2, 0x22 /* Public | MethodCloned */,
     106,    0,  694,    2, 0x02 /* Public */,
     107,    2,  695,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int, QMetaType::QString,    6,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Int,   13,   14,   15,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QReal,   13,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,   20,   21,   22,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   20,   21,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::QReal,   24,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   13,   34,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   36,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,   41,   42,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   13,   34,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   50,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   70,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   73,   74,
    QMetaType::Void, QMetaType::QString,   73,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,   79,   80,   81,    8,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   79,   80,   81,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   79,   80,
    QMetaType::QString, QMetaType::QString,   79,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QStringList,   83,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   85,   86,   87,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   85,   86,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   85,   86,   89,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   85,   86,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   93,   74,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   73,  100,   74,  101,  102,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   86,   85,
    QMetaType::Void, QMetaType::QString,   86,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   85,   86,   70,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   85,   86,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   85,   86,

 // properties: name, type, flags
     108, 0x80000000 | 109, 0x00495009,
     110, 0x80000000 | 111, 0x00495009,
     112, 0x80000000 | 113, 0x00495009,
     114, QMetaType::QString, 0x00495103,
     115, QMetaType::Bool, 0x00495001,
     116, QMetaType::Bool, 0x00495001,
     117, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
      14,
      22,
      23,
      18,
       0,
       1,
      19,

       0        // eod
};

void MerginApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MerginApi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->apiSupportsSubscriptionsChanged(); break;
        case 1: _t->supportsSelectiveSyncChanged(); break;
        case 2: _t->listProjectsFinished((*reinterpret_cast< const MerginProjectsList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->listProjectsFailed(); break;
        case 4: _t->listProjectsByNameFinished((*reinterpret_cast< const MerginProjectsList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->syncProjectFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->projectReloadNeededAfterSync((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->syncProjectStatusChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 8: _t->networkErrorOccurred((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 9: _t->networkErrorOccurred((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->networkErrorOccurred((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->storageLimitReached((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 12: _t->notify((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->authRequested(); break;
        case 14: _t->authChanged(); break;
        case 15: _t->authFailed(); break;
        case 16: _t->registrationSucceeded(); break;
        case 17: _t->registrationFailed(); break;
        case 18: _t->apiRootChanged(); break;
        case 19: _t->apiVersionStatusChanged(); break;
        case 20: _t->projectCreated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->serverProjectDeleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->userInfoChanged(); break;
        case 23: _t->subscriptionInfoChanged(); break;
        case 24: _t->configChanged(); break;
        case 25: _t->pingMerginFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 26: _t->pullFilesStarted(); break;
        case 27: _t->pushFilesStarted(); break;
        case 28: _t->pushCanceled((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: _t->projectDataChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->projectDetached((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->projectAttachedToMergin((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 32: _t->projectAlreadyOnLatestVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->missingAuthorizationError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->accountDeleted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->userIsAnOrgOwnerError(); break;
        case 36: _t->listProjectsReplyFinished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 37: _t->listProjectsByNameReplyFinished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 38: _t->pullInfoReplyFinished(); break;
        case 39: _t->downloadItemReplyFinished(); break;
        case 40: _t->cacheServerConfig(); break;
        case 41: _t->pushStartReplyFinished(); break;
        case 42: _t->pushInfoReplyFinished(); break;
        case 43: _t->pushFileReplyFinished(); break;
        case 44: _t->pushFinishReplyFinished(); break;
        case 45: _t->pushCancelReplyFinished(); break;
        case 46: _t->getUserInfoFinished(); break;
        case 47: _t->getSubscriptionInfoFinished(); break;
        case 48: _t->saveAuthData(); break;
        case 49: _t->createProjectFinished(); break;
        case 50: _t->deleteProjectFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->deleteProjectFinished(); break;
        case 52: _t->authorizeFinished(); break;
        case 53: _t->registrationFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 54: _t->registrationFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 55: _t->registrationFinished(); break;
        case 56: _t->pingMerginReplyFinished(); break;
        case 57: _t->deleteAccountFinished(); break;
        case 58: _t->onPlanProductIdChanged(); break;
        case 59: { QString _r = _t->listProjects((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 60: { QString _r = _t->listProjects((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 61: { QString _r = _t->listProjects((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 62: { QString _r = _t->listProjects((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 63: { QString _r = _t->listProjects();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 64: { QString _r = _t->listProjectsByName((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 65: { QString _r = _t->listProjectsByName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 66: { bool _r = _t->pullProject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 67: { bool _r = _t->pullProject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 68: { bool _r = _t->pushProject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 69: { bool _r = _t->pushProject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->cancelPush((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 71: _t->cancelPull((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 72: _t->authorize((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 73: _t->getUserInfo(); break;
        case 74: _t->getSubscriptionInfo(); break;
        case 75: _t->clearAuth(); break;
        case 76: _t->resetApiRoot(); break;
        case 77: { QString _r = _t->resetPasswordUrl();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 78: _t->registerUser((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 79: _t->pingMergin(); break;
        case 80: _t->migrateProjectToMergin((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 81: _t->migrateProjectToMergin((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 82: _t->detachProjectFromMergin((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 83: _t->detachProjectFromMergin((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 84: _t->deleteAccount(); break;
        case 85: { QString _r = _t->getFullProjectName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MerginProjectsList >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MerginProjectsList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::apiSupportsSubscriptionsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::supportsSelectiveSyncChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const MerginProjectsList & , int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::listProjectsFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::listProjectsFailed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const MerginProjectsList & , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::listProjectsByNameFinished)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & , bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::syncProjectFinished)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::projectReloadNeededAfterSync)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::syncProjectStatusChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & , const QString & , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::networkErrorOccurred)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::storageLimitReached)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::notify)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::authRequested)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::authChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::authFailed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::registrationSucceeded)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::registrationFailed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::apiRootChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::apiVersionStatusChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::projectCreated)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::serverProjectDeleted)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::userInfoChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::subscriptionInfoChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::configChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & , bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::pingMerginFinished)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::pullFilesStarted)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::pushFilesStarted)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::pushCanceled)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::projectDataChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::projectDetached)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::projectAttachedToMergin)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::projectAlreadyOnLatestVersion)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::missingAuthorizationError)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::accountDeleted)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (MerginApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MerginApi::userIsAnOrgOwnerError)) {
                *result = 35;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MerginApi *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< MerginUserAuth**>(_v) = _t->userAuth(); break;
        case 1: *reinterpret_cast< MerginUserInfo**>(_v) = _t->userInfo(); break;
        case 2: *reinterpret_cast< MerginSubscriptionInfo**>(_v) = _t->subscriptionInfo(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->apiRoot(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->apiSupportsSubscriptions(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->supportsSelectiveSync(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->apiVersionStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MerginApi *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setApiRoot(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MerginApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MerginApi.data,
    qt_meta_data_MerginApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MerginApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MerginApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MerginApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MerginApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 86)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 86;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 86)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 86;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MerginApi::apiSupportsSubscriptionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MerginApi::supportsSelectiveSyncChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MerginApi::listProjectsFinished(const MerginProjectsList & _t1, int _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MerginApi::listProjectsFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MerginApi::listProjectsByNameFinished(const MerginProjectsList & _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MerginApi::syncProjectFinished(const QString & _t1, bool _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MerginApi::projectReloadNeededAfterSync(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MerginApi::syncProjectStatusChanged(const QString & _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MerginApi::networkErrorOccurred(const QString & _t1, const QString & _t2, int _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 11
void MerginApi::storageLimitReached(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MerginApi::notify(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MerginApi::authRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MerginApi::authChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MerginApi::authFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MerginApi::registrationSucceeded()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void MerginApi::registrationFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void MerginApi::apiRootChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void MerginApi::apiVersionStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void MerginApi::projectCreated(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MerginApi::serverProjectDeleted(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MerginApi::userInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MerginApi::subscriptionInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void MerginApi::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void MerginApi::pingMerginFinished(const QString & _t1, bool _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MerginApi::pullFilesStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void MerginApi::pushFilesStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void MerginApi::pushCanceled(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void MerginApi::projectDataChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void MerginApi::projectDetached(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void MerginApi::projectAttachedToMergin(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void MerginApi::projectAlreadyOnLatestVersion(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void MerginApi::missingAuthorizationError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MerginApi::accountDeleted(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MerginApi::userIsAnOrgOwnerError()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
