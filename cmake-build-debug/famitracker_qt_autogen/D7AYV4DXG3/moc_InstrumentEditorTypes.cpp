/****************************************************************************
** Meta object code from reading C++ file 'InstrumentEditorTypes.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt-gui/InstrumentEditorTypes.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InstrumentEditorTypes.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gui__Settings_SequencesWidget_t {
    QByteArrayData data[7];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Settings_SequencesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Settings_SequencesWidget_t qt_meta_stringdata_gui__Settings_SequencesWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "gui::Settings_SequencesWidget"
QT_MOC_LITERAL(1, 30, 14), // "selectSequence"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 19), // "changeSequenceIndex"
QT_MOC_LITERAL(4, 66, 11), // "itemChanged"
QT_MOC_LITERAL(5, 78, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 95, 19) // "selectNextEmptySlot"

    },
    "gui::Settings_SequencesWidget\0"
    "selectSequence\0\0changeSequenceIndex\0"
    "itemChanged\0QTreeWidgetItem*\0"
    "selectNextEmptySlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Settings_SequencesWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       4,    2,   38,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    2,    2,
    QMetaType::Void,

       0        // eod
};

void gui::Settings_SequencesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Settings_SequencesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectSequence(); break;
        case 1: _t->changeSequenceIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->selectNextEmptySlot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gui::Settings_SequencesWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_gui__Settings_SequencesWidget.data,
    qt_meta_data_gui__Settings_SequencesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Settings_SequencesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Settings_SequencesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Settings_SequencesWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gui::Settings_SequencesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_gui__DPCMWidget_t {
    QByteArrayData data[16];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__DPCMWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__DPCMWidget_t qt_meta_stringdata_gui__DPCMWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "gui::DPCMWidget"
QT_MOC_LITERAL(1, 16, 4), // "load"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "unload"
QT_MOC_LITERAL(4, 29, 4), // "save"
QT_MOC_LITERAL(5, 34, 6), // "import"
QT_MOC_LITERAL(6, 41, 4), // "edit"
QT_MOC_LITERAL(7, 46, 7), // "preview"
QT_MOC_LITERAL(8, 54, 11), // "load_select"
QT_MOC_LITERAL(9, 66, 8), // "filename"
QT_MOC_LITERAL(10, 75, 6), // "assign"
QT_MOC_LITERAL(11, 82, 8), // "unassign"
QT_MOC_LITERAL(12, 91, 12), // "changeOctave"
QT_MOC_LITERAL(13, 104, 15), // "changePitchLoop"
QT_MOC_LITERAL(14, 120, 12), // "changeSample"
QT_MOC_LITERAL(15, 133, 14) // "selectAssigned"

    },
    "gui::DPCMWidget\0load\0\0unload\0save\0"
    "import\0edit\0preview\0load_select\0"
    "filename\0assign\0unassign\0changeOctave\0"
    "changePitchLoop\0changeSample\0"
    "selectAssigned"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__DPCMWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gui::DPCMWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DPCMWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->load(); break;
        case 1: _t->unload(); break;
        case 2: _t->save(); break;
        case 3: _t->import(); break;
        case 4: _t->edit(); break;
        case 5: _t->preview(); break;
        case 6: _t->load_select((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->assign(); break;
        case 8: _t->unassign(); break;
        case 9: _t->changeOctave(); break;
        case 10: _t->changePitchLoop(); break;
        case 11: _t->changeSample(); break;
        case 12: _t->selectAssigned(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gui::DPCMWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_gui__DPCMWidget.data,
    qt_meta_data_gui__DPCMWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::DPCMWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::DPCMWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__DPCMWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gui::DPCMWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
