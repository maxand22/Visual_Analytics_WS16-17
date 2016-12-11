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

#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtNetwork/qsslkey.sip"
#include <qsslkey.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtNetwork/sipQtNetworkQSslKey.cpp"

#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtNetwork/sipQtNetworkQSslKey.cpp"
#line 35 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtNetwork/qssl.sip"
#include <qssl.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtNetwork/sipQtNetworkQSslKey.cpp"
#line 30 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtNetwork/sipQtNetworkQSslKey.cpp"


PyDoc_STRVAR(doc_QSslKey_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QSslKey_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSslKey_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslKey *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslKey, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslKey, sipName_isNull, doc_QSslKey_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QSslKey_clear, "clear(self)");

extern "C" {static PyObject *meth_QSslKey_clear(PyObject *, PyObject *);}
static PyObject *meth_QSslKey_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslKey *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslKey, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslKey, sipName_clear, doc_QSslKey_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QSslKey_length, "length(self) -> int");

extern "C" {static PyObject *meth_QSslKey_length(PyObject *, PyObject *);}
static PyObject *meth_QSslKey_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslKey *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslKey, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->length();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslKey, sipName_length, doc_QSslKey_length);

    return NULL;
}


PyDoc_STRVAR(doc_QSslKey_type, "type(self) -> QSsl.KeyType");

extern "C" {static PyObject *meth_QSslKey_type(PyObject *, PyObject *);}
static PyObject *meth_QSslKey_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslKey *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslKey, &sipCpp))
        {
            QSsl::KeyType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSsl_KeyType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslKey, sipName_type, doc_QSslKey_type);

    return NULL;
}


PyDoc_STRVAR(doc_QSslKey_algorithm, "algorithm(self) -> QSsl.KeyAlgorithm");

extern "C" {static PyObject *meth_QSslKey_algorithm(PyObject *, PyObject *);}
static PyObject *meth_QSslKey_algorithm(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslKey *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslKey, &sipCpp))
        {
            QSsl::KeyAlgorithm sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->algorithm();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSsl_KeyAlgorithm);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslKey, sipName_algorithm, doc_QSslKey_algorithm);

    return NULL;
}


PyDoc_STRVAR(doc_QSslKey_toPem, "toPem(self, passPhrase: QByteArray = QByteArray()) -> QByteArray");

extern "C" {static PyObject *meth_QSslKey_toPem(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSslKey_toPem(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray& a0def = QByteArray();
        const QByteArray* a0 = &a0def;
        int a0State = 0;
        const QSslKey *sipCpp;

        static const char *sipKwdList[] = {
            sipName_passPhrase,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QSslKey, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->toPem(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslKey, sipName_toPem, doc_QSslKey_toPem);

    return NULL;
}


PyDoc_STRVAR(doc_QSslKey_toDer, "toDer(self, passPhrase: QByteArray = QByteArray()) -> QByteArray");

extern "C" {static PyObject *meth_QSslKey_toDer(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSslKey_toDer(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray& a0def = QByteArray();
        const QByteArray* a0 = &a0def;
        int a0State = 0;
        const QSslKey *sipCpp;

        static const char *sipKwdList[] = {
            sipName_passPhrase,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QSslKey, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->toDer(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslKey, sipName_toDer, doc_QSslKey_toDer);

    return NULL;
}


PyDoc_STRVAR(doc_QSslKey_handle, "handle(self) -> sip.voidptr");

extern "C" {static PyObject *meth_QSslKey_handle(PyObject *, PyObject *);}
static PyObject *meth_QSslKey_handle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslKey *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslKey, &sipCpp))
        {
            Qt::HANDLE sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->handle();
            Py_END_ALLOW_THREADS

            return sipConvertFromVoidPtr((void *)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslKey, sipName_handle, doc_QSslKey_handle);

    return NULL;
}


extern "C" {static PyObject *slot_QSslKey___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSslKey___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSslKey *sipCpp = reinterpret_cast<QSslKey *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslKey));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSslKey* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSslKey, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSslKey::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QSslKey,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSslKey___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSslKey___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSslKey *sipCpp = reinterpret_cast<QSslKey *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslKey));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSslKey* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSslKey, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSslKey::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QSslKey,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QSslKey(void *, int);}
static void release_QSslKey(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSslKey *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSslKey(void *, SIP_SSIZE_T, const void *);}
static void assign_QSslKey(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSslKey *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSslKey *>(sipSrc);
}


