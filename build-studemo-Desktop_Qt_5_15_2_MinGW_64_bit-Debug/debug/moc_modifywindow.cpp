/****************************************************************************
** Meta object code from reading C++ file 'modifywindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../studemo/modifywindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifywindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_modifywindow_t {
    QByteArrayData data[13];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modifywindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modifywindow_t qt_meta_stringdata_modifywindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "modifywindow"
QT_MOC_LITERAL(1, 13, 6), // "modstu"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "name"
QT_MOC_LITERAL(4, 26, 6), // "stunum"
QT_MOC_LITERAL(5, 33, 3), // "sex"
QT_MOC_LITERAL(6, 37, 8), // "stuclass"
QT_MOC_LITERAL(7, 46, 3), // "gpa"
QT_MOC_LITERAL(8, 50, 4), // "modi"
QT_MOC_LITERAL(9, 55, 29), // "on_StuNumlineEdit_textChanged"
QT_MOC_LITERAL(10, 85, 4), // "arg1"
QT_MOC_LITERAL(11, 90, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(12, 114, 21) // "on_pushButton_clicked"

    },
    "modifywindow\0modstu\0\0name\0stunum\0sex\0"
    "stuclass\0gpa\0modi\0on_StuNumlineEdit_textChanged\0"
    "arg1\0on_pushButton_3_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modifywindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   47,    2, 0x08 /* Private */,
      11,    0,   50,    2, 0x08 /* Private */,
      12,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::QString,    3,    4,    5,    6,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void modifywindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modifywindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modstu((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 1: _t->on_StuNumlineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (modifywindow::*)(QString , int , QString , QString , double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&modifywindow::modstu)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject modifywindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_modifywindow.data,
    qt_meta_data_modifywindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modifywindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modifywindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modifywindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int modifywindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void modifywindow::modstu(QString _t1, int _t2, QString _t3, QString _t4, double _t5, QString _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
