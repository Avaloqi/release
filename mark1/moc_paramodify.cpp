/****************************************************************************
** Meta object code from reading C++ file 'paramodify.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "paramodify.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paramodify.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParaModify_t {
    QByteArrayData data[10];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParaModify_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParaModify_t qt_meta_stringdata_ParaModify = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ParaModify"
QT_MOC_LITERAL(1, 11, 8), // "mainShow"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 18), // "on_pb_back_clicked"
QT_MOC_LITERAL(4, 40, 22), // "on_pb_ChuWeiQI_clicked"
QT_MOC_LITERAL(5, 63, 26), // "on_pb_YinWeiCanShu_clicked"
QT_MOC_LITERAL(6, 90, 27), // "on_pb_TanWeiSheDing_clicked"
QT_MOC_LITERAL(7, 118, 27), // "on_pb_JingShaJianCe_clicked"
QT_MOC_LITERAL(8, 146, 27), // "on_pb_QITingSheDing_clicked"
QT_MOC_LITERAL(9, 174, 30) // "on_pb_DIngChangSheDing_clicked"

    },
    "ParaModify\0mainShow\0\0on_pb_back_clicked\0"
    "on_pb_ChuWeiQI_clicked\0"
    "on_pb_YinWeiCanShu_clicked\0"
    "on_pb_TanWeiSheDing_clicked\0"
    "on_pb_JingShaJianCe_clicked\0"
    "on_pb_QITingSheDing_clicked\0"
    "on_pb_DIngChangSheDing_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParaModify[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ParaModify::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParaModify *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mainShow(); break;
        case 1: _t->on_pb_back_clicked(); break;
        case 2: _t->on_pb_ChuWeiQI_clicked(); break;
        case 3: _t->on_pb_YinWeiCanShu_clicked(); break;
        case 4: _t->on_pb_TanWeiSheDing_clicked(); break;
        case 5: _t->on_pb_JingShaJianCe_clicked(); break;
        case 6: _t->on_pb_QITingSheDing_clicked(); break;
        case 7: _t->on_pb_DIngChangSheDing_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParaModify::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParaModify::mainShow)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ParaModify::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ParaModify.data,
    qt_meta_data_ParaModify,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParaModify::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParaModify::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParaModify.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ParaModify::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ParaModify::mainShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
