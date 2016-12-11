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

#line 32 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qabstractprintdialog.sip"
#include <qabstractprintdialog.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQAbstractPrintDialogPrintDialogOptions.cpp"

#line 32 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qabstractprintdialog.sip"
#include <qabstractprintdialog.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQAbstractPrintDialogPrintDialogOptions.cpp"


extern "C" {static int slot_QAbstractPrintDialog_PrintDialogOptions___bool__(PyObject *);}
static int slot_QAbstractPrintDialog_PrintDialogOptions___bool__(PyObject *sipSelf)
{
    QAbstractPrintDialog::PrintDialogOptions *sipCpp = reinterpret_cast<QAbstractPrintDialog::PrintDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractPrintDialog_PrintDialogOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QAbstractPrintDialog::PrintDialogOptions::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQAbstractPrintDialogPrintDialogOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QAbstractPrintDialog::PrintDialogOptions *sipCpp = reinterpret_cast<QAbstractPrintDialog::PrintDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractPrintDialog_PrintDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAbstractPrintDialog::PrintDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractPrintDialog_PrintDialogOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QAbstractPrintDialog::PrintDialogOptions::Int() != a0->operator QAbstractPrintDialog::PrintDialogOptions::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQAbstractPrintDialogPrintDialogOptions.cpp"
            sipReleaseType(const_cast<QAbstractPrintDialog::PrintDialogOptions *>(a0),sipType_QAbstractPrintDialog_PrintDialogOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QAbstractPrintDialog_PrintDialogOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QAbstractPrintDialog::PrintDialogOptions *sipCpp = reinterpret_cast<QAbstractPrintDialog::PrintDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractPrintDialog_PrintDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAbstractPrintDialog::PrintDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractPrintDialog_PrintDialogOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QAbstractPrintDialog::PrintDialogOptions::Int() == a0->operator QAbstractPrintDialog::PrintDialogOptions::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQAbstractPrintDialogPrintDialogOptions.cpp"
            sipReleaseType(const_cast<QAbstractPrintDialog::PrintDialogOptions *>(a0),sipType_QAbstractPrintDialog_PrintDialogOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QAbstractPrintDialog_PrintDialogOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___invert__(PyObject *);}
static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___invert__(PyObject *sipSelf)
{
    QAbstractPrintDialog::PrintDialogOptions *sipCpp = reinterpret_cast<QAbstractPrintDialog::PrintDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractPrintDialog_PrintDialogOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QAbstractPrintDialog::PrintDialogOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QAbstractPrintDialog::PrintDialogOptions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QAbstractPrintDialog_PrintDialogOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractPrintDialog::PrintDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractPrintDialog_PrintDialogOptions, &a0, &a0State, &a1))
        {
            QAbstractPrintDialog::PrintDialogOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QAbstractPrintDialog::PrintDialogOptions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractPrintDialog_PrintDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractPrintDialog_PrintDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractPrintDialog::PrintDialogOptions* a0;
        int a0State = 0;
        QAbstractPrintDialog::PrintDialogOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QAbstractPrintDialog_PrintDialogOptions, &a0, &a0State, sipType_QAbstractPrintDialog_PrintDialogOptions, &a1, &a1State))
        {
            QAbstractPrintDialog::PrintDialogOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QAbstractPrintDialog::PrintDialogOptions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractPrintDialog_PrintDialogOptions,a0State);
            sipReleaseType(a1,sipType_QAbstractPrintDialog_PrintDialogOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractPrintDialog_PrintDialogOptions,NULL);
        }
    }

    {
        QAbstractPrintDialog::PrintDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractPrintDialog_PrintDialogOptions, &a0, &a0State, &a1))
        {
            QAbstractPrintDialog::PrintDialogOptions*sipRes = 0;

#line 365 "sip/QtCore/qglobal.sip"
        sipRes = new QAbstractPrintDialog::PrintDialogOptions(*a0 ^ a1);
#line 238 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQAbstractPrintDialogPrintDialogOptions.cpp"
            sipReleaseType(a0,sipType_QAbstractPrintDialog_PrintDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractPrintDialog_PrintDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractPrintDialog::PrintDialogOptions* a0;
        int a0State = 0;
        QAbstractPrintDialog::PrintDialogOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QAbstractPrintDialog_PrintDialogOptions, &a0, &a0State, sipType_QAbstractPrintDialog_PrintDialogOptions, &a1, &a1State))
        {
            QAbstractPrintDialog::PrintDialogOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QAbstractPrintDialog::PrintDialogOptions((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractPrintDialog_PrintDialogOptions,a0State);
            sipReleaseType(a1,sipType_QAbstractPrintDialog_PrintDialogOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractPrintDialog_PrintDialogOptions,NULL);
        }
    }

    {
        QAbstractPrintDialog::PrintDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractPrintDialog_PrintDialogOptions, &a0, &a0State, &a1))
        {
            QAbstractPrintDialog::PrintDialogOptions*sipRes = 0;

#line 360 "sip/QtCore/qglobal.sip"
        sipRes = new QAbstractPrintDialog::PrintDialogOptions(*a0 | a1);
#line 290 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQAbstractPrintDialogPrintDialogOptions.cpp"
            sipReleaseType(a0,sipType_QAbstractPrintDialog_PrintDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractPrintDialog_PrintDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___int__(PyObject *);}
static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___int__(PyObject *sipSelf)
{
    QAbstractPrintDialog::PrintDialogOptions *sipCpp = reinterpret_cast<QAbstractPrintDialog::PrintDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractPrintDialog_PrintDialogOptions));

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


