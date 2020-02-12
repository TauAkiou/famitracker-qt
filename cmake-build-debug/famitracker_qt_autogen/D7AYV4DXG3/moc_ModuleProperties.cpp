/****************************************************************************
** Meta object code from reading C++ file 'ModuleProperties.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt-gui/ModuleProperties.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModuleProperties.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gui__ModulePropertiesDialog_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__ModulePropertiesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__ModulePropertiesDialog_t qt_meta_stringdata_gui__ModulePropertiesDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "gui::ModulePropertiesDialog"
QT_MOC_LITERAL(1, 28, 6), // "accept"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "changeTrackTitle"
QT_MOC_LITERAL(4, 53, 11), // "selectTrack"
QT_MOC_LITERAL(5, 65, 8), // "addTrack"
QT_MOC_LITERAL(6, 74, 11), // "removeTrack"
QT_MOC_LITERAL(7, 86, 11), // "moveUpTrack"
QT_MOC_LITERAL(8, 98, 13), // "moveDownTrack"
QT_MOC_LITERAL(9, 112, 11) // "importTrack"

    },
    "gui::ModulePropertiesDialog\0accept\0\0"
    "changeTrackTitle\0selectTrack\0addTrack\0"
    "removeTrack\0moveUpTrack\0moveDownTrack\0"
    "importTrack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__ModulePropertiesDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    1,   56,    2, 0x0a /* Public */,
       5,    0,   59,    2, 0x0a /* Public */,
       6,    0,   60,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gui::ModulePropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModulePropertiesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->changeTrackTitle(); break;
        case 2: _t->selectTrack((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->addTrack(); break;
        case 4: _t->removeTrack(); break;
        case 5: _t->moveUpTrack(); break;
        case 6: _t->moveDownTrack(); break;
        case 7: _t->importTrack(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gui::ModulePropertiesDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_gui__ModulePropertiesDialog.data,
    qt_meta_data_gui__ModulePropertiesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::ModulePropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::ModulePropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__ModulePropertiesDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_ModuleProperties"))
        return static_cast< Ui_ModuleProperties*>(this);
    return QDialog::qt_metacast(_clname);
}

int gui::ModulePropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
