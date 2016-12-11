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

#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qvector.sip"
#include <qvector.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQVector0100QXmlStreamNamespaceDeclaration.cpp"

#line 252 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQVector0100QXmlStreamNamespaceDeclaration.cpp"


extern "C" {static void assign_QVector_0100QXmlStreamNamespaceDeclaration(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QXmlStreamNamespaceDeclaration(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QXmlStreamNamespaceDeclaration> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QXmlStreamNamespaceDeclaration> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QXmlStreamNamespaceDeclaration(SIP_SSIZE_T);}
static void *array_QVector_0100QXmlStreamNamespaceDeclaration(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QXmlStreamNamespaceDeclaration>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QXmlStreamNamespaceDeclaration(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QXmlStreamNamespaceDeclaration(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QXmlStreamNamespaceDeclaration>(reinterpret_cast<const QVector<QXmlStreamNamespaceDeclaration> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QXmlStreamNamespaceDeclaration(void *, int);}
static void release_QVector_0100QXmlStreamNamespaceDeclaration(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QVector<QXmlStreamNamespaceDeclaration> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVector_0100QXmlStreamNamespaceDeclaration(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QXmlStreamNamespaceDeclaration(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QXmlStreamNamespaceDeclaration> **sipCppPtr = reinterpret_cast<QVector<QXmlStreamNamespaceDeclaration> **>(sipCppPtrV);

#line 59 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QXmlStreamNamespaceDeclaration, SIP_NOT_NONE))
                return 0;

        return 1;
    }

    QVector<QXmlStreamNamespaceDeclaration> *qv = new QVector<QXmlStreamNamespaceDeclaration>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        int state;
        QXmlStreamNamespaceDeclaration *t = reinterpret_cast<QXmlStreamNamespaceDeclaration *>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QXmlStreamNamespaceDeclaration, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QXmlStreamNamespaceDeclaration, state);

            delete qv;
            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QXmlStreamNamespaceDeclaration, state);
    }
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 110 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQVector0100QXmlStreamNamespaceDeclaration.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QXmlStreamNamespaceDeclaration(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QXmlStreamNamespaceDeclaration(void *sipCppV, PyObject *sipTransferObj)
{
   QVector<QXmlStreamNamespaceDeclaration> *sipCpp = reinterpret_cast<QVector<QXmlStreamNamespaceDeclaration> *>(sipCppV);

#line 32 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QXmlStreamNamespaceDeclaration *t = new QXmlStreamNamespaceDeclaration(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QXmlStreamNamespaceDeclaration, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 144 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtCore/sipQtCoreQVector0100QXmlStreamNamespaceDeclaration.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QVector_0100QXmlStreamNamespaceDeclaration = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_43,
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
    assign_QVector_0100QXmlStreamNamespaceDeclaration,
    array_QVector_0100QXmlStreamNamespaceDeclaration,
    copy_QVector_0100QXmlStreamNamespaceDeclaration,
    release_QVector_0100QXmlStreamNamespaceDeclaration,
    convertTo_QVector_0100QXmlStreamNamespaceDeclaration,
    convertFrom_QVector_0100QXmlStreamNamespaceDeclaration
};
