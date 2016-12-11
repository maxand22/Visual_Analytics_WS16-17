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

#include "sipAPIQtScript.h"

#line 34 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtScript/qscriptcontextinfo.sip"
#include <qscriptcontextinfo.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtScript/sipQtScriptQScriptContextInfo.cpp"

#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtScript/qscriptcontext.sip"
#include <qscriptcontext.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtScript/sipQtScriptQScriptContextInfo.cpp"
#line 31 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtScript/sipQtScriptQScriptContextInfo.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtScript/sipQtScriptQScriptContextInfo.cpp"


PyDoc_STRVAR(doc_QScriptContextInfo_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QScriptContextInfo_isNull(PyObject *, PyObject *);}
static PyObject *meth_QScriptContextInfo_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptContextInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptContextInfo, sipName_isNull, doc_QScriptContextInfo_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptContextInfo_scriptId, "scriptId(self) -> int");

extern "C" {static PyObject *meth_QScriptContextInfo_scriptId(PyObject *, PyObject *);}
static PyObject *meth_QScriptContextInfo_scriptId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptContextInfo, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->scriptId();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptContextInfo, sipName_scriptId, doc_QScriptContextInfo_scriptId);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptContextInfo_fileName, "fileName(self) -> QString");

extern "C" {static PyObject *meth_QScriptContextInfo_fileName(PyObject *, PyObject *);}
static PyObject *meth_QScriptContextInfo_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptContextInfo, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->fileName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptContextInfo, sipName_fileName, doc_QScriptContextInfo_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptContextInfo_lineNumber, "lineNumber(self) -> int");

extern "C" {static PyObject *meth_QScriptContextInfo_lineNumber(PyObject *, PyObject *);}
static PyObject *meth_QScriptContextInfo_lineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptContextInfo, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lineNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptContextInfo, sipName_lineNumber, doc_QScriptContextInfo_lineNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptContextInfo_columnNumber, "columnNumber(self) -> int");

extern "C" {static PyObject *meth_QScriptContextInfo_columnNumber(PyObject *, PyObject *);}
static PyObject *meth_QScriptContextInfo_columnNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptContextInfo, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->columnNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptContextInfo, sipName_columnNumber, doc_QScriptContextInfo_columnNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptContextInfo_functionName, "functionName(self) -> QString");

extern "C" {static PyObject *meth_QScriptContextInfo_functionName(PyObject *, PyObject *);}
static PyObject *meth_QScriptContextInfo_functionName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptContextInfo, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->functionName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptContextInfo, sipName_functionName, doc_QScriptContextInfo_functionName);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptContextInfo_functionType, "functionType(self) -> QScriptContextInfo.FunctionType");

extern "C" {static PyObject *meth_QScriptContextInfo_functionType(PyObject *, PyObject *);}
static PyObject *meth_QScriptContextInfo_functionType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptContextInfo, &sipCpp))
        {
            QScriptContextInfo::FunctionType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->functionType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QScriptContextInfo_FunctionType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptContextInfo, sipName_functionType, doc_QScriptContextInfo_functionType);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptContextInfo_functionParameterNames, "functionParameterNames(self) -> QStringList");

extern "C" {static PyObject *meth_QScriptContextInfo_functionParameterNames(PyObject *, PyObject *);}
static PyObject *meth_QScriptContextInfo_functionParameterNames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptContextInfo, &sipCpp))
        {
            QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->functionParameterNames());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptContextInfo, sipName_functionParameterNames, doc_QScriptContextInfo_functionParameterNames);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptContextInfo_functionStartLineNumber, "functionStartLineNumber(self) -> int");

extern "C" {static PyObject *meth_QScriptContextInfo_functionStartLineNumber(PyObject *, PyObject *);}
static PyObject *meth_QScriptContextInfo_functionStartLineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptContextInfo, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->functionStartLineNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptContextInfo, sipName_functionStartLineNumber, doc_QScriptContextInfo_functionStartLineNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptContextInfo_functionEndLineNumber, "functionEndLineNumber(self) -> int");

extern "C" {static PyObject *meth_QScriptContextInfo_functionEndLineNumber(PyObject *, PyObject *);}
static PyObject *meth_QScriptContextInfo_functionEndLineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptContextInfo, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->functionEndLineNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptContextInfo, sipName_functionEndLineNumber, doc_QScriptContextInfo_functionEndLineNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptContextInfo_functionMetaIndex, "functionMetaIndex(self) -> int");

extern "C" {static PyObject *meth_QScriptContextInfo_functionMetaIndex(PyObject *, PyObject *);}
static PyObject *meth_QScriptContextInfo_functionMetaIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptContextInfo, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->functionMetaIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptContextInfo, sipName_functionMetaIndex, doc_QScriptContextInfo_functionMetaIndex);

    return NULL;
}


