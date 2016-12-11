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

#line 336 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQHoverEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQHoverEvent.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQHoverEvent.cpp"


class sipQHoverEvent : public QHoverEvent
{
public:
    sipQHoverEvent(QEvent::Type,const QPoint&,const QPoint&);
    sipQHoverEvent(const QHoverEvent&);
    ~sipQHoverEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQHoverEvent(const sipQHoverEvent &);
    sipQHoverEvent &operator = (const sipQHoverEvent &);
};

sipQHoverEvent::sipQHoverEvent(QEvent::Type a0,const QPoint& a1,const QPoint& a2): QHoverEvent(a0,a1,a2), sipPySelf(0)
{
}

sipQHoverEvent::sipQHoverEvent(const QHoverEvent& a0): QHoverEvent(a0), sipPySelf(0)
{
}

sipQHoverEvent::~sipQHoverEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QHoverEvent_pos, "pos(self) -> QPoint");

extern "C" {static PyObject *meth_QHoverEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QHoverEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHoverEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHoverEvent, sipName_pos, doc_QHoverEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QHoverEvent_oldPos, "oldPos(self) -> QPoint");

extern "C" {static PyObject *meth_QHoverEvent_oldPos(PyObject *, PyObject *);}
static PyObject *meth_QHoverEvent_oldPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHoverEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->oldPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHoverEvent, sipName_oldPos, doc_QHoverEvent_oldPos);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHoverEvent(void *, int);}
static void release_QHoverEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQHoverEvent *>(sipCppV);
    else
        delete reinterpret_cast<QHoverEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QHoverEvent(sipSimpleWrapper *);}
static void dealloc_QHoverEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQHoverEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QHoverEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QHoverEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHoverEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQHoverEvent *sipCpp = 0;

    {
        QEvent::Type a0;
        const QPoint* a1;
        const QPoint* a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9J9", sipType_QEvent_Type, &a0, sipType_QPoint, &a1, sipType_QPoint, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHoverEvent(a0,*a1,*a2);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QHoverEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QHoverEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHoverEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QHoverEvent[] = {{58, 0, 1}};


static PyMethodDef methods_QHoverEvent[] = {
    {SIP_MLNAME_CAST(sipName_oldPos), meth_QHoverEvent_oldPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QHoverEvent_oldPos)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QHoverEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QHoverEvent_pos)}
};

PyDoc_STRVAR(doc_QHoverEvent, "\1QHoverEvent(QEvent.Type, QPoint, QPoint)\n"
    "QHoverEvent(QHoverEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QHoverEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QHoverEvent,
        {0}
    },
    {
        sipNameNr_QHoverEvent,
        {0, 0, 1},
        2, methods_QHoverEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QHoverEvent,
    -1,
    -1,
    supers_QHoverEvent,
    0,
    init_type_QHoverEvent,
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
    dealloc_QHoverEvent,
    0,
    0,
    0,
    release_QHoverEvent,
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