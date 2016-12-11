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

#include "sipAPIQtNetwork.h"

#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtNetwork/qhttpmultipart.sip"
#include <qhttpmultipart.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtNetwork/sipQtNetworkQHttpPart.cpp"

#line 30 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtNetwork/sipQtNetworkQHttpPart.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtNetwork/sipQtNetworkQHttpPart.cpp"
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtNetwork/qnetworkrequest.sip"
#include <qnetworkrequest.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtNetwork/sipQtNetworkQHttpPart.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtNetwork/sipQtNetworkQHttpPart.cpp"


PyDoc_STRVAR(doc_QHttpPart_setHeader, "setHeader(self, QNetworkRequest.KnownHeaders, QVariant)");

extern "C" {static PyObject *meth_QHttpPart_setHeader(PyObject *, PyObject *);}
static PyObject *meth_QHttpPart_setHeader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkRequest::KnownHeaders a0;
        const QVariant* a1;
        int a1State = 0;
        QHttpPart *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QHttpPart, &sipCpp, sipType_QNetworkRequest_KnownHeaders, &a0, sipType_QVariant,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setHeader(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpPart, sipName_setHeader, doc_QHttpPart_setHeader);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpPart_setRawHeader, "setRawHeader(self, QByteArray, QByteArray)");

extern "C" {static PyObject *meth_QHttpPart_setRawHeader(PyObject *, PyObject *);}
static PyObject *meth_QHttpPart_setRawHeader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        const QByteArray* a1;
        int a1State = 0;
        QHttpPart *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QHttpPart, &sipCpp, sipType_QByteArray, &a0, &a0State, sipType_QByteArray, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRawHeader(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);
            sipReleaseType(const_cast<QByteArray *>(a1),sipType_QByteArray,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpPart, sipName_setRawHeader, doc_QHttpPart_setRawHeader);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpPart_setBody, "setBody(self, QByteArray)");

extern "C" {static PyObject *meth_QHttpPart_setBody(PyObject *, PyObject *);}
static PyObject *meth_QHttpPart_setBody(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QHttpPart *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHttpPart, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBody(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpPart, sipName_setBody, doc_QHttpPart_setBody);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpPart_setBodyDevice, "setBodyDevice(self, QIODevice)");

extern "C" {static PyObject *meth_QHttpPart_setBodyDevice(PyObject *, PyObject *);}
static PyObject *meth_QHttpPart_setBodyDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice* a0;
        QHttpPart *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QHttpPart, &sipCpp, sipType_QIODevice, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBodyDevice(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpPart, sipName_setBodyDevice, doc_QHttpPart_setBodyDevice);

    return NULL;
}


extern "C" {static PyObject *slot_QHttpPart___ne__(PyObject *,PyObject *);}
static PyObject *slot_QHttpPart___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QHttpPart *sipCpp = reinterpret_cast<QHttpPart *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHttpPart));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QHttpPart* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QHttpPart, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QHttpPart::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QHttpPart,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QHttpPart___eq__(PyObject *,PyObject *);}
static PyObject *slot_QHttpPart___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QHttpPart *sipCpp = reinterpret_cast<QHttpPart *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHttpPart));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QHttpPart* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QHttpPart, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QHttpPart::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QHttpPart,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QHttpPart(void *, int);}
static void release_QHttpPart(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QHttpPart *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QHttpPart(void *, SIP_SSIZE_T, const void *);}
static void assign_QHttpPart(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QHttpPart *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QHttpPart *>(sipSrc);
}


extern "C" {static void *array_QHttpPart(SIP_SSIZE_T);}
static void *array_QHttpPart(SIP_SSIZE_T sipNrElem)
{
    return new QHttpPart[sipNrElem];
}


extern "C" {static void *copy_QHttpPart(const void *, SIP_SSIZE_T);}
static void *copy_QHttpPart(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QHttpPart(reinterpret_cast<const QHttpPart *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHttpPart(sipSimpleWrapper *);}
static void dealloc_QHttpPart(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QHttpPart(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QHttpPart(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHttpPart(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QHttpPart *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QHttpPart();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QHttpPart* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QHttpPart, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QHttpPart(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QHttpPart[] = {
    {(void *)slot_QHttpPart___ne__, ne_slot},
    {(void *)slot_QHttpPart___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QHttpPart[] = {
    {SIP_MLNAME_CAST(sipName_setBody), meth_QHttpPart_setBody, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpPart_setBody)},
    {SIP_MLNAME_CAST(sipName_setBodyDevice), meth_QHttpPart_setBodyDevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpPart_setBodyDevice)},
    {SIP_MLNAME_CAST(sipName_setHeader), meth_QHttpPart_setHeader, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpPart_setHeader)},
    {SIP_MLNAME_CAST(sipName_setRawHeader), meth_QHttpPart_setRawHeader, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpPart_setRawHeader)}
};

PyDoc_STRVAR(doc_QHttpPart, "\1QHttpPart()\n"
    "QHttpPart(QHttpPart)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QHttpPart = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QHttpPart,
        {0}
    },
    {
        sipNameNr_QHttpPart,
        {0, 0, 1},
        4, methods_QHttpPart,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QHttpPart,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QHttpPart,
    init_type_QHttpPart,
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
    dealloc_QHttpPart,
    assign_QHttpPart,
    array_QHttpPart,
    copy_QHttpPart,
    release_QHttpPart,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};