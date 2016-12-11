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

#include "sipAPIQtDesigner.h"

#line 26 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtDesigner/abstractformwindowcursor.sip"
#include <abstractformwindowcursor.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowCursorInterface.cpp"

#line 32 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowCursorInterface.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowCursorInterface.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowCursorInterface.cpp"
#line 26 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtDesigner/abstractformwindow.sip"
#include <abstractformwindow.h>
#line 42 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowCursorInterface.cpp"


class sipQDesignerFormWindowCursorInterface : public QDesignerFormWindowCursorInterface
{
public:
    sipQDesignerFormWindowCursorInterface();
    sipQDesignerFormWindowCursorInterface(const QDesignerFormWindowCursorInterface&);
    virtual ~sipQDesignerFormWindowCursorInterface();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void resetWidgetProperty(QWidget*,const QString&);
    void setWidgetProperty(QWidget*,const QString&,const QVariant&);
    void setProperty(const QString&,const QVariant&);
    QWidget* selectedWidget(int) const;
    int selectedWidgetCount() const;
    bool hasSelection() const;
    QWidget* widget(int) const;
    int widgetCount() const;
    QWidget* current() const;
    void setPosition(int,QDesignerFormWindowCursorInterface::MoveMode);
    int position() const;
    bool movePosition(QDesignerFormWindowCursorInterface::MoveOperation,QDesignerFormWindowCursorInterface::MoveMode);
    QDesignerFormWindowInterface* formWindow() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDesignerFormWindowCursorInterface(const sipQDesignerFormWindowCursorInterface &);
    sipQDesignerFormWindowCursorInterface &operator = (const sipQDesignerFormWindowCursorInterface &);

    char sipPyMethods[13];
};

sipQDesignerFormWindowCursorInterface::sipQDesignerFormWindowCursorInterface(): QDesignerFormWindowCursorInterface(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerFormWindowCursorInterface::sipQDesignerFormWindowCursorInterface(const QDesignerFormWindowCursorInterface& a0): QDesignerFormWindowCursorInterface(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerFormWindowCursorInterface::~sipQDesignerFormWindowCursorInterface()
{
    sipCommonDtor(sipPySelf);
}

void sipQDesignerFormWindowCursorInterface::resetWidgetProperty(QWidget*a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_resetWidgetProperty);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QWidget*,const QString&);

    sipVH_QtDesigner_19(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQDesignerFormWindowCursorInterface::setWidgetProperty(QWidget*a0,const QString& a1,const QVariant& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_setWidgetProperty);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QWidget*,const QString&,const QVariant&);

    sipVH_QtDesigner_20(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

void sipQDesignerFormWindowCursorInterface::setProperty(const QString& a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_setProperty);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QVariant&);

    sipVH_QtDesigner_21(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QWidget* sipQDesignerFormWindowCursorInterface::selectedWidget(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_selectedWidget);

    if (!sipMeth)
        return 0;

    extern QWidget* sipVH_QtDesigner_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtDesigner_11(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQDesignerFormWindowCursorInterface::selectedWidgetCount() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_selectedWidgetCount);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQDesignerFormWindowCursorInterface::hasSelection() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_hasSelection);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}

QWidget* sipQDesignerFormWindowCursorInterface::widget(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_widget);

    if (!sipMeth)
        return 0;

    extern QWidget* sipVH_QtDesigner_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtDesigner_11(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQDesignerFormWindowCursorInterface::widgetCount() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_widgetCount);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}