extern "C" {static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractPrintDialog_PrintDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QAbstractPrintDialog::PrintDialogOptions *sipCpp = reinterpret_cast<QAbstractPrintDialog::PrintDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractPrintDialog_PrintDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QAbstractPrintDialog::PrintDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractPrintDialog_PrintDialogOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QAbstractPrintDialog::PrintDialogOptions::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractPrintDialog_PrintDialogOptions,a0State);

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


extern "C" {static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractPrintDialog_PrintDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QAbstractPrintDialog::PrintDialogOptions *sipCpp = reinterpret_cast<QAbstractPrintDialog::PrintDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractPrintDialog_PrintDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QAbstractPrintDialog::PrintDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractPrintDialog_PrintDialogOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QAbstractPrintDialog::PrintDialogOptions::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractPrintDialog_PrintDialogOptions,a0State);

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


extern "C" {static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractPrintDialog_PrintDialogOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractPrintDialog_PrintDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QAbstractPrintDialog::PrintDialogOptions *sipCpp = reinterpret_cast<QAbstractPrintDialog::PrintDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractPrintDialog_PrintDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QAbstractPrintDialog::PrintDialogOptions::operator&=(a0);
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
extern "C" {static void release_QAbstractPrintDialog_PrintDialogOptions(void *, int);}
static void release_QAbstractPrintDialog_PrintDialogOptions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QAbstractPrintDialog::PrintDialogOptions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QAbstractPrintDialog_PrintDialogOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QAbstractPrintDialog_PrintDialogOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QAbstractPrintDialog::PrintDialogOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QAbstractPrintDialog::PrintDialogOptions *>(sipSrc);
}


extern "C" {static void *array_QAbstractPrintDialog_PrintDialogOptions(SIP_SSIZE_T);}
static void *array_QAbstractPrintDialog_PrintDialogOptions(SIP_SSIZE_T sipNrElem)
{
    return new QAbstractPrintDialog::PrintDialogOptions[sipNrElem];
}


