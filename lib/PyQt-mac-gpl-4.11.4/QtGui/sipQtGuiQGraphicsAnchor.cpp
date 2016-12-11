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

#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qgraphicsanchorlayout.sip"
#include <qgraphicsanchorlayout.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"

#line 49 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qgraphicsanchorlayout.sip"
#include <qgraphicsanchorlayout.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 30 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 60 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 69 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 75 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQGraphicsAnchor.cpp"


PyDoc_STRVAR(doc_QGraphicsAnchor_setSpacing, "setSpacing(self, float)");

extern "C" {static PyObject *meth_QGraphicsAnchor_setSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_setSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGraphicsAnchor, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSpacing(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_setSpacing, doc_QGraphicsAnchor_setSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchor_unsetSpacing, "unsetSpacing(self)");

extern "C" {static PyObject *meth_QGraphicsAnchor_unsetSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_unsetSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchor, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->unsetSpacing();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_unsetSpacing, doc_QGraphicsAnchor_unsetSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchor_spacing, "spacing(self) -> float");

extern "C" {static PyObject *meth_QGraphicsAnchor_spacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_spacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchor, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->spacing();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_spacing, doc_QGraphicsAnchor_spacing);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchor_setSizePolicy, "setSizePolicy(self, QSizePolicy.Policy)");

extern "C" {static PyObject *meth_QGraphicsAnchor_setSizePolicy(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_setSizePolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::Policy a0;
        QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsAnchor, &sipCpp, sipType_QSizePolicy_Policy, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSizePolicy(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_setSizePolicy, doc_QGraphicsAnchor_setSizePolicy);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchor_sizePolicy, "sizePolicy(self) -> QSizePolicy.Policy");

extern "C" {static PyObject *meth_QGraphicsAnchor_sizePolicy(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_sizePolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchor, &sipCpp))
        {
            QSizePolicy::Policy sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sizePolicy();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSizePolicy_Policy);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_sizePolicy, doc_QGraphicsAnchor_sizePolicy);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsAnchor(void *, int);}
static void release_QGraphicsAnchor(void *sipCppV,int)
{
    QGraphicsAnchor *sipCpp = reinterpret_cast<QGraphicsAnchor *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsAnchor(sipSimpleWrapper *);}
static void dealloc_QGraphicsAnchor(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsAnchor(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsAnchor[] = {{141, 0, 1}};


static PyMethodDef methods_QGraphicsAnchor[] = {
    {SIP_MLNAME_CAST(sipName_setSizePolicy), meth_QGraphicsAnchor_setSizePolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchor_setSizePolicy)},
    {SIP_MLNAME_CAST(sipName_setSpacing), meth_QGraphicsAnchor_setSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchor_setSpacing)},
    {SIP_MLNAME_CAST(sipName_sizePolicy), meth_QGraphicsAnchor_sizePolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchor_sizePolicy)},
    {SIP_MLNAME_CAST(sipName_spacing), meth_QGraphicsAnchor_spacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchor_spacing)},
    {SIP_MLNAME_CAST(sipName_unsetSpacing), meth_QGraphicsAnchor_unsetSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchor_unsetSpacing)}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsAnchor = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsAnchor,
        {0}
    },
    {
        sipNameNr_QGraphicsAnchor,
        {0, 0, 1},
        5, methods_QGraphicsAnchor,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsAnchor,
    0,
    0,
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
    dealloc_QGraphicsAnchor,
    0,
    0,
    0,
    release_QGraphicsAnchor,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QGraphicsAnchor::staticMetaObject,
    0,
    0
};
