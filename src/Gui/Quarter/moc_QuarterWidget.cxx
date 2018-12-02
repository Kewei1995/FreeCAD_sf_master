/****************************************************************************
** Meta object code from reading C++ file 'QuarterWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QuarterWidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QuarterWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SIM__Coin3D__Quarter__QuarterWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      12,   59, // properties
       3,  107, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      53,   37,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      84,   36,   36,   36, 0x0a,
      94,   36,   36,   36, 0x0a,
     101,   36,   36,   36, 0x0a,
     115,  110,   36,   36, 0x0a,
     141,  110,   36,   36, 0x0a,
     172,  167,   36,   36, 0x0a,
     210,   36,   36,   36, 0x08,
     228,   36,   36,   36, 0x08,

 // properties: name, type, flags
     259,  254, 0x11095107,
     285,  278, 0x43095103,
     306,  301, 0x01095103,
     325,  301, 0x01095103,
     342,  301, 0x01095103,
     355,  301, 0x01095103,
     367,  301, 0x01095103,
     390,  301, 0x01095103,
     425,  408, 0x0009510b,
     453,  442, 0x0009510b,
     475,  464, 0x0009510b,
     492,  486, ((uint)QMetaType::QReal << 24) | 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
     408, 0x0,   11,  119,
     442, 0x0,    6,  141,
     464, 0x0,    5,  153,

 // enum data: key, value
     509, uint(SIM::Coin3D::Quarter::QuarterWidget::SCREEN_DOOR),
     521, uint(SIM::Coin3D::Quarter::QuarterWidget::ADD),
     525, uint(SIM::Coin3D::Quarter::QuarterWidget::DELAYED_ADD),
     537, uint(SIM::Coin3D::Quarter::QuarterWidget::SORTED_OBJECT_ADD),
     555, uint(SIM::Coin3D::Quarter::QuarterWidget::BLEND),
     561, uint(SIM::Coin3D::Quarter::QuarterWidget::DELAYED_BLEND),
     575, uint(SIM::Coin3D::Quarter::QuarterWidget::SORTED_OBJECT_BLEND),
     595, uint(SIM::Coin3D::Quarter::QuarterWidget::SORTED_OBJECT_SORTED_TRIANGLE_ADD),
     629, uint(SIM::Coin3D::Quarter::QuarterWidget::SORTED_OBJECT_SORTED_TRIANGLE_BLEND),
     665, uint(SIM::Coin3D::Quarter::QuarterWidget::NONE),
     670, uint(SIM::Coin3D::Quarter::QuarterWidget::SORTED_LAYERS_BLEND),
     690, uint(SIM::Coin3D::Quarter::QuarterWidget::AS_IS),
     696, uint(SIM::Coin3D::Quarter::QuarterWidget::WIREFRAME),
     706, uint(SIM::Coin3D::Quarter::QuarterWidget::WIREFRAME_OVERLAY),
     724, uint(SIM::Coin3D::Quarter::QuarterWidget::POINTS),
     731, uint(SIM::Coin3D::Quarter::QuarterWidget::HIDDEN_LINE),
     743, uint(SIM::Coin3D::Quarter::QuarterWidget::BOUNDING_BOX),
     756, uint(SIM::Coin3D::Quarter::QuarterWidget::MONO),
     761, uint(SIM::Coin3D::Quarter::QuarterWidget::ANAGLYPH),
     770, uint(SIM::Coin3D::Quarter::QuarterWidget::QUAD_BUFFER),
     782, uint(SIM::Coin3D::Quarter::QuarterWidget::INTERLEAVED_ROWS),
     799, uint(SIM::Coin3D::Quarter::QuarterWidget::INTERLEAVED_COLUMNS),

       0        // eod
};

static const char qt_meta_stringdata_SIM__Coin3D__Quarter__QuarterWidget[] = {
    "SIM::Coin3D::Quarter::QuarterWidget\0"
    "\0dev_pixel_ratio\0devicePixelRatioChanged(qreal)\0"
    "viewAll()\0seek()\0redraw()\0mode\0"
    "setRenderMode(RenderMode)\0"
    "setStereoMode(StereoMode)\0type\0"
    "setTransparencyType(TransparencyType)\0"
    "replaceViewport()\0aboutToDestroyGLContext()\0"
    "QUrl\0navigationModeFile\0QColor\0"
    "backgroundColor\0bool\0contextMenuEnabled\0"
    "headlightEnabled\0clearZBuffer\0clearWindow\0"
    "interactionModeEnabled\0interactionModeOn\0"
    "TransparencyType\0transparencyType\0"
    "RenderMode\0renderMode\0StereoMode\0"
    "stereoMode\0qreal\0devicePixelRatio\0"
    "SCREEN_DOOR\0ADD\0DELAYED_ADD\0"
    "SORTED_OBJECT_ADD\0BLEND\0DELAYED_BLEND\0"
    "SORTED_OBJECT_BLEND\0"
    "SORTED_OBJECT_SORTED_TRIANGLE_ADD\0"
    "SORTED_OBJECT_SORTED_TRIANGLE_BLEND\0"
    "NONE\0SORTED_LAYERS_BLEND\0AS_IS\0WIREFRAME\0"
    "WIREFRAME_OVERLAY\0POINTS\0HIDDEN_LINE\0"
    "BOUNDING_BOX\0MONO\0ANAGLYPH\0QUAD_BUFFER\0"
    "INTERLEAVED_ROWS\0INTERLEAVED_COLUMNS\0"
};

void SIM::Coin3D::Quarter::QuarterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QuarterWidget *_t = static_cast<QuarterWidget *>(_o);
        switch (_id) {
        case 0: _t->devicePixelRatioChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->viewAll(); break;
        case 2: _t->seek(); break;
        case 3: _t->redraw(); break;
        case 4: _t->setRenderMode((*reinterpret_cast< RenderMode(*)>(_a[1]))); break;
        case 5: _t->setStereoMode((*reinterpret_cast< StereoMode(*)>(_a[1]))); break;
        case 6: _t->setTransparencyType((*reinterpret_cast< TransparencyType(*)>(_a[1]))); break;
        case 7: _t->replaceViewport(); break;
        case 8: _t->aboutToDestroyGLContext(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SIM::Coin3D::Quarter::QuarterWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SIM::Coin3D::Quarter::QuarterWidget::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_SIM__Coin3D__Quarter__QuarterWidget,
      qt_meta_data_SIM__Coin3D__Quarter__QuarterWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SIM::Coin3D::Quarter::QuarterWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SIM::Coin3D::Quarter::QuarterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SIM::Coin3D::Quarter::QuarterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SIM__Coin3D__Quarter__QuarterWidget))
        return static_cast<void*>(const_cast< QuarterWidget*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int SIM::Coin3D::Quarter::QuarterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = navigationModeFile(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = backgroundColor(); break;
        case 2: *reinterpret_cast< bool*>(_v) = contextMenuEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = headlightEnabled(); break;
        case 4: *reinterpret_cast< bool*>(_v) = clearZBuffer(); break;
        case 5: *reinterpret_cast< bool*>(_v) = clearWindow(); break;
        case 6: *reinterpret_cast< bool*>(_v) = interactionModeEnabled(); break;
        case 7: *reinterpret_cast< bool*>(_v) = interactionModeOn(); break;
        case 8: *reinterpret_cast< TransparencyType*>(_v) = transparencyType(); break;
        case 9: *reinterpret_cast< RenderMode*>(_v) = renderMode(); break;
        case 10: *reinterpret_cast< StereoMode*>(_v) = stereoMode(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = devicePixelRatio(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNavigationModeFile(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setContextMenuEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: setHeadlightEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: setClearZBuffer(*reinterpret_cast< bool*>(_v)); break;
        case 5: setClearWindow(*reinterpret_cast< bool*>(_v)); break;
        case 6: setInteractionModeEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 7: setInteractionModeOn(*reinterpret_cast< bool*>(_v)); break;
        case 8: setTransparencyType(*reinterpret_cast< TransparencyType*>(_v)); break;
        case 9: setRenderMode(*reinterpret_cast< RenderMode*>(_v)); break;
        case 10: setStereoMode(*reinterpret_cast< StereoMode*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 0: resetNavigationModeFile(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SIM::Coin3D::Quarter::QuarterWidget::devicePixelRatioChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
