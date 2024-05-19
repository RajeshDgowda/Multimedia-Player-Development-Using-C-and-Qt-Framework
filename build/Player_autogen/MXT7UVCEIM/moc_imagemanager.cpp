/****************************************************************************
** Meta object code from reading C++ file 'imagemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ImageManager/imagemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageManager_t {
    QByteArrayData data[13];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageManager_t qt_meta_stringdata_ImageManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ImageManager"
QT_MOC_LITERAL(1, 13, 12), // "FrameChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "Convert2Image"
QT_MOC_LITERAL(4, 41, 11), // "setRawFrame"
QT_MOC_LITERAL(5, 53, 7), // "cv::Mat"
QT_MOC_LITERAL(6, 61, 11), // "newRawFrame"
QT_MOC_LITERAL(7, 73, 14), // "setWidthHeight"
QT_MOC_LITERAL(8, 88, 5), // "width"
QT_MOC_LITERAL(9, 94, 6), // "height"
QT_MOC_LITERAL(10, 101, 9), // "OpenImage"
QT_MOC_LITERAL(11, 111, 3), // "url"
QT_MOC_LITERAL(12, 115, 5) // "frame"

    },
    "ImageManager\0FrameChanged\0\0Convert2Image\0"
    "setRawFrame\0cv::Mat\0newRawFrame\0"
    "setWidthHeight\0width\0height\0OpenImage\0"
    "url\0frame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x02 /* Public */,
       7,    2,   44,    2, 0x02 /* Public */,
      10,    1,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // properties: name, type, flags
      12, QMetaType::QImage, 0x00495903,

 // properties: notify_signal_id
       0,

       0        // eod
};

void ImageManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FrameChanged(); break;
        case 1: _t->Convert2Image(); break;
        case 2: _t->setRawFrame((*reinterpret_cast< const cv::Mat(*)>(_a[1]))); break;
        case 3: _t->setWidthHeight((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 4: _t->OpenImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageManager::FrameChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ImageManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QImage*>(_v) = _t->getFrame(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ImageManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrame(*reinterpret_cast< QImage*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ImageManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_ImageManager.data,
    qt_meta_data_ImageManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageManager.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int ImageManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ImageManager::FrameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
