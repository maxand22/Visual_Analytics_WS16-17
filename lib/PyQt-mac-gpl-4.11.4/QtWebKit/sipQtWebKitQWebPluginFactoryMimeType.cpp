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

#include "sipAPIQtWebKit.h"

#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 35 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 31 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtWebKit/sipQtWebKitQWebPluginFactoryMimeType.cpp"

#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 35 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtWebKit/sipQtWebKitQWebPluginFactoryMimeType.cpp"
#line 31 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 38 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtWebKit/sipQtWebKitQWebPluginFactoryMimeType.cpp"


extern "C" {static PyObject *slot_QWebPluginFactory_MimeType___ne__(PyObject *,PyObject *);}
static PyObject *slot_QWebPluginFactory_MimeType___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebPluginFactory_MimeType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWebPluginFactory::MimeType* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QWebPluginFactory_MimeType, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QWebPluginFactory::MimeType::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKit,ne_slot,sipType_QWebPluginFactory_MimeType,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QWebPluginFactory_MimeType___eq__(PyObject *,PyObject *);}
static PyObject *slot_QWebPluginFactory_MimeType___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebPluginFactory_MimeType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWebPluginFactory::MimeType* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QWebPluginFactory_MimeType, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QWebPluginFactory::MimeType::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKit,eq_slot,sipType_QWebPluginFactory_MimeType,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPluginFactory_MimeType(void *, int);}
static void release_QWebPluginFactory_MimeType(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebPluginFactory::MimeType *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPluginFactory_MimeType(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPluginFactory_MimeType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPluginFactory::MimeType *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPluginFactory::MimeType *>(sipSrc);
}


extern "C" {static void *array_QWebPluginFactory_MimeType(SIP_SSIZE_T);}
static void *array_QWebPluginFactory_MimeType(SIP_SSIZE_T sipNrElem)
{
    return new QWebPluginFactory::MimeType[sipNrElem];
}


extern "C" {static void *copy_QWebPluginFactory_MimeType(const void *, SIP_SSIZE_T);}
static void *copy_QWebPluginFactory_MimeType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPluginFactory::MimeType(reinterpret_cast<const QWebPluginFactory::MimeType *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPluginFactory_MimeType(sipSimpleWrapper *);}
static void dealloc_QWebPluginFactory_MimeType(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPluginFactory_MimeType(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebPluginFactory_MimeType(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPluginFactory_MimeType(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPluginFactory::MimeType *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::MimeType();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QWebPluginFactory::MimeType* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPluginFactory_MimeType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::MimeType(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWebPluginFactory_MimeType[] = {
    {(void *)slot_QWebPluginFactory_MimeType___ne__, ne_slot},
    {(void *)slot_QWebPluginFactory_MimeType___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


extern "C" {static PyObject *varget_QWebPluginFactory_MimeType_description(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPluginFactory_MimeType_description(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QString*sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -11);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->description;

    sipPy = sipConvertFromType(sipVal, sipType_QString, NULL);
    sipKeepReference(sipPySelf, -11, sipPy);

    return sipPy;
}


extern "C" {static int varset_QWebPluginFactory_MimeType_description(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_MimeType_description(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->description = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPluginFactory_MimeType_fileExtensions(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPluginFactory_MimeType_fileExtensions(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStringList*sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -12);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->fileExtensions;

    sipPy = sipConvertFromType(sipVal, sipType_QStringList, NULL);
    sipKeepReference(sipPySelf, -12, sipPy);

    return sipPy;
}


extern "C" {static int varset_QWebPluginFactory_MimeType_fileExtensions(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_MimeType_fileExtensions(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStringList*sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStringList *>(sipForceConvertToType(sipPy,sipType_QStringList,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->fileExtensions = *sipVal;

    sipReleaseType(sipVal, sipType_QStringList, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPluginFactory_MimeType_name(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPluginFactory_MimeType_name(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QString*sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -13);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->name;

    sipPy = sipConvertFromType(sipVal, sipType_QString, NULL);
    sipKeepReference(sipPySelf, -13, sipPy);

    return sipPy;
}


extern "C" {static int varset_QWebPluginFactory_MimeType_name(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_MimeType_name(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->name = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QWebPluginFactory_MimeType[] = {
    {InstanceVariable, sipName_description, (PyMethodDef *)varget_QWebPluginFactory_MimeType_description, (PyMethodDef *)varset_QWebPluginFactory_MimeType_description, NULL, NULL},
    {InstanceVariable, sipName_fileExtensions, (PyMethodDef *)varget_QWebPluginFactory_MimeType_fileExtensions, (PyMethodDef *)varset_QWebPluginFactory_MimeType_fileExtensions, NULL, NULL},
    {InstanceVariable, sipName_name, (PyMethodDef *)varget_QWebPluginFactory_MimeType_name, (PyMethodDef *)varset_QWebPluginFactory_MimeType_name, NULL, NULL},
};

PyDoc_STRVAR(doc_QWebPluginFactory_MimeType, "\1QWebPluginFactory.MimeType()\n"
    "QWebPluginFactory.MimeType(QWebPluginFactory.MimeType)");


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebPluginFactory_MimeType = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPluginFactory__MimeType,
        {0}
    },
    {
        sipNameNr_MimeType,
        {38, 255, 0},
        0, 0,
        0, 0,
        3, variables_QWebPluginFactory_MimeType,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPluginFactory_MimeType,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWebPluginFactory_MimeType,
    init_type_QWebPluginFactory_MimeType,
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
    dealloc_QWebPluginFactory_MimeType,
    assign_QWebPluginFactory_MimeType,
    array_QWebPluginFactory_MimeType,
    copy_QWebPluginFactory_MimeType,
    release_QWebPluginFactory_MimeType,
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