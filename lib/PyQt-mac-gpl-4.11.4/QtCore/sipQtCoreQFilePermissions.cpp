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

#line 79 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qfile.sip"
#include <qfile.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQFilePermissions.cpp"

#line 79 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qfile.sip"
#include <qfile.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQFilePermissions.cpp"


extern "C" {static int slot_QFile_Permissions___bool__(PyObject *);}
static int slot_QFile_Permissions___bool__(PyObject *sipSelf)
{
    QFile::Permissions *sipCpp = reinterpret_cast<QFile::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFile_Permissions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QFile::Permissions::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQFilePermissions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFile_Permissions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QFile_Permissions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QFile::Permissions *sipCpp = reinterpret_cast<QFile::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFile_Permissions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QFile::Permissions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFile_Permissions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QFile::Permissions::Int() != a0->operator QFile::Permissions::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQFilePermissions.cpp"
            sipReleaseType(const_cast<QFile::Permissions *>(a0),sipType_QFile_Permissions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QFile_Permissions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QFile_Permissions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QFile_Permissions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QFile::Permissions *sipCpp = reinterpret_cast<QFile::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFile_Permissions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QFile::Permissions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFile_Permissions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QFile::Permissions::Int() == a0->operator QFile::Permissions::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQFilePermissions.cpp"
            sipReleaseType(const_cast<QFile::Permissions *>(a0),sipType_QFile_Permissions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QFile_Permissions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QFile_Permissions___invert__(PyObject *);}
static PyObject *slot_QFile_Permissions___invert__(PyObject *sipSelf)
{
    QFile::Permissions *sipCpp = reinterpret_cast<QFile::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFile_Permissions));

    if (!sipCpp)
        return 0;


    {
        {
            QFile::Permissions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFile::Permissions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QFile_Permissions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFile_Permissions___and__(PyObject *,PyObject *);}
static PyObject *slot_QFile_Permissions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QFile::Permissions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFile_Permissions, &a0, &a0State, &a1))
        {
            QFile::Permissions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFile::Permissions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QFile_Permissions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFile_Permissions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QFile_Permissions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QFile_Permissions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QFile::Permissions* a0;
        int a0State = 0;
        QFile::Permissions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QFile_Permissions, &a0, &a0State, sipType_QFile_Permissions, &a1, &a1State))
        {
            QFile::Permissions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFile::Permissions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QFile_Permissions,a0State);
            sipReleaseType(a1,sipType_QFile_Permissions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QFile_Permissions,NULL);
        }
    }

    {
        QFile::Permissions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFile_Permissions, &a0, &a0State, &a1))
        {
            QFile::Permissions*sipRes = 0;

#line 365 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qglobal.sip"
        sipRes = new QFile::Permissions(*a0 ^ a1);
#line 238 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQFilePermissions.cpp"
            sipReleaseType(a0,sipType_QFile_Permissions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFile_Permissions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QFile_Permissions___or__(PyObject *,PyObject *);}
static PyObject *slot_QFile_Permissions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QFile::Permissions* a0;
        int a0State = 0;
        QFile::Permissions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QFile_Permissions, &a0, &a0State, sipType_QFile_Permissions, &a1, &a1State))
        {
            QFile::Permissions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFile::Permissions((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QFile_Permissions,a0State);
            sipReleaseType(a1,sipType_QFile_Permissions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QFile_Permissions,NULL);
        }
    }

    {
        QFile::Permissions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFile_Permissions, &a0, &a0State, &a1))
        {
            QFile::Permissions*sipRes = 0;

#line 360 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qglobal.sip"
        sipRes = new QFile::Permissions(*a0 | a1);
#line 290 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQFilePermissions.cpp"
            sipReleaseType(a0,sipType_QFile_Permissions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFile_Permissions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QFile_Permissions___int__(PyObject *);}
static PyObject *slot_QFile_Permissions___int__(PyObject *sipSelf)
{
    QFile::Permissions *sipCpp = reinterpret_cast<QFile::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFile_Permissions));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFile_Permissions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QFile_Permissions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFile_Permissions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QFile::Permissions *sipCpp = reinterpret_cast<QFile::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFile_Permissions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QFile::Permissions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFile_Permissions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QFile::Permissions::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QFile_Permissions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QFile_Permissions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QFile_Permissions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFile_Permissions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QFile::Permissions *sipCpp = reinterpret_cast<QFile::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFile_Permissions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QFile::Permissions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFile_Permissions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QFile::Permissions::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QFile_Permissions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QFile_Permissions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QFile_Permissions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFile_Permissions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QFile::Permissions *sipCpp = reinterpret_cast<QFile::Permissions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFile_Permissions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QFile::Permissions::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFile_Permissions(void *, int);}
