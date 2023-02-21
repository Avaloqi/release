/****************************************************************************
** Meta object code from reading C++ file 'chuweiqi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "chuweiqi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chuweiqi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChuWeiQI_t {
    QByteArrayData data[8];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChuWeiQI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChuWeiQI_t qt_meta_stringdata_ChuWeiQI = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ChuWeiQI"
QT_MOC_LITERAL(1, 9, 8), // "backPage"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 18), // "on_pb_back_clicked"
QT_MOC_LITERAL(4, 38, 22), // "on_pb_ChangGui_clicked"
QT_MOC_LITERAL(5, 61, 27), // "on_pb_FangShaJiaoDu_clicked"
QT_MOC_LITERAL(6, 89, 24), // "on_pb_ChuanGanQi_clicked"
QT_MOC_LITERAL(7, 114, 27) // "on_pb_WeiShaZhiDong_clicked"

    },
    "ChuWeiQI\0backPage\0\0on_pb_back_clicked\0"
    "on_pb_ChangGui_clicked\0"
    "on_pb_FangShaJiaoDu_clicked\0"
    "on_pb_ChuanGanQi_clicked\0"
    "on_pb_WeiShaZhiDong_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChuWeiQI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChuWeiQI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChuWeiQI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backPage(); break;
        case 1: _t->on_pb_back_clicked(); break;
        case 2: _t->on_pb_ChangGui_clicked(); break;
        case 3: _t->on_pb_FangShaJiaoDu_clicked(); break;
        case 4: _t->on_pb_ChuanGanQi_clicked(); break;
        case 5: _t->on_pb_WeiShaZhiDong_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChuWeiQI::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChuWeiQI::backPage)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ChuWeiQI::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ChuWeiQI.data,
    qt_meta_data_ChuWeiQI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChuWeiQI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChuWeiQI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChuWeiQI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ChuWeiQI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ChuWeiQI::backPage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