QWidget* sipQDesignerFormWindowCursorInterface::current() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_current);

    if (!sipMeth)
        return 0;

    typedef QWidget* (*sipVH_QtGui_106)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtGui_106)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[106]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQDesignerFormWindowCursorInterface::setPosition(int a0,QDesignerFormWindowCursorInterface::MoveMode a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_setPosition);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,QDesignerFormWindowCursorInterface::MoveMode);

    sipVH_QtDesigner_22(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

int sipQDesignerFormWindowCursorInterface::position() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_position);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQDesignerFormWindowCursorInterface::movePosition(QDesignerFormWindowCursorInterface::MoveOperation a0,QDesignerFormWindowCursorInterface::MoveMode a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_movePosition);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtDesigner_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QDesignerFormWindowCursorInterface::MoveOperation,QDesignerFormWindowCursorInterface::MoveMode);

    return sipVH_QtDesigner_23(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QDesignerFormWindowInterface* sipQDesignerFormWindowCursorInterface::formWindow() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_formWindow);

    if (!sipMeth)
        return 0;

    extern QDesignerFormWindowInterface* sipVH_QtDesigner_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_18(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_formWindow, "formWindow(self) -> QDesignerFormWindowInterface");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_formWindow(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_formWindow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp))
        {
            QDesignerFormWindowInterface*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_formWindow);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->formWindow();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QDesignerFormWindowInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_formWindow, doc_QDesignerFormWindowCursorInterface_formWindow);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_movePosition, "movePosition(self, QDesignerFormWindowCursorInterface.MoveOperation, mode: QDesignerFormWindowCursorInterface.MoveMode = QDesignerFormWindowCursorInterface.MoveAnchor) -> bool");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_movePosition(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_movePosition(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QDesignerFormWindowCursorInterface::MoveOperation a0;
        QDesignerFormWindowCursorInterface::MoveMode a1 = QDesignerFormWindowCursorInterface::MoveAnchor;
        QDesignerFormWindowCursorInterface *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE|E", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, sipType_QDesignerFormWindowCursorInterface_MoveOperation, &a0, sipType_QDesignerFormWindowCursorInterface_MoveMode, &a1))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_movePosition);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->movePosition(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_movePosition, doc_QDesignerFormWindowCursorInterface_movePosition);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_position, "position(self) -> int");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_position(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_position);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->position();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_position, doc_QDesignerFormWindowCursorInterface_position);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_setPosition, "setPosition(self, int, mode: QDesignerFormWindowCursorInterface.MoveMode = QDesignerFormWindowCursorInterface.MoveAnchor)");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_setPosition(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_setPosition(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerFormWindowCursorInterface::MoveMode a1 = QDesignerFormWindowCursorInterface::MoveAnchor;
        QDesignerFormWindowCursorInterface *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bi|E", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, &a0, sipType_QDesignerFormWindowCursorInterface_MoveMode, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_setPosition);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPosition(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_setPosition, doc_QDesignerFormWindowCursorInterface_setPosition);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_current, "current(self) -> QWidget");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_current(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_current(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp))
        {
            QWidget*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_current);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->current();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_current, doc_QDesignerFormWindowCursorInterface_current);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_widgetCount, "widgetCount(self) -> int");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_widgetCount(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_widgetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_widgetCount);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->widgetCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_widgetCount, doc_QDesignerFormWindowCursorInterface_widgetCount);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_widget, "widget(self, int) -> QWidget");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_widget(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_widget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, &a0))
        {
            QWidget*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_widget);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->widget(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_widget, doc_QDesignerFormWindowCursorInterface_widget);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_hasSelection, "hasSelection(self) -> bool");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_hasSelection(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_hasSelection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_hasSelection);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasSelection();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_hasSelection, doc_QDesignerFormWindowCursorInterface_hasSelection);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_selectedWidgetCount, "selectedWidgetCount(self) -> int");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_selectedWidgetCount(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_selectedWidgetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_selectedWidgetCount);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->selectedWidgetCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_selectedWidgetCount, doc_QDesignerFormWindowCursorInterface_selectedWidgetCount);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_selectedWidget, "selectedWidget(self, int) -> QWidget");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_selectedWidget(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_selectedWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, &a0))
        {
            QWidget*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_selectedWidget);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->selectedWidget(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_selectedWidget, doc_QDesignerFormWindowCursorInterface_selectedWidget);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_setProperty, "setProperty(self, QString, QVariant)");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_setProperty(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_setProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QVariant* a1;
        int a1State = 0;
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_setProperty);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setProperty(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_setProperty, doc_QDesignerFormWindowCursorInterface_setProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_setWidgetProperty, "setWidgetProperty(self, QWidget, QString, QVariant)");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_setWidgetProperty(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_setWidgetProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QWidget* a0;
        const QString* a1;
        int a1State = 0;
        const QVariant* a2;
        int a2State = 0;
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1J1", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, sipType_QWidget, &a0, sipType_QString,&a1, &a1State, sipType_QVariant,&a2, &a2State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_setWidgetProperty);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setWidgetProperty(a0,*a1,*a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QVariant *>(a2),sipType_QVariant,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_setWidgetProperty, doc_QDesignerFormWindowCursorInterface_setWidgetProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_resetWidgetProperty, "resetWidgetProperty(self, QWidget, QString)");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_resetWidgetProperty(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_resetWidgetProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QWidget* a0;
        const QString* a1;
        int a1State = 0;
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, sipType_QWidget, &a0, sipType_QString,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_resetWidgetProperty);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->resetWidgetProperty(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_resetWidgetProperty, doc_QDesignerFormWindowCursorInterface_resetWidgetProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_isWidgetSelected, "isWidgetSelected(self, QWidget) -> bool");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_isWidgetSelected(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_isWidgetSelected(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWidget* a0;
        const QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, sipType_QWidget, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isWidgetSelected(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_isWidgetSelected, doc_QDesignerFormWindowCursorInterface_isWidgetSelected);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDesignerFormWindowCursorInterface(void *, int);}
static void release_QDesignerFormWindowCursorInterface(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDesignerFormWindowCursorInterface *>(sipCppV);
    else
        delete reinterpret_cast<QDesignerFormWindowCursorInterface *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDesignerFormWindowCursorInterface(sipSimpleWrapper *);}
static void dealloc_QDesignerFormWindowCursorInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDesignerFormWindowCursorInterface *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDesignerFormWindowCursorInterface(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDesignerFormWindowCursorInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDesignerFormWindowCursorInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDesignerFormWindowCursorInterface *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerFormWindowCursorInterface();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDesignerFormWindowCursorInterface* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDesignerFormWindowCursorInterface, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerFormWindowCursorInterface(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDesignerFormWindowCursorInterface[] = {
    {SIP_MLNAME_CAST(sipName_current), meth_QDesignerFormWindowCursorInterface_current, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_current)},
    {SIP_MLNAME_CAST(sipName_formWindow), meth_QDesignerFormWindowCursorInterface_formWindow, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_formWindow)},
    {SIP_MLNAME_CAST(sipName_hasSelection), meth_QDesignerFormWindowCursorInterface_hasSelection, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_hasSelection)},
    {SIP_MLNAME_CAST(sipName_isWidgetSelected), meth_QDesignerFormWindowCursorInterface_isWidgetSelected, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_isWidgetSelected)},
    {SIP_MLNAME_CAST(sipName_movePosition), (PyCFunction)meth_QDesignerFormWindowCursorInterface_movePosition, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_movePosition)},
    {SIP_MLNAME_CAST(sipName_position), meth_QDesignerFormWindowCursorInterface_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_position)},
    {SIP_MLNAME_CAST(sipName_resetWidgetProperty), meth_QDesignerFormWindowCursorInterface_resetWidgetProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_resetWidgetProperty)},
    {SIP_MLNAME_CAST(sipName_selectedWidget), meth_QDesignerFormWindowCursorInterface_selectedWidget, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_selectedWidget)},
    {SIP_MLNAME_CAST(sipName_selectedWidgetCount), meth_QDesignerFormWindowCursorInterface_selectedWidgetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_selectedWidgetCount)},
    {SIP_MLNAME_CAST(sipName_setPosition), (PyCFunction)meth_QDesignerFormWindowCursorInterface_setPosition, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_setPosition)},
    {SIP_MLNAME_CAST(sipName_setProperty), meth_QDesignerFormWindowCursorInterface_setProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_setProperty)},
    {SIP_MLNAME_CAST(sipName_setWidgetProperty), meth_QDesignerFormWindowCursorInterface_setWidgetProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_setWidgetProperty)},
    {SIP_MLNAME_CAST(sipName_widget), meth_QDesignerFormWindowCursorInterface_widget, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_widget)},
    {SIP_MLNAME_CAST(sipName_widgetCount), meth_QDesignerFormWindowCursorInterface_widgetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_widgetCount)}
};