extern "C" {static void *array_QSslKey(SIP_SSIZE_T);}
static void *array_QSslKey(SIP_SSIZE_T sipNrElem)
{
    return new QSslKey[sipNrElem];
}


extern "C" {static void *copy_QSslKey(const void *, SIP_SSIZE_T);}
static void *copy_QSslKey(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSslKey(reinterpret_cast<const QSslKey *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSslKey(sipSimpleWrapper *);}
static void dealloc_QSslKey(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSslKey(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSslKey(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSslKey(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSslKey *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSslKey();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;
        QSsl::KeyAlgorithm a1;
        QSsl::EncodingFormat a2 = QSsl::Pem;
        QSsl::KeyType a3 = QSsl::PrivateKey;
        const QByteArray& a4def = QByteArray();
        const QByteArray* a4 = &a4def;
        int a4State = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_encoding,
            sipName_type,
            sipName_passPhrase,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1E|EEJ1", sipType_QByteArray, &a0, &a0State, sipType_QSsl_KeyAlgorithm, &a1, sipType_QSsl_EncodingFormat, &a2, sipType_QSsl_KeyType, &a3, sipType_QByteArray, &a4, &a4State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSslKey(*a0,a1,a2,a3,*a4);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);
            sipReleaseType(const_cast<QByteArray *>(a4),sipType_QByteArray,a4State);

            return sipCpp;
        }
    }

    {
        QIODevice* a0;
        QSsl::KeyAlgorithm a1;
        QSsl::EncodingFormat a2 = QSsl::Pem;
        QSsl::KeyType a3 = QSsl::PrivateKey;
        const QByteArray& a4def = QByteArray();
        const QByteArray* a4 = &a4def;
        int a4State = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_encoding,
            sipName_type,
            sipName_passPhrase,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8E|EEJ1", sipType_QIODevice, &a0, sipType_QSsl_KeyAlgorithm, &a1, sipType_QSsl_EncodingFormat, &a2, sipType_QSsl_KeyType, &a3, sipType_QByteArray, &a4, &a4State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSslKey(a0,a1,a2,a3,*a4);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a4),sipType_QByteArray,a4State);

            return sipCpp;
        }
    }

    {
        const QSslKey* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSslKey, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSslKey(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSslKey[] = {
    {(void *)slot_QSslKey___ne__, ne_slot},
    {(void *)slot_QSslKey___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSslKey[] = {
    {SIP_MLNAME_CAST(sipName_algorithm), meth_QSslKey_algorithm, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslKey_algorithm)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QSslKey_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslKey_clear)},
    {SIP_MLNAME_CAST(sipName_handle), meth_QSslKey_handle, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslKey_handle)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSslKey_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslKey_isNull)},
    {SIP_MLNAME_CAST(sipName_length), meth_QSslKey_length, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslKey_length)},
    {SIP_MLNAME_CAST(sipName_toDer), (PyCFunction)meth_QSslKey_toDer, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSslKey_toDer)},
    {SIP_MLNAME_CAST(sipName_toPem), (PyCFunction)meth_QSslKey_toPem, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSslKey_toPem)},
    {SIP_MLNAME_CAST(sipName_type), meth_QSslKey_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslKey_type)}
};

PyDoc_STRVAR(doc_QSslKey, "\1QSslKey()\n"
    "QSslKey(QByteArray, QSsl.KeyAlgorithm, encoding: QSsl.EncodingFormat = QSsl.Pem, type: QSsl.KeyType = QSsl.PrivateKey, passPhrase: QByteArray = QByteArray())\n"
    "QSslKey(QIODevice, QSsl.KeyAlgorithm, encoding: QSsl.EncodingFormat = QSsl.Pem, type: QSsl.KeyType = QSsl.PrivateKey, passPhrase: QByteArray = QByteArray())\n"
    "QSslKey(QSslKey)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QSslKey = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSslKey,
        {0}
    },
    {
        sipNameNr_QSslKey,
        {0, 0, 1},
        8, methods_QSslKey,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSslKey,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSslKey,
    init_type_QSslKey,
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
    dealloc_QSslKey,
    assign_QSslKey,
    array_QSslKey,
    copy_QSslKey,
    release_QSslKey,
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
