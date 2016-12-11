/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.18.1
 *
 * Copyright (c) 2015 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt4.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 170 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qgesture.sip"
#include <qgesture.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 114 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qgesture.sip"
#include <qgesture.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 69 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 75 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQTapGesture.cpp"


class sipQTapGesture : public QTapGesture
{
public:
    sipQTapGesture(QObject*);
    virtual ~sipQTapGesture();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const char*);
    void connectNotify(const char*);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTapGesture(const sipQTapGesture &);
    sipQTapGesture &operator = (const sipQTapGesture &);

    char sipPyMethods[7];
};

sipQTapGesture::sipQTapGesture(QObject*a0): QTapGesture(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTapGesture::~sipQTapGesture()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQTapGesture::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QTapGesture);
}

int sipQTapGesture::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QTapGesture::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QTapGesture,_c,_id,_a);

    return _id;
}

void *sipQTapGesture::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QTapGesture, _clname)) ? this : QTapGesture::qt_metacast(_clname);
}

void sipQTapGesture::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QTapGesture::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTapGesture::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QTapGesture::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTapGesture::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QTapGesture::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTapGesture::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QTapGesture::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTapGesture::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QTapGesture::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQTapGesture::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QTapGesture::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQTapGesture::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QTapGesture::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QTapGesture_position, "position(self) -> QPointF");

extern "C" {static PyObject *meth_QTapGesture_position(PyObject *, PyObject *);}
static PyObject *meth_QTapGesture_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTapGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTapGesture, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->position());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapGesture, sipName_position, doc_QTapGesture_position);

    return NULL;
}


PyDoc_STRVAR(doc_QTapGesture_setPosition, "setPosition(self, QPointF)");

extern "C" {static PyObject *meth_QTapGesture_setPosition(PyObject *, PyObject *);}
static PyObject *meth_QTapGesture_setPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        QTapGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTapGesture, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPosition(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapGesture, sipName_setPosition, doc_QTapGesture_setPosition);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTapGesture(void *, int);}
static void release_QTapGesture(void *sipCppV,int)
{
    QTapGesture *sipCpp = reinterpret_cast<QTapGesture *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTapGesture(sipSimpleWrapper *);}
static void dealloc_QTapGesture(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTapGesture *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTapGesture(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QTapGesture(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTapGesture(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQTapGesture *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTapGesture(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTapGesture[] = {{146, 255, 1}};


static PyMethodDef methods_QTapGesture[] = {
    {SIP_MLNAME_CAST(sipName_position), meth_QTapGesture_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapGesture_position)},
    {SIP_MLNAME_CAST(sipName_setPosition), meth_QTapGesture_setPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapGesture_setPosition)}
};

PyDoc_STRVAR(doc_QTapGesture, "\1QTapGesture(parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTapGesture = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTapGesture,
        {0}
    },
    {
        sipNameNr_QTapGesture,
        {0, 0, 1},
        2, methods_QTapGesture,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTapGesture,
    -1,
    -1,
    supers_QTapGesture,
    0,
    init_type_QTapGesture,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QTapGesture,
    0,
    0,
    0,
    release_QTapGesture,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QTapGesture::staticMetaObject,
    0,
    0
};