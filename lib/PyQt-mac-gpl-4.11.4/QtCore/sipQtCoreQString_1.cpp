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

#line 31 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQString_1.cpp"



extern "C" {static void assign_QString_1(void *, SIP_SSIZE_T, const void *);}
static void assign_QString_1(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QString *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QString *>(sipSrc);
}


extern "C" {static void *array_QString_1(SIP_SSIZE_T);}
static void *array_QString_1(SIP_SSIZE_T sipNrElem)
{
    return new QString[sipNrElem];
}


extern "C" {static void *copy_QString_1(const void *, SIP_SSIZE_T);}
static void *copy_QString_1(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QString(reinterpret_cast<const QString *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QString_1(void *, int);}
static void release_QString_1(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QString *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QString_1(PyObject *, void **, int *, PyObject *);}
static int convertTo_QString_1(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QString **sipCppPtr = reinterpret_cast<QString **>(sipCppPtrV);

#line 35 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qstring.sip"
if (sipIsErr == NULL)
#if PY_MAJOR_VERSION < 3
    return (sipPy == Py_None || PyString_Check(sipPy) || PyUnicode_Check(sipPy));
#else
    return (sipPy == Py_None || PyUnicode_Check(sipPy));
#endif

if (sipPy == Py_None)
{
    // None is the only way to create a null (as opposed to empty) QString.
    *sipCppPtr = new QString();

    return sipGetState(sipTransferObj);
}

#if PY_MAJOR_VERSION < 3
if (PyString_Check(sipPy))
{
    *sipCppPtr = new QString(PyString_AS_STRING(sipPy));

    return sipGetState(sipTransferObj);
}
#endif

*sipCppPtr = new QString(qpycore_PyObject_AsQString(sipPy));

return sipGetState(sipTransferObj);
#line 98 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQString_1.cpp"
}


extern "C" {static PyObject *convertFrom_QString_1(void *, PyObject *);}
static PyObject *convertFrom_QString_1(void *sipCppV, PyObject *)
{
   QString *sipCpp = reinterpret_cast<QString *>(sipCppV);

#line 65 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qstring.sip"
    return qpycore_PyObject_FromQString(*sipCpp);
#line 109 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQString_1.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QString_1 = {
    {
        1,
        &sipTypeDef_QtCore_QString_0.super.ctd_base,
        0,
        SIP_TYPE_ALLOW_NONE|SIP_TYPE_MAPPED,
        sipNameNr_QString,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QString_1,
    array_QString_1,
    copy_QString_1,
    release_QString_1,
    convertTo_QString_1,
    convertFrom_QString_1
};
