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

#line 25 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtDesigner/qpydesignerpropertysheetextension.sip"
#include <qpydesignerpropertysheetextension.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 48 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 51 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 54 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 60 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 63 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 66 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 69 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"


class sipQPyDesignerPropertySheetExtension : public QPyDesignerPropertySheetExtension
{
public:
    sipQPyDesignerPropertySheetExtension(QObject*);
    virtual ~sipQPyDesignerPropertySheetExtension();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void setChanged(int,bool);
    bool isChanged(int) const;
    void setProperty(int,const QVariant&);
    QVariant property(int) const;
    void setAttribute(int,bool);
    bool isAttribute(int) const;
    void setVisible(int,bool);
    bool isVisible(int) const;
    bool reset(int);
    bool hasReset(int) const;
    void setPropertyGroup(int,const QString&);
    QString propertyGroup(int) const;
    QString propertyName(int) const;
    int indexOf(const QString&) const;
    int count() const;
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
    sipQPyDesignerPropertySheetExtension(const sipQPyDesignerPropertySheetExtension &);
    sipQPyDesignerPropertySheetExtension &operator = (const sipQPyDesignerPropertySheetExtension &);

    char sipPyMethods[22];
};

sipQPyDesignerPropertySheetExtension::sipQPyDesignerPropertySheetExtension(QObject*a0): QPyDesignerPropertySheetExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDesignerPropertySheetExtension::~sipQPyDesignerPropertySheetExtension()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDesignerPropertySheetExtension::metaObject() const
{
    return sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QPyDesignerPropertySheetExtension);
}

int sipQPyDesignerPropertySheetExtension::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QPyDesignerPropertySheetExtension::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QPyDesignerPropertySheetExtension,_c,_id,_a);

    return _id;
}

void *sipQPyDesignerPropertySheetExtension::qt_metacast(const char *_clname)
{
    return (sip_QtDesigner_qt_metacast(sipPySelf, sipType_QPyDesignerPropertySheetExtension, _clname)) ? this : QPyDesignerPropertySheetExtension::qt_metacast(_clname);
}

void sipQPyDesignerPropertySheetExtension::setChanged(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_setChanged);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,bool);

    sipVH_QtDesigner_3(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerPropertySheetExtension::isChanged(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_isChanged);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::setProperty(int a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_setProperty);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtGui_68)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,const QVariant&);

    ((sipVH_QtGui_68)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[68]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QVariant sipQPyDesignerPropertySheetExtension::property(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_property);

    if (!sipMeth)
        return QVariant();

    typedef QVariant (*sipVH_QtGui_69)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtGui_69)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[69]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::setAttribute(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_setAttribute);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,bool);

    sipVH_QtDesigner_3(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerPropertySheetExtension::isAttribute(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_isAttribute);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::setVisible(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_setVisible);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,bool);

    sipVH_QtDesigner_3(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerPropertySheetExtension::isVisible(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_isVisible);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerPropertySheetExtension::reset(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_reset);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerPropertySheetExtension::hasReset(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_hasReset);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::setPropertyGroup(int a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_setPropertyGroup);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,const QString&);

    sipVH_QtDesigner_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QString sipQPyDesignerPropertySheetExtension::propertyGroup(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_propertyGroup);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QString sipQPyDesignerPropertySheetExtension::propertyName(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_propertyName);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQPyDesignerPropertySheetExtension::indexOf(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_indexOf);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtGui_112)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    return ((sipVH_QtGui_112)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[112]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQPyDesignerPropertySheetExtension::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_count);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQPyDesignerPropertySheetExtension::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QPyDesignerPropertySheetExtension::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QPyDesignerPropertySheetExtension::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[17],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QPyDesignerPropertySheetExtension::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[18],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QPyDesignerPropertySheetExtension::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[19],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QPyDesignerPropertySheetExtension::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerPropertySheetExtension::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[20],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QPyDesignerPropertySheetExtension::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerPropertySheetExtension::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[21],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QPyDesignerPropertySheetExtension::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its multiple inheritance hierarchy. */
extern "C" {static void *cast_QPyDesignerPropertySheetExtension(void *, const sipTypeDef *);}
static void *cast_QPyDesignerPropertySheetExtension(void *sipCppV, const sipTypeDef *targetType)
{
    QPyDesignerPropertySheetExtension *sipCpp = reinterpret_cast<QPyDesignerPropertySheetExtension *>(sipCppV);

    if (targetType == sipType_QDesignerPropertySheetExtension)
        return static_cast<QDesignerPropertySheetExtension *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDesignerPropertySheetExtension(void *, int);}
static void release_QPyDesignerPropertySheetExtension(void *sipCppV,int)
{
    QPyDesignerPropertySheetExtension *sipCpp = reinterpret_cast<QPyDesignerPropertySheetExtension *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPyDesignerPropertySheetExtension(sipSimpleWrapper *);}
static void dealloc_QPyDesignerPropertySheetExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPyDesignerPropertySheetExtension *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPyDesignerPropertySheetExtension(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPyDesignerPropertySheetExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDesignerPropertySheetExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDesignerPropertySheetExtension *sipCpp = 0;

    {
        QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPyDesignerPropertySheetExtension(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDesignerPropertySheetExtension[] = {{141, 0, 0}, {18, 255, 1}};

PyDoc_STRVAR(doc_QPyDesignerPropertySheetExtension, "\1QPyDesignerPropertySheetExtension(QObject)");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QPyDesignerPropertySheetExtension = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QPyDesignerPropertySheetExtension,
        {0}
    },
    {
        sipNameNr_QPyDesignerPropertySheetExtension,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDesignerPropertySheetExtension,
    -1,
    -1,
    supers_QPyDesignerPropertySheetExtension,
    0,
    init_type_QPyDesignerPropertySheetExtension,
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
    dealloc_QPyDesignerPropertySheetExtension,
    0,
    0,
    0,
    release_QPyDesignerPropertySheetExtension,
    cast_QPyDesignerPropertySheetExtension,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QPyDesignerPropertySheetExtension::staticMetaObject,
    0,
    0
};
