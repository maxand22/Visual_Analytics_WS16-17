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

#include "sipAPIQtDeclarative.h"

#line 25 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtDeclarative/qpydeclarativepropertyvaluesource.sip"
#include <qpydeclarativepropertyvaluesource.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 48 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 51 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 54 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 60 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 63 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 66 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 69 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtDeclarative/qdeclarativeproperty.sip"
#include <qdeclarativeproperty.h>
#line 72 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"


class sipQPyDeclarativePropertyValueSource : public QPyDeclarativePropertyValueSource
{
public:
    sipQPyDeclarativePropertyValueSource(QObject*);
    virtual ~sipQPyDeclarativePropertyValueSource();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void setTarget(const QDeclarativeProperty&);
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
    sipQPyDeclarativePropertyValueSource(const sipQPyDeclarativePropertyValueSource &);
    sipQPyDeclarativePropertyValueSource &operator = (const sipQPyDeclarativePropertyValueSource &);

    char sipPyMethods[8];
};

sipQPyDeclarativePropertyValueSource::sipQPyDeclarativePropertyValueSource(QObject*a0): QPyDeclarativePropertyValueSource(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDeclarativePropertyValueSource::~sipQPyDeclarativePropertyValueSource()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDeclarativePropertyValueSource::metaObject() const
{
    return sip_QtDeclarative_qt_metaobject(sipPySelf,sipType_QPyDeclarativePropertyValueSource);
}

int sipQPyDeclarativePropertyValueSource::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QPyDeclarativePropertyValueSource::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDeclarative_qt_metacall(sipPySelf,sipType_QPyDeclarativePropertyValueSource,_c,_id,_a);

    return _id;
}

void *sipQPyDeclarativePropertyValueSource::qt_metacast(const char *_clname)
{
    return (sip_QtDeclarative_qt_metacast(sipPySelf, sipType_QPyDeclarativePropertyValueSource, _clname)) ? this : QPyDeclarativePropertyValueSource::qt_metacast(_clname);
}

void sipQPyDeclarativePropertyValueSource::setTarget(const QDeclarativeProperty& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QPyDeclarativePropertyValueSource,sipName_setTarget);

    if (!sipMeth)
        return;

    extern void sipVH_QtDeclarative_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QDeclarativeProperty&);

    sipVH_QtDeclarative_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDeclarativePropertyValueSource::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QPyDeclarativePropertyValueSource::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDeclarativePropertyValueSource::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QPyDeclarativePropertyValueSource::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDeclarativePropertyValueSource::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QPyDeclarativePropertyValueSource::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDeclarativePropertyValueSource::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QPyDeclarativePropertyValueSource::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDeclarativePropertyValueSource::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QPyDeclarativePropertyValueSource::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDeclarativePropertyValueSource::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QPyDeclarativePropertyValueSource::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDeclarativePropertyValueSource::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QPyDeclarativePropertyValueSource::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its multiple inheritance hierarchy. */
extern "C" {static void *cast_QPyDeclarativePropertyValueSource(void *, const sipTypeDef *);}
static void *cast_QPyDeclarativePropertyValueSource(void *sipCppV, const sipTypeDef *targetType)
{
    QPyDeclarativePropertyValueSource *sipCpp = reinterpret_cast<QPyDeclarativePropertyValueSource *>(sipCppV);

    if (targetType == sipType_QDeclarativePropertyValueSource)
        return static_cast<QDeclarativePropertyValueSource *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDeclarativePropertyValueSource(void *, int);}
static void release_QPyDeclarativePropertyValueSource(void *sipCppV,int)
{
    QPyDeclarativePropertyValueSource *sipCpp = reinterpret_cast<QPyDeclarativePropertyValueSource *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPyDeclarativePropertyValueSource(sipSimpleWrapper *);}
static void dealloc_QPyDeclarativePropertyValueSource(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPyDeclarativePropertyValueSource *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPyDeclarativePropertyValueSource(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPyDeclarativePropertyValueSource(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDeclarativePropertyValueSource(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDeclarativePropertyValueSource *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPyDeclarativePropertyValueSource(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDeclarativePropertyValueSource[] = {{141, 0, 0}, {20, 255, 1}};

PyDoc_STRVAR(doc_QPyDeclarativePropertyValueSource, "\1QPyDeclarativePropertyValueSource(parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtDeclarative_QPyDeclarativePropertyValueSource = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QPyDeclarativePropertyValueSource,
        {0}
    },
    {
        sipNameNr_QPyDeclarativePropertyValueSource,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDeclarativePropertyValueSource,
    -1,
    -1,
    supers_QPyDeclarativePropertyValueSource,
    0,
    init_type_QPyDeclarativePropertyValueSource,
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
    dealloc_QPyDeclarativePropertyValueSource,
    0,
    0,
    0,
    release_QPyDeclarativePropertyValueSource,
    cast_QPyDeclarativePropertyValueSource,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QPyDeclarativePropertyValueSource::staticMetaObject,
    0,
    0
};