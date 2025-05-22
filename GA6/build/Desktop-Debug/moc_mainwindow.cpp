/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_datoteka_dugme_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 26), // "on_Nasumicni_dugme_clicked"
QT_MOC_LITERAL(4, 65, 24), // "on_Ponisti_dugme_clicked"
QT_MOC_LITERAL(5, 90, 24), // "on_Zapocni_dugme_clicked"
QT_MOC_LITERAL(6, 115, 25), // "on_Zaustavi_dugme_clicked"
QT_MOC_LITERAL(7, 141, 24), // "on_Sledeci_dugme_clicked"
QT_MOC_LITERAL(8, 166, 26), // "on_Ispocetka_dugme_clicked"
QT_MOC_LITERAL(9, 193, 17), // "on_polozajKursora"
QT_MOC_LITERAL(10, 211, 1), // "x"
QT_MOC_LITERAL(11, 213, 1), // "y"
QT_MOC_LITERAL(12, 215, 24), // "on_merenjeButton_clicked"
QT_MOC_LITERAL(13, 240, 19), // "on_lineSeriesChange"
QT_MOC_LITERAL(14, 260, 3), // "dim"
QT_MOC_LITERAL(15, 264, 7), // "optimal"
QT_MOC_LITERAL(16, 272, 5), // "naive"
QT_MOC_LITERAL(17, 278, 16), // "on_chartFinished"
QT_MOC_LITERAL(18, 295, 35), // "on_tipAlgoritma_currentIndexC..."
QT_MOC_LITERAL(19, 331, 5), // "index"
QT_MOC_LITERAL(20, 337, 27), // "on_naivniCheck_stateChanged"
QT_MOC_LITERAL(21, 365, 17) // "na_krajuAnimacije"

    },
    "MainWindow\0on_datoteka_dugme_clicked\0"
    "\0on_Nasumicni_dugme_clicked\0"
    "on_Ponisti_dugme_clicked\0"
    "on_Zapocni_dugme_clicked\0"
    "on_Zaustavi_dugme_clicked\0"
    "on_Sledeci_dugme_clicked\0"
    "on_Ispocetka_dugme_clicked\0on_polozajKursora\0"
    "x\0y\0on_merenjeButton_clicked\0"
    "on_lineSeriesChange\0dim\0optimal\0naive\0"
    "on_chartFinished\0on_tipAlgoritma_currentIndexChanged\0"
    "index\0on_naivniCheck_stateChanged\0"
    "na_krajuAnimacije"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    2,   91,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    3,   97,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    1,  105,    2, 0x08 /* Private */,
      20,    1,  108,    2, 0x08 /* Private */,
      21,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_datoteka_dugme_clicked(); break;
        case 1: _t->on_Nasumicni_dugme_clicked(); break;
        case 2: _t->on_Ponisti_dugme_clicked(); break;
        case 3: _t->on_Zapocni_dugme_clicked(); break;
        case 4: _t->on_Zaustavi_dugme_clicked(); break;
        case 5: _t->on_Sledeci_dugme_clicked(); break;
        case 6: _t->on_Ispocetka_dugme_clicked(); break;
        case 7: _t->on_polozajKursora((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_merenjeButton_clicked(); break;
        case 9: _t->on_lineSeriesChange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 10: _t->on_chartFinished(); break;
        case 11: _t->on_tipAlgoritma_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_naivniCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->na_krajuAnimacije(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
