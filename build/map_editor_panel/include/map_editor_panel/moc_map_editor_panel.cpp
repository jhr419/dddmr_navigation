/****************************************************************************
** Meta object code from reading C++ file 'map_editor_panel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/dddmr_rviz_tools/map_editor_panel/include/map_editor_panel/map_editor_panel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'map_editor_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_map_editor_panel__MapEditorPanel_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_map_editor_panel__MapEditorPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_map_editor_panel__MapEditorPanel_t qt_meta_stringdata_map_editor_panel__MapEditorPanel = {
    {
QT_MOC_LITERAL(0, 0, 32), // "map_editor_panel::MapEditorPanel"
QT_MOC_LITERAL(1, 33, 14), // "saveSelectedPC"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 14), // "clearSelection"
QT_MOC_LITERAL(4, 64, 8) // "lastStep"

    },
    "map_editor_panel::MapEditorPanel\0"
    "saveSelectedPC\0\0clearSelection\0lastStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_map_editor_panel__MapEditorPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    0,   31,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void map_editor_panel::MapEditorPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapEditorPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->saveSelectedPC(); break;
        case 1: _t->clearSelection(); break;
        case 2: _t->lastStep(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject map_editor_panel::MapEditorPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Panel::staticMetaObject>(),
    qt_meta_stringdata_map_editor_panel__MapEditorPanel.data,
    qt_meta_data_map_editor_panel__MapEditorPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *map_editor_panel::MapEditorPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *map_editor_panel::MapEditorPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_map_editor_panel__MapEditorPanel.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int map_editor_panel::MapEditorPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