extern "C" {static PyObject *slot_QScriptContextInfo___ne__(PyObject *,PyObject *);}
static PyObject *slot_QScriptContextInfo___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QScriptContextInfo *sipCpp = reinterpret_cast<QScriptContextInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptContextInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QScriptContextInfo, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QScriptContextInfo::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,ne_slot,sipType_QScriptContextInfo,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QScriptContextInfo___eq__(PyObject *,PyObject *);}
static PyObject *slot_QScriptContextInfo___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QScriptContextInfo *sipCpp = reinterpret_cast<QScriptContextInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptContextInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QScriptContextInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QScriptContextInfo, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QScriptContextInfo::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,eq_slot,sipType_QScriptContextInfo,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QScriptContextInfo(void *, int);}
static void release_QScriptContextInfo(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QScriptContextInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QScriptContextInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QScriptContextInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QScriptContextInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QScriptContextInfo *>(sipSrc);
}


extern "C" {static void *array_QScriptContextInfo(SIP_SSIZE_T);}
static void *array_QScriptContextInfo(SIP_SSIZE_T sipNrElem)
{
    return new QScriptContextInfo[sipNrElem];
}


extern "C" {static void *copy_QScriptContextInfo(const void *, SIP_SSIZE_T);}
static void *copy_QScriptContextInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QScriptContextInfo(reinterpret_cast<const QScriptContextInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QScriptContextInfo(sipSimpleWrapper *);}
static void dealloc_QScriptContextInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QScriptContextInfo(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QScriptContextInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QScriptContextInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QScriptContextInfo *sipCpp = 0;

    {
        const QScriptContext* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QScriptContext, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptContextInfo(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QScriptContextInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QScriptContextInfo, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptContextInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptContextInfo();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QScriptContextInfo[] = {
    {(void *)slot_QScriptContextInfo___ne__, ne_slot},
    {(void *)slot_QScriptContextInfo___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QScriptContextInfo[] = {
    {SIP_MLNAME_CAST(sipName_columnNumber), meth_QScriptContextInfo_columnNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptContextInfo_columnNumber)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QScriptContextInfo_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptContextInfo_fileName)},
    {SIP_MLNAME_CAST(sipName_functionEndLineNumber), meth_QScriptContextInfo_functionEndLineNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptContextInfo_functionEndLineNumber)},
    {SIP_MLNAME_CAST(sipName_functionMetaIndex), meth_QScriptContextInfo_functionMetaIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptContextInfo_functionMetaIndex)},
    {SIP_MLNAME_CAST(sipName_functionName), meth_QScriptContextInfo_functionName, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptContextInfo_functionName)},
    {SIP_MLNAME_CAST(sipName_functionParameterNames), meth_QScriptContextInfo_functionParameterNames, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptContextInfo_functionParameterNames)},
    {SIP_MLNAME_CAST(sipName_functionStartLineNumber), meth_QScriptContextInfo_functionStartLineNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptContextInfo_functionStartLineNumber)},
    {SIP_MLNAME_CAST(sipName_functionType), meth_QScriptContextInfo_functionType, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptContextInfo_functionType)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QScriptContextInfo_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptContextInfo_isNull)},
    {SIP_MLNAME_CAST(sipName_lineNumber), meth_QScriptContextInfo_lineNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptContextInfo_lineNumber)},
    {SIP_MLNAME_CAST(sipName_scriptId), meth_QScriptContextInfo_scriptId, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptContextInfo_scriptId)}
};

static sipEnumMemberDef enummembers_QScriptContextInfo[] = {
    {sipName_NativeFunction, static_cast<int>(QScriptContextInfo::NativeFunction), 11},
    {sipName_QtFunction, static_cast<int>(QScriptContextInfo::QtFunction), 11},
    {sipName_QtPropertyFunction, static_cast<int>(QScriptContextInfo::QtPropertyFunction), 11},
    {sipName_ScriptFunction, static_cast<int>(QScriptContextInfo::ScriptFunction), 11},
};

PyDoc_STRVAR(doc_QScriptContextInfo, "\1QScriptContextInfo(QScriptContext)\n"
    "QScriptContextInfo(QScriptContextInfo)\n"
    "QScriptContextInfo()");


pyqt4ClassTypeDef sipTypeDef_QtScript_QScriptContextInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QScriptContextInfo,
        {0}
    },
    {
        sipNameNr_QScriptContextInfo,
        {0, 0, 1},
        11, methods_QScriptContextInfo,
        4, enummembers_QScriptContextInfo,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QScriptContextInfo,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QScriptContextInfo,
    init_type_QScriptContextInfo,
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
    dealloc_QScriptContextInfo,
    assign_QScriptContextInfo,
    array_QScriptContextInfo,
    copy_QScriptContextInfo,
    release_QScriptContextInfo,
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
