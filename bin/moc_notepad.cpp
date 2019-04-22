/****************************************************************************
** Meta object code from reading C++ file 'notepad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/notepad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notepad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Notepad_t {
    QByteArrayData data[23];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Notepad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Notepad_t qt_meta_stringdata_Notepad = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Notepad"
QT_MOC_LITERAL(1, 8, 7), // "setText"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "text"
QT_MOC_LITERAL(4, 22, 11), // "newDocument"
QT_MOC_LITERAL(5, 34, 4), // "open"
QT_MOC_LITERAL(6, 39, 4), // "save"
QT_MOC_LITERAL(7, 44, 6), // "saveAs"
QT_MOC_LITERAL(8, 51, 5), // "print"
QT_MOC_LITERAL(9, 57, 4), // "exit"
QT_MOC_LITERAL(10, 62, 4), // "copy"
QT_MOC_LITERAL(11, 67, 3), // "cut"
QT_MOC_LITERAL(12, 71, 5), // "paste"
QT_MOC_LITERAL(13, 77, 4), // "undo"
QT_MOC_LITERAL(14, 82, 4), // "redo"
QT_MOC_LITERAL(15, 87, 10), // "selectFont"
QT_MOC_LITERAL(16, 98, 11), // "setFontBold"
QT_MOC_LITERAL(17, 110, 4), // "bold"
QT_MOC_LITERAL(18, 115, 16), // "setFontUnderline"
QT_MOC_LITERAL(19, 132, 9), // "underline"
QT_MOC_LITERAL(20, 142, 13), // "setFontItalic"
QT_MOC_LITERAL(21, 156, 6), // "italic"
QT_MOC_LITERAL(22, 163, 5) // "about"

    },
    "Notepad\0setText\0\0text\0newDocument\0"
    "open\0save\0saveAs\0print\0exit\0copy\0cut\0"
    "paste\0undo\0redo\0selectFont\0setFontBold\0"
    "bold\0setFontUnderline\0underline\0"
    "setFontItalic\0italic\0about"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Notepad[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x0a /* Public */,
       4,    0,  102,    2, 0x08 /* Private */,
       5,    0,  103,    2, 0x08 /* Private */,
       6,    0,  104,    2, 0x08 /* Private */,
       7,    0,  105,    2, 0x08 /* Private */,
       8,    0,  106,    2, 0x08 /* Private */,
       9,    0,  107,    2, 0x08 /* Private */,
      10,    0,  108,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,
      16,    1,  114,    2, 0x08 /* Private */,
      18,    1,  117,    2, 0x08 /* Private */,
      20,    1,  120,    2, 0x08 /* Private */,
      22,    0,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
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
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,

       0        // eod
};

void Notepad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Notepad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->newDocument(); break;
        case 2: _t->open(); break;
        case 3: _t->save(); break;
        case 4: _t->saveAs(); break;
        case 5: _t->print(); break;
        case 6: _t->exit(); break;
        case 7: _t->copy(); break;
        case 8: _t->cut(); break;
        case 9: _t->paste(); break;
        case 10: _t->undo(); break;
        case 11: _t->redo(); break;
        case 12: _t->selectFont(); break;
        case 13: _t->setFontBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setFontUnderline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setFontItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->about(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Notepad::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Notepad.data,
    qt_meta_data_Notepad,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Notepad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Notepad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Notepad.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Notepad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
