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

#line 2164 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionTabBarBaseV2.cpp"

#line 575 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionTabBarBaseV2.cpp"
#line 32 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionTabBarBaseV2.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTabBarBaseV2(void *, int);}
static void release_QStyleOptionTabBarBaseV2(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionTabBarBaseV2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionTabBarBaseV2(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionTabBarBaseV2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionTabBarBaseV2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionTabBarBaseV2 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionTabBarBaseV2(SIP_SSIZE_T);}
static void *array_QStyleOptionTabBarBaseV2(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionTabBarBaseV2[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionTabBarBaseV2(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionTabBarBaseV2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionTabBarBaseV2(reinterpret_cast<const QStyleOptionTabBarBaseV2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTabBarBaseV2(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTabBarBaseV2(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionTabBarBaseV2(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionTabBarBaseV2(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionTabBarBaseV2(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionTabBarBaseV2 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabBarBaseV2();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTabBarBaseV2* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTabBarBaseV2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabBarBaseV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTabBarBase* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTabBarBase, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabBarBaseV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionTabBarBaseV2[] = {{574, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionTabBarBaseV2[] = {
    {sipName_Version, static_cast<int>(QStyleOptionTabBarBaseV2::Version), 578},
};


extern "C" {static PyObject *varget_QStyleOptionTabBarBaseV2_documentMode(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabBarBaseV2_documentMode(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionTabBarBaseV2 *sipCpp = reinterpret_cast<QStyleOptionTabBarBaseV2 *>(sipSelf);

    sipVal = sipCpp->documentMode;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionTabBarBaseV2_documentMode(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabBarBaseV2_documentMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionTabBarBaseV2 *sipCpp = reinterpret_cast<QStyleOptionTabBarBaseV2 *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->documentMode = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionTabBarBaseV2[] = {
    {InstanceVariable, sipName_documentMode, (PyMethodDef *)varget_QStyleOptionTabBarBaseV2_documentMode, (PyMethodDef *)varset_QStyleOptionTabBarBaseV2_documentMode, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionTabBarBaseV2, "\1QStyleOptionTabBarBaseV2()\n"
    "QStyleOptionTabBarBaseV2(QStyleOptionTabBarBaseV2)\n"
    "QStyleOptionTabBarBaseV2(QStyleOptionTabBarBase)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionTabBarBaseV2 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTabBarBaseV2,
        {0}
    },
    {
        sipNameNr_QStyleOptionTabBarBaseV2,
        {0, 0, 1},
        0, 0,
        1, enummembers_QStyleOptionTabBarBaseV2,
        1, variables_QStyleOptionTabBarBaseV2,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionTabBarBaseV2,
    -1,
    -1,
    supers_QStyleOptionTabBarBaseV2,
    0,
    init_type_QStyleOptionTabBarBaseV2,
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
    dealloc_QStyleOptionTabBarBaseV2,
    assign_QStyleOptionTabBarBaseV2,
    array_QStyleOptionTabBarBaseV2,
    copy_QStyleOptionTabBarBaseV2,
    release_QStyleOptionTabBarBaseV2,
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
