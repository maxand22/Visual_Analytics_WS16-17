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

#include "sipAPIQtCore.h"

#line 147 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQTextDecoder.cpp"

#line 30 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQTextDecoder.cpp"
#line 30 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQTextDecoder.cpp"
#line 31 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQTextDecoder.cpp"
#line 32 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 42 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQTextDecoder.cpp"


PyDoc_STRVAR(doc_QTextDecoder_toUnicode, "toUnicode(self, bytes) -> QString\n"
    "toUnicode(self, QString, bytes)\n"
    "toUnicode(self, QByteArray) -> QString");

extern "C" {static PyObject *meth_QTextDecoder_toUnicode(PyObject *, PyObject *);}
static PyObject *meth_QTextDecoder_toUnicode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        SIP_SSIZE_T a1;
        QTextDecoder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bk", &sipSelf, sipType_QTextDecoder, &sipCpp, &a0, &a1))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toUnicode(a0,(int)a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    if (sipIsAPIEnabled(sipName_QString, 0, 2))
    {
        QString* a0;
        const char* a1;
        SIP_SSIZE_T a2;
        QTextDecoder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8k", &sipSelf, sipType_QTextDecoder, &sipCpp, sipType_QString,&a0, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->toUnicode(a0,a1,(int)a2);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;
        QTextDecoder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextDecoder, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toUnicode(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDecoder, sipName_toUnicode, doc_QTextDecoder_toUnicode);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextDecoder(void *, int);}
static void release_QTextDecoder(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextDecoder *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTextDecoder(sipSimpleWrapper *);}
static void dealloc_QTextDecoder(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextDecoder(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextDecoder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextDecoder(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextDecoder *sipCpp = 0;

    {
        const QTextCodec* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QTextCodec, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextDecoder(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextCodec* a0;
        QTextCodec::ConversionFlags* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8J1", sipType_QTextCodec, &a0, sipType_QTextCodec_ConversionFlags, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextDecoder(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_QTextCodec_ConversionFlags,a1State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTextDecoder[] = {
    {SIP_MLNAME_CAST(sipName_toUnicode), meth_QTextDecoder_toUnicode, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDecoder_toUnicode)}
};

PyDoc_STRVAR(doc_QTextDecoder, "\1QTextDecoder(QTextCodec)\n"
    "QTextDecoder(QTextCodec, QTextCodec.ConversionFlags)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QTextDecoder = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextDecoder,
        {0}
    },
    {
        sipNameNr_QTextDecoder,
        {0, 0, 1},
        1, methods_QTextDecoder,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextDecoder,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QTextDecoder,
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
    dealloc_QTextDecoder,
    0,
    0,
    0,
    release_QTextDecoder,
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
