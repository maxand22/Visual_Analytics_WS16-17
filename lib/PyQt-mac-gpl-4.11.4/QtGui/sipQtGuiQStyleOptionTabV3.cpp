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

#line 2185 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionTabV3.cpp"

#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionTabV3.cpp"
#line 867 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionTabV3.cpp"
#line 763 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionTabV3.cpp"
#line 32 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 42 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionTabV3.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTabV3(void *, int);}
static void release_QStyleOptionTabV3(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionTabV3 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionTabV3(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionTabV3(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionTabV3 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionTabV3 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionTabV3(SIP_SSIZE_T);}
static void *array_QStyleOptionTabV3(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionTabV3[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionTabV3(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionTabV3(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionTabV3(reinterpret_cast<const QStyleOptionTabV3 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTabV3(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTabV3(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionTabV3(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionTabV3(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionTabV3(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionTabV3 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabV3();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTabV3* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTabV3, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabV3(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTabV2* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTabV2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabV3(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTab* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTab, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabV3(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionTabV3[] = {{579, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionTabV3[] = {
    {sipName_Version, static_cast<int>(QStyleOptionTabV3::Version), 582},
};


extern "C" {static PyObject *varget_QStyleOptionTabV3_documentMode(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabV3_documentMode(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionTabV3 *sipCpp = reinterpret_cast<QStyleOptionTabV3 *>(sipSelf);

    sipVal = sipCpp->documentMode;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionTabV3_documentMode(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabV3_documentMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionTabV3 *sipCpp = reinterpret_cast<QStyleOptionTabV3 *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->documentMode = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabV3_leftButtonSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabV3_leftButtonSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionTabV3 *sipCpp = reinterpret_cast<QStyleOptionTabV3 *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -82);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->leftButtonSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPySelf, -82, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabV3_leftButtonSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabV3_leftButtonSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionTabV3 *sipCpp = reinterpret_cast<QStyleOptionTabV3 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->leftButtonSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabV3_rightButtonSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabV3_rightButtonSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionTabV3 *sipCpp = reinterpret_cast<QStyleOptionTabV3 *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -83);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->rightButtonSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPySelf, -83, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabV3_rightButtonSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabV3_rightButtonSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionTabV3 *sipCpp = reinterpret_cast<QStyleOptionTabV3 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->rightButtonSize = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionTabV3[] = {
    {InstanceVariable, sipName_documentMode, (PyMethodDef *)varget_QStyleOptionTabV3_documentMode, (PyMethodDef *)varset_QStyleOptionTabV3_documentMode, NULL, NULL},
    {InstanceVariable, sipName_leftButtonSize, (PyMethodDef *)varget_QStyleOptionTabV3_leftButtonSize, (PyMethodDef *)varset_QStyleOptionTabV3_leftButtonSize, NULL, NULL},
    {InstanceVariable, sipName_rightButtonSize, (PyMethodDef *)varget_QStyleOptionTabV3_rightButtonSize, (PyMethodDef *)varset_QStyleOptionTabV3_rightButtonSize, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionTabV3, "\1QStyleOptionTabV3()\n"
    "QStyleOptionTabV3(QStyleOptionTabV3)\n"
    "QStyleOptionTabV3(QStyleOptionTabV2)\n"
    "QStyleOptionTabV3(QStyleOptionTab)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionTabV3 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTabV3,
        {0}
    },
    {
        sipNameNr_QStyleOptionTabV3,
        {0, 0, 1},
        0, 0,
        1, enummembers_QStyleOptionTabV3,
        3, variables_QStyleOptionTabV3,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionTabV3,
    -1,
    -1,
    supers_QStyleOptionTabV3,
    0,
    init_type_QStyleOptionTabV3,
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
    dealloc_QStyleOptionTabV3,
    assign_QStyleOptionTabV3,
    array_QStyleOptionTabV3,
    copy_QStyleOptionTabV3,
    release_QStyleOptionTabV3,
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