extern "C" {static void *copy_QAbstractPrintDialog_PrintDialogOptions(const void *, SIP_SSIZE_T);}
static void *copy_QAbstractPrintDialog_PrintDialogOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QAbstractPrintDialog::PrintDialogOptions(reinterpret_cast<const QAbstractPrintDialog::PrintDialogOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAbstractPrintDialog_PrintDialogOptions(sipSimpleWrapper *);}
static void dealloc_QAbstractPrintDialog_PrintDialogOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractPrintDialog_PrintDialogOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QAbstractPrintDialog_PrintDialogOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractPrintDialog_PrintDialogOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QAbstractPrintDialog::PrintDialogOptions *sipCpp = 0;

    {
        const QAbstractPrintDialog::PrintDialogOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QAbstractPrintDialog_PrintDialogOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAbstractPrintDialog::PrintDialogOptions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QAbstractPrintDialog::PrintDialogOptions *>(a0),sipType_QAbstractPrintDialog_PrintDialogOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAbstractPrintDialog::PrintDialogOptions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAbstractPrintDialog::PrintDialogOptions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QAbstractPrintDialog_PrintDialogOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QAbstractPrintDialog_PrintDialogOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QAbstractPrintDialog::PrintDialogOptions **sipCppPtr = reinterpret_cast<QAbstractPrintDialog::PrintDialogOptions **>(sipCppPtrV);

#line 398 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QAbstractPrintDialog::PrintDialogOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractPrintDialog_PrintDialogOption)) ||
            sipCanConvertToType(sipPy, sipType_QAbstractPrintDialog_PrintDialogOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractPrintDialog_PrintDialogOption)))
{
    *sipCppPtr = new QAbstractPrintDialog::PrintDialogOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QAbstractPrintDialog::PrintDialogOptions *>(sipConvertToType(sipPy, sipType_QAbstractPrintDialog_PrintDialogOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQAbstractPrintDialogPrintDialogOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAbstractPrintDialog_PrintDialogOptions[] = {
    {(void *)slot_QAbstractPrintDialog_PrintDialogOptions___bool__, bool_slot},
    {(void *)slot_QAbstractPrintDialog_PrintDialogOptions___ne__, ne_slot},
    {(void *)slot_QAbstractPrintDialog_PrintDialogOptions___eq__, eq_slot},
    {(void *)slot_QAbstractPrintDialog_PrintDialogOptions___invert__, invert_slot},
    {(void *)slot_QAbstractPrintDialog_PrintDialogOptions___and__, and_slot},
    {(void *)slot_QAbstractPrintDialog_PrintDialogOptions___xor__, xor_slot},
    {(void *)slot_QAbstractPrintDialog_PrintDialogOptions___or__, or_slot},
    {(void *)slot_QAbstractPrintDialog_PrintDialogOptions___int__, int_slot},
    {(void *)slot_QAbstractPrintDialog_PrintDialogOptions___ixor__, ixor_slot},
    {(void *)slot_QAbstractPrintDialog_PrintDialogOptions___ior__, ior_slot},
    {(void *)slot_QAbstractPrintDialog_PrintDialogOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QAbstractPrintDialog_PrintDialogOptions, "\1QAbstractPrintDialog.PrintDialogOptions(QAbstractPrintDialog.PrintDialogOptions)\n"
    "QAbstractPrintDialog.PrintDialogOptions(int)\n"
    "QAbstractPrintDialog.PrintDialogOptions()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QAbstractPrintDialog_PrintDialogOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QAbstractPrintDialog__PrintDialogOptions,
        {0}
    },
    {
        sipNameNr_PrintDialogOptions,
        {15, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractPrintDialog_PrintDialogOptions,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QAbstractPrintDialog_PrintDialogOptions,
    init_type_QAbstractPrintDialog_PrintDialogOptions,
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
    dealloc_QAbstractPrintDialog_PrintDialogOptions,
    assign_QAbstractPrintDialog_PrintDialogOptions,
    array_QAbstractPrintDialog_PrintDialogOptions,
    copy_QAbstractPrintDialog_PrintDialogOptions,
    release_QAbstractPrintDialog_PrintDialogOptions,
    0,
    convertTo_QAbstractPrintDialog_PrintDialogOptions,
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