static sipEnumMemberDef enummembers_QDesignerFormWindowCursorInterface[] = {
    {sipName_Down, static_cast<int>(QDesignerFormWindowCursorInterface::Down), 10},
    {sipName_End, static_cast<int>(QDesignerFormWindowCursorInterface::End), 10},
    {sipName_KeepAnchor, static_cast<int>(QDesignerFormWindowCursorInterface::KeepAnchor), 9},
    {sipName_Left, static_cast<int>(QDesignerFormWindowCursorInterface::Left), 10},
    {sipName_MoveAnchor, static_cast<int>(QDesignerFormWindowCursorInterface::MoveAnchor), 9},
    {sipName_Next, static_cast<int>(QDesignerFormWindowCursorInterface::Next), 10},
    {sipName_NoMove, static_cast<int>(QDesignerFormWindowCursorInterface::NoMove), 10},
    {sipName_Prev, static_cast<int>(QDesignerFormWindowCursorInterface::Prev), 10},
    {sipName_Right, static_cast<int>(QDesignerFormWindowCursorInterface::Right), 10},
    {sipName_Start, static_cast<int>(QDesignerFormWindowCursorInterface::Start), 10},
    {sipName_Up, static_cast<int>(QDesignerFormWindowCursorInterface::Up), 10},
};

PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface, "\1QDesignerFormWindowCursorInterface()\n"
    "QDesignerFormWindowCursorInterface(QDesignerFormWindowCursorInterface)");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QDesignerFormWindowCursorInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QDesignerFormWindowCursorInterface,
        {0}
    },
    {
        sipNameNr_QDesignerFormWindowCursorInterface,
        {0, 0, 1},
        14, methods_QDesignerFormWindowCursorInterface,
        11, enummembers_QDesignerFormWindowCursorInterface,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDesignerFormWindowCursorInterface,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDesignerFormWindowCursorInterface,
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
    dealloc_QDesignerFormWindowCursorInterface,
    0,
    0,
    0,
    release_QDesignerFormWindowCursorInterface,
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