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

#include "sipAPIQtHelp.h"

#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtHelp/qhelpcontentwidget.sip"
#include <qhelpcontentwidget.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtHelp/sipQtHelpQHelpContentItem.cpp"

#line 102 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtHelp/sipQtHelpQHelpContentItem.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtHelp/sipQtHelpQHelpContentItem.cpp"


PyDoc_STRVAR(doc_QHelpContentItem_child, "child(self, int) -> QHelpContentItem");

extern "C" {static PyObject *meth_QHelpContentItem_child(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentItem_child(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QHelpContentItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QHelpContentItem, &sipCpp, &a0))
        {
            QHelpContentItem*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->child(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QHelpContentItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpContentItem, sipName_child, doc_QHelpContentItem_child);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpContentItem_childCount, "childCount(self) -> int");

extern "C" {static PyObject *meth_QHelpContentItem_childCount(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentItem_childCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpContentItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpContentItem, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->childCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpContentItem, sipName_childCount, doc_QHelpContentItem_childCount);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpContentItem_title, "title(self) -> QString");

extern "C" {static PyObject *meth_QHelpContentItem_title(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentItem_title(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpContentItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpContentItem, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->title());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpContentItem, sipName_title, doc_QHelpContentItem_title);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpContentItem_url, "url(self) -> QUrl");

extern "C" {static PyObject *meth_QHelpContentItem_url(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentItem_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpContentItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpContentItem, &sipCpp))
        {
            QUrl*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->url());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpContentItem, sipName_url, doc_QHelpContentItem_url);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpContentItem_row, "row(self) -> int");

extern "C" {static PyObject *meth_QHelpContentItem_row(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentItem_row(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpContentItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpContentItem, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->row();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpContentItem, sipName_row, doc_QHelpContentItem_row);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpContentItem_parent, "parent(self) -> QHelpContentItem");

extern "C" {static PyObject *meth_QHelpContentItem_parent(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentItem_parent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpContentItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpContentItem, &sipCpp))
        {
            QHelpContentItem*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->parent();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QHelpContentItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpContentItem, sipName_parent, doc_QHelpContentItem_parent);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpContentItem_childPosition, "childPosition(self, QHelpContentItem) -> int");

extern "C" {static PyObject *meth_QHelpContentItem_childPosition(PyObject *, PyObject *);}
static PyObject *meth_QHelpContentItem_childPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QHelpContentItem* a0;
        const QHelpContentItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QHelpContentItem, &sipCpp, sipType_QHelpContentItem, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->childPosition(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpContentItem, sipName_childPosition, doc_QHelpContentItem_childPosition);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHelpContentItem(void *, int);}
static void release_QHelpContentItem(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QHelpContentItem *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QHelpContentItem(sipSimpleWrapper *);}
static void dealloc_QHelpContentItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QHelpContentItem(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_QHelpContentItem[] = {
    {SIP_MLNAME_CAST(sipName_child), meth_QHelpContentItem_child, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpContentItem_child)},
    {SIP_MLNAME_CAST(sipName_childCount), meth_QHelpContentItem_childCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpContentItem_childCount)},
    {SIP_MLNAME_CAST(sipName_childPosition), meth_QHelpContentItem_childPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpContentItem_childPosition)},
    {SIP_MLNAME_CAST(sipName_parent), meth_QHelpContentItem_parent, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpContentItem_parent)},
    {SIP_MLNAME_CAST(sipName_row), meth_QHelpContentItem_row, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpContentItem_row)},
    {SIP_MLNAME_CAST(sipName_title), meth_QHelpContentItem_title, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpContentItem_title)},
    {SIP_MLNAME_CAST(sipName_url), meth_QHelpContentItem_url, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpContentItem_url)}
};


pyqt4ClassTypeDef sipTypeDef_QtHelp_QHelpContentItem = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QHelpContentItem,
        {0}
    },
    {
        sipNameNr_QHelpContentItem,
        {0, 0, 1},
        7, methods_QHelpContentItem,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
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
    dealloc_QHelpContentItem,
    0,
    0,
    0,
    release_QHelpContentItem,
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
