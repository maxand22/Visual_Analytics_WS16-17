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

#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQList0100QInputMethodEventAttribute.cpp"

#line 651 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 669 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 35 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQList0100QInputMethodEventAttribute.cpp"


extern "C" {static void assign_QList_0100QInputMethodEvent_Attribute(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QInputMethodEvent_Attribute(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QInputMethodEvent::Attribute> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QInputMethodEvent::Attribute> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QInputMethodEvent_Attribute(SIP_SSIZE_T);}
static void *array_QList_0100QInputMethodEvent_Attribute(SIP_SSIZE_T sipNrElem)
{
    return new QList<QInputMethodEvent::Attribute>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QInputMethodEvent_Attribute(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QInputMethodEvent_Attribute(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QInputMethodEvent::Attribute>(reinterpret_cast<const QList<QInputMethodEvent::Attribute> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QInputMethodEvent_Attribute(void *, int);}
static void release_QList_0100QInputMethodEvent_Attribute(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QInputMethodEvent::Attribute> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QInputMethodEvent_Attribute(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QInputMethodEvent_Attribute(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QInputMethodEvent::Attribute> **sipCppPtr = reinterpret_cast<QList<QInputMethodEvent::Attribute> **>(sipCppPtrV);

#line 59 "sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QInputMethodEvent_Attribute, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QInputMethodEvent::Attribute> *ql = new QList<QInputMethodEvent::Attribute>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QInputMethodEvent::Attribute *t = reinterpret_cast<QInputMethodEvent::Attribute *>(sipConvertToType(itm, sipType_QInputMethodEvent_Attribute, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QInputMethodEvent_Attribute, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QInputMethodEvent_Attribute, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 125 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQList0100QInputMethodEventAttribute.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QInputMethodEvent_Attribute(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QInputMethodEvent_Attribute(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QInputMethodEvent::Attribute> *sipCpp = reinterpret_cast<QList<QInputMethodEvent::Attribute> *>(sipCppV);

#line 32 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QInputMethodEvent::Attribute *t = new QInputMethodEvent::Attribute(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QInputMethodEvent_Attribute, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 159 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQList0100QInputMethodEventAttribute.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0100QInputMethodEvent_Attribute = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_4093,
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
    assign_QList_0100QInputMethodEvent_Attribute,
    array_QList_0100QInputMethodEvent_Attribute,
    copy_QList_0100QInputMethodEvent_Attribute,
    release_QList_0100QInputMethodEvent_Attribute,
    convertTo_QList_0100QInputMethodEvent_Attribute,
    convertFrom_QList_0100QInputMethodEvent_Attribute
};
