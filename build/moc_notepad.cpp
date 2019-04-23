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
    QByteArrayData data[25];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Notepad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Notepad_t qt_meta_stringdata_Notepad = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Notepad"
QT_MOC_LITERAL(1, 8, 14), // "contentChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "keyPressed"
QT_MOC_LITERAL(4, 35, 7), // "setText"
QT_MOC_LITERAL(5, 43, 4), // "text"
QT_MOC_LITERAL(6, 48, 11), // "newDocument"
QT_MOC_LITERAL(7, 60, 4), // "open"
QT_MOC_LITERAL(8, 65, 4), // "save"
QT_MOC_LITERAL(9, 70, 6), // "saveAs"
QT_MOC_LITERAL(10, 77, 5), // "print"
QT_MOC_LITERAL(11, 83, 4), // "exit"
QT_MOC_LITERAL(12, 88, 4), // "copy"
QT_MOC_LITERAL(13, 93, 3), // "cut"
QT_MOC_LITERAL(14, 97, 5), // "paste"
QT_MOC_LITERAL(15, 103, 4), // "undo"
QT_MOC_LITERAL(16, 108, 4), // "redo"
QT_MOC_LITERAL(17, 113, 10), // "selectFont"
QT_MOC_LITERAL(18, 124, 11), // "setFontBold"
QT_MOC_LITERAL(19, 136, 4), // "bold"
QT_MOC_LITERAL(20, 141, 16), // "setFontUnderline"
QT_MOC_LITERAL(21, 158, 9), // "underline"
QT_MOC_LITERAL(22, 168, 13), // "setFontItalic"
QT_MOC_LITERAL(23, 182, 6), // "italic"
QT_MOC_LITERAL(24, 189, 5) // "about"

    },
    "Notepad\0contentChanged\0\0keyPressed\0"
    "setText\0text\0newDocument\0open\0save\0"
    "saveAs\0print\0exit\0copy\0cut\0paste\0undo\0"
    "redo\0selectFont\0setFontBold\0bold\0"
    "setFontUnderline\0underline\0setFontItalic\0"
    "italic\0about"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Notepad[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    1,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  113,    2, 0x0a /* Public */,
       6,    0,  116,    2, 0x08 /* Private */,
       7,    0,  117,    2, 0x08 /* Private */,
       8,    0,  118,    2, 0x08 /* Private */,
       9,    0,  119,    2, 0x08 /* Private */,
      10,    0,  120,    2, 0x08 /* Private */,
      11,    0,  121,    2, 0x08 /* Private */,
      12,    0,  122,    2, 0x08 /* Private */,
      13,    0,  123,    2, 0x08 /* Private */,
      14,    0,  124,    2, 0x08 /* Private */,
      15,    0,  125,    2, 0x08 /* Private */,
      16,    0,  126,    2, 0x08 /* Private */,
      17,    0,  127,    2, 0x08 /* Private */,
      18,    1,  128,    2, 0x08 /* Private */,
      20,    1,  131,    2, 0x08 /* Private */,
      22,    1,  134,    2, 0x08 /* Private */,
      24,    0,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
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
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,

       0        // eod
};

void Notepad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Notepad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contentChanged(); break;
        case 1: _t->keyPressed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->newDocument(); break;
        case 4: _t->open(); break;
        case 5: _t->save(); break;
        case 6: _t->saveAs(); break;
        case 7: _t->print(); break;
        case 8: _t->exit(); break;
        case 9: _t->copy(); break;
        case 10: _t->cut(); break;
        case 11: _t->paste(); break;
        case 12: _t->undo(); break;
        case 13: _t->redo(); break;
        case 14: _t->selectFont(); break;
        case 15: _t->setFontBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setFontUnderline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->setFontItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->about(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Notepad::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Notepad::contentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Notepad::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Notepad::keyPressed)) {
                *result = 1;
                return;
            }
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
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Notepad::contentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Notepad::keyPressed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
