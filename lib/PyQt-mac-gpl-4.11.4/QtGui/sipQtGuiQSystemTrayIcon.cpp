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

#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qsystemtrayicon.sip"
#include <qsystemtrayicon.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 30 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 45 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 26 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qmenu.sip"
#include <qmenu.h>
#line 48 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 69 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"


class sipQSystemTrayIcon : public QSystemTrayIcon
{
public:
    sipQSystemTrayIcon(QObject*);
    sipQSystemTrayIcon(const QIcon&,QObject*);
    virtual ~sipQSystemTrayIcon();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const char*);
    void connectNotify(const char*);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSystemTrayIcon(const sipQSystemTrayIcon &);
    sipQSystemTrayIcon &operator = (const sipQSystemTrayIcon &);

    char sipPyMethods[7];
};

sipQSystemTrayIcon::sipQSystemTrayIcon(QObject*a0): QSystemTrayIcon(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSystemTrayIcon::sipQSystemTrayIcon(const QIcon& a0,QObject*a1): QSystemTrayIcon(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSystemTrayIcon::~sipQSystemTrayIcon()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSystemTrayIcon::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QSystemTrayIcon);
}

int sipQSystemTrayIcon::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QSystemTrayIcon::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QSystemTrayIcon,_c,_id,_a);

    return _id;
}

void *sipQSystemTrayIcon::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QSystemTrayIcon, _clname)) ? this : QSystemTrayIcon::qt_metacast(_clname);
}

void sipQSystemTrayIcon::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QSystemTrayIcon::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSystemTrayIcon::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QSystemTrayIcon::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSystemTrayIcon::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QSystemTrayIcon::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSystemTrayIcon::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QSystemTrayIcon::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSystemTrayIcon::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QSystemTrayIcon::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQSystemTrayIcon::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QSystemTrayIcon::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQSystemTrayIcon::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QSystemTrayIcon::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QSystemTrayIcon_setContextMenu, "setContextMenu(self, QMenu)");