static void release_QFile_Permissions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QFile::Permissions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QFile_Permissions(void *, SIP_SSIZE_T, const void *);}
static void assign_QFile_Permissions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QFile::Permissions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QFile::Permissions *>(sipSrc);
}


extern "C" {static void *array_QFile_Permissions(SIP_SSIZE_T);}
static void *array_QFile_Permissions(SIP_SSIZE_T sipNrElem)
{
    return new QFile::Permissions[sipNrElem];
}


extern "C" {static void *copy_QFile_Permissions(const void *, SIP_SSIZE_T);}
static void *copy_QFile_Permissions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QFile::Permissions(reinterpret_cast<const QFile::Permissions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QFile_Permissions(sipSimpleWrapper *);}
static void dealloc_QFile_Permissions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFile_Permissions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QFile_Permissions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFile_Permissions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QFile::Permissions *sipCpp = 0;

    {
        const QFile::Permissions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QFile_Permissions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFile::Permissions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QFile::Permissions *>(a0),sipType_QFile_Permissions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFile::Permissions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFile::Permissions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QFile_Permissions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QFile_Permissions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QFile::Permissions **sipCppPtr = reinterpret_cast<QFile::Permissions **>(sipCppPtrV);

#line 398 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QFile::Permissions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFile_Permission)) ||
            sipCanConvertToType(sipPy, sipType_QFile_Permissions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFile_Permission)))
{
    *sipCppPtr = new QFile::Permissions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QFile::Permissions *>(sipConvertToType(sipPy, sipType_QFile_Permissions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQFilePermissions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QFile_Permissions[] = {
    {(void *)slot_QFile_Permissions___bool__, bool_slot},
    {(void *)slot_QFile_Permissions___ne__, ne_slot},
    {(void *)slot_QFile_Permissions___eq__, eq_slot},
    {(void *)slot_QFile_Permissions___invert__, invert_slot},
    {(void *)slot_QFile_Permissions___and__, and_slot},
    {(void *)slot_QFile_Permissions___xor__, xor_slot},
    {(void *)slot_QFile_Permissions___or__, or_slot},
    {(void *)slot_QFile_Permissions___int__, int_slot},
    {(void *)slot_QFile_Permissions___ixor__, ixor_slot},
    {(void *)slot_QFile_Permissions___ior__, ior_slot},
    {(void *)slot_QFile_Permissions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QFile_Permissions, "\1QFile.Permissions(QFile.Permissions)\n"
    "QFile.Permissions(int)\n"
    "QFile.Permissions()");


pyqt4ClassTypeDef sipTypeDef_QtCore_QFile_Permissions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QFile__Permissions,
        {0}
    },
    {
        sipNameNr_Permissions,
        {65, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFile_Permissions,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QFile_Permissions,
    init_type_QFile_Permissions,
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
    dealloc_QFile_Permissions,
    assign_QFile_Permissions,
    array_QFile_Permissions,
    copy_QFile_Permissions,
    release_QFile_Permissions,
    0,
    convertTo_QFile_Permissions,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0
};