extern "C" {static PyObject *meth_QSystemTrayIcon_setContextMenu(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_setContextMenu(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMenu* a0;
        PyObject *a0Keep;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, &a0Keep, sipType_QMenu, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setContextMenu(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -60, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_setContextMenu, doc_QSystemTrayIcon_setContextMenu);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_contextMenu, "contextMenu(self) -> QMenu");

extern "C" {static PyObject *meth_QSystemTrayIcon_contextMenu(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_contextMenu(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QMenu*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->contextMenu();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QMenu,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_contextMenu, doc_QSystemTrayIcon_contextMenu);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_geometry, "geometry(self) -> QRect");

extern "C" {static PyObject *meth_QSystemTrayIcon_geometry(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_geometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QRect*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->geometry());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_geometry, doc_QSystemTrayIcon_geometry);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_icon, "icon(self) -> QIcon");

extern "C" {static PyObject *meth_QSystemTrayIcon_icon(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_icon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QIcon*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QIcon(sipCpp->icon());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QIcon,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_icon, doc_QSystemTrayIcon_icon);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_setIcon, "setIcon(self, QIcon)");

extern "C" {static PyObject *meth_QSystemTrayIcon_setIcon(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_setIcon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QIcon* a0;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QIcon, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setIcon(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_setIcon, doc_QSystemTrayIcon_setIcon);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_toolTip, "toolTip(self) -> QString");

extern "C" {static PyObject *meth_QSystemTrayIcon_toolTip(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_toolTip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toolTip());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_toolTip, doc_QSystemTrayIcon_toolTip);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_setToolTip, "setToolTip(self, QString)");

extern "C" {static PyObject *meth_QSystemTrayIcon_setToolTip(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_setToolTip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setToolTip(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_setToolTip, doc_QSystemTrayIcon_setToolTip);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_isSystemTrayAvailable, "isSystemTrayAvailable() -> bool");

extern "C" {static PyObject *meth_QSystemTrayIcon_isSystemTrayAvailable(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_isSystemTrayAvailable(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QSystemTrayIcon::isSystemTrayAvailable();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_isSystemTrayAvailable, doc_QSystemTrayIcon_isSystemTrayAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_supportsMessages, "supportsMessages() -> bool");

extern "C" {static PyObject *meth_QSystemTrayIcon_supportsMessages(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_supportsMessages(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QSystemTrayIcon::supportsMessages();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_supportsMessages, doc_QSystemTrayIcon_supportsMessages);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_showMessage, "showMessage(self, QString, QString, icon: QSystemTrayIcon.MessageIcon = QSystemTrayIcon.Information, msecs: int = 10000)");

extern "C" {static PyObject *meth_QSystemTrayIcon_showMessage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_showMessage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QSystemTrayIcon::MessageIcon a2 = QSystemTrayIcon::Information;
        int a3 = 10000;
        QSystemTrayIcon *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_icon,
            sipName_msecs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1J1|Ei", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QSystemTrayIcon_MessageIcon, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->showMessage(*a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_showMessage, doc_QSystemTrayIcon_showMessage);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_isVisible, "isVisible(self) -> bool");

extern "C" {static PyObject *meth_QSystemTrayIcon_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isVisible();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_isVisible, doc_QSystemTrayIcon_isVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_hide, "hide(self)");

extern "C" {static PyObject *meth_QSystemTrayIcon_hide(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_hide(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->hide();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_hide, doc_QSystemTrayIcon_hide);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_setVisible, "setVisible(self, bool)");

extern "C" {static PyObject *meth_QSystemTrayIcon_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setVisible(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_setVisible, doc_QSystemTrayIcon_setVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_show, "show(self)");

extern "C" {static PyObject *meth_QSystemTrayIcon_show(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_show(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->show();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_show, doc_QSystemTrayIcon_show);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_event, "event(self, QEvent) -> bool");

extern "C" {static PyObject *meth_QSystemTrayIcon_event(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ8", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QEvent, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QSystemTrayIcon::event(a0) : sipCpp->event(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_event, doc_QSystemTrayIcon_event);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSystemTrayIcon(void *, int);}
static void release_QSystemTrayIcon(void *sipCppV,int)
{
    QSystemTrayIcon *sipCpp = reinterpret_cast<QSystemTrayIcon *>(sipCppV);

#line 72 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qsystemtrayicon.sip"
        qtgui_untrack(sipCpp);
#line 744 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSystemTrayIcon(sipSimpleWrapper *);}
static void dealloc_QSystemTrayIcon(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSystemTrayIcon *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSystemTrayIcon(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSystemTrayIcon(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSystemTrayIcon(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSystemTrayIcon *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
#line 52 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qsystemtrayicon.sip"
        // We want to track the instance.
        
        Py_BEGIN_ALLOW_THREADS
        sipCpp = new sipQSystemTrayIcon(a0);
        qtgui_track(sipCpp);
        Py_END_ALLOW_THREADS
#line 791 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QIcon* a0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|JH", sipType_QIcon, &a0, sipType_QObject, &a1, sipOwner))
        {
#line 62 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qsystemtrayicon.sip"
        // We want to track the instance.
        
        Py_BEGIN_ALLOW_THREADS
        sipCpp = new sipQSystemTrayIcon(*a0, a1);
        qtgui_track(sipCpp);
        Py_END_ALLOW_THREADS
#line 817 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQSystemTrayIcon.cpp"

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSystemTrayIcon[] = {{141, 0, 1}};


static PyMethodDef methods_QSystemTrayIcon[] = {
    {SIP_MLNAME_CAST(sipName_contextMenu), meth_QSystemTrayIcon_contextMenu, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_contextMenu)},
    {SIP_MLNAME_CAST(sipName_event), meth_QSystemTrayIcon_event, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_event)},
    {SIP_MLNAME_CAST(sipName_geometry), meth_QSystemTrayIcon_geometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_geometry)},
    {SIP_MLNAME_CAST(sipName_hide), meth_QSystemTrayIcon_hide, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_hide)},
    {SIP_MLNAME_CAST(sipName_icon), meth_QSystemTrayIcon_icon, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_icon)},
    {SIP_MLNAME_CAST(sipName_isSystemTrayAvailable), meth_QSystemTrayIcon_isSystemTrayAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_isSystemTrayAvailable)},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QSystemTrayIcon_isVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_isVisible)},
    {SIP_MLNAME_CAST(sipName_setContextMenu), meth_QSystemTrayIcon_setContextMenu, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_setContextMenu)},
    {SIP_MLNAME_CAST(sipName_setIcon), meth_QSystemTrayIcon_setIcon, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_setIcon)},
    {SIP_MLNAME_CAST(sipName_setToolTip), meth_QSystemTrayIcon_setToolTip, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_setToolTip)},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_QSystemTrayIcon_setVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_setVisible)},
    {SIP_MLNAME_CAST(sipName_show), meth_QSystemTrayIcon_show, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_show)},
    {SIP_MLNAME_CAST(sipName_showMessage), (PyCFunction)meth_QSystemTrayIcon_showMessage, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_showMessage)},
    {SIP_MLNAME_CAST(sipName_supportsMessages), meth_QSystemTrayIcon_supportsMessages, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_supportsMessages)},
    {SIP_MLNAME_CAST(sipName_toolTip), meth_QSystemTrayIcon_toolTip, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_toolTip)}
};

static sipEnumMemberDef enummembers_QSystemTrayIcon[] = {
    {sipName_Context, static_cast<int>(QSystemTrayIcon::Context), 628},
    {sipName_Critical, static_cast<int>(QSystemTrayIcon::Critical), 629},
    {sipName_DoubleClick, static_cast<int>(QSystemTrayIcon::DoubleClick), 628},
    {sipName_Information, static_cast<int>(QSystemTrayIcon::Information), 629},
    {sipName_MiddleClick, static_cast<int>(QSystemTrayIcon::MiddleClick), 628},
    {sipName_NoIcon, static_cast<int>(QSystemTrayIcon::NoIcon), 629},
    {sipName_Trigger, static_cast<int>(QSystemTrayIcon::Trigger), 628},
    {sipName_Unknown, static_cast<int>(QSystemTrayIcon::Unknown), 628},
    {sipName_Warning, static_cast<int>(QSystemTrayIcon::Warning), 629},
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_QSystemTrayIcon[] = {
    {"messageClicked()", "\1messageClicked(self)", 0, 0},
    {"activated(QSystemTrayIcon::ActivationReason)", "\1activated(self, QSystemTrayIcon.ActivationReason)", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QSystemTrayIcon, "\1QSystemTrayIcon(parent: QObject = None)\n"
    "QSystemTrayIcon(QIcon, parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QSystemTrayIcon = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QSystemTrayIcon,
        {0}
    },
    {
        sipNameNr_QSystemTrayIcon,
        {0, 0, 1},
        15, methods_QSystemTrayIcon,
        9, enummembers_QSystemTrayIcon,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSystemTrayIcon,
    -1,
    -1,
    supers_QSystemTrayIcon,
    0,
    init_type_QSystemTrayIcon,
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
    dealloc_QSystemTrayIcon,
    0,
    0,
    0,
    release_QSystemTrayIcon,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QSystemTrayIcon::staticMetaObject,
    0,
    signals_QSystemTrayIcon,
};
