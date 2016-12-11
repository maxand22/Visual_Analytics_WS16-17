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

#include "sipAPIphonon.h"

#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/abstractaudiooutput.sip"
#include <abstractaudiooutput.h>
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/abstractvideooutput.sip"
#include <abstractvideooutput.h>
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/audiooutput.sip"
#include <audiooutput.h>
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/backendcapabilities.sip"
#include <backendcapabilities.h>
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/effect.sip"
#include <effect.h>
#line 34 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 40 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 41 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononEffectParameter.cpp"

#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 45 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononEffectParameter.cpp"
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/abstractaudiooutput.sip"
#include <abstractaudiooutput.h>
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/abstractvideooutput.sip"
#include <abstractvideooutput.h>
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/audiooutput.sip"
#include <audiooutput.h>
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/backendcapabilities.sip"
#include <backendcapabilities.h>
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/effect.sip"
#include <effect.h>
#line 34 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 40 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 60 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononEffectParameter.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 63 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononEffectParameter.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 66 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononEffectParameter.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 69 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononEffectParameter.cpp"


PyDoc_STRVAR(doc_Phonon_EffectParameter_name, "name(self) -> QString");

extern "C" {static PyObject *meth_Phonon_EffectParameter_name(PyObject *, PyObject *);}
static PyObject *meth_Phonon_EffectParameter_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::EffectParameter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_EffectParameter, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EffectParameter, sipName_name, doc_Phonon_EffectParameter_name);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_EffectParameter_description, "description(self) -> QString");

extern "C" {static PyObject *meth_Phonon_EffectParameter_description(PyObject *, PyObject *);}
static PyObject *meth_Phonon_EffectParameter_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::EffectParameter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_EffectParameter, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->description());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EffectParameter, sipName_description, doc_Phonon_EffectParameter_description);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_EffectParameter_type, "type(self) -> QVariant.Type");

extern "C" {static PyObject *meth_Phonon_EffectParameter_type(PyObject *, PyObject *);}
static PyObject *meth_Phonon_EffectParameter_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::EffectParameter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_EffectParameter, &sipCpp))
        {
            QVariant::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QVariant_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EffectParameter, sipName_type, doc_Phonon_EffectParameter_type);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_EffectParameter_isLogarithmicControl, "isLogarithmicControl(self) -> bool");

extern "C" {static PyObject *meth_Phonon_EffectParameter_isLogarithmicControl(PyObject *, PyObject *);}
static PyObject *meth_Phonon_EffectParameter_isLogarithmicControl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::EffectParameter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_EffectParameter, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isLogarithmicControl();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EffectParameter, sipName_isLogarithmicControl, doc_Phonon_EffectParameter_isLogarithmicControl);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_EffectParameter_minimumValue, "minimumValue(self) -> QVariant");

extern "C" {static PyObject *meth_Phonon_EffectParameter_minimumValue(PyObject *, PyObject *);}
static PyObject *meth_Phonon_EffectParameter_minimumValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::EffectParameter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_EffectParameter, &sipCpp))
        {
            QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->minimumValue());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EffectParameter, sipName_minimumValue, doc_Phonon_EffectParameter_minimumValue);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_EffectParameter_maximumValue, "maximumValue(self) -> QVariant");

extern "C" {static PyObject *meth_Phonon_EffectParameter_maximumValue(PyObject *, PyObject *);}
static PyObject *meth_Phonon_EffectParameter_maximumValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::EffectParameter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_EffectParameter, &sipCpp))
        {
            QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->maximumValue());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EffectParameter, sipName_maximumValue, doc_Phonon_EffectParameter_maximumValue);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_EffectParameter_defaultValue, "defaultValue(self) -> QVariant");

extern "C" {static PyObject *meth_Phonon_EffectParameter_defaultValue(PyObject *, PyObject *);}
static PyObject *meth_Phonon_EffectParameter_defaultValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::EffectParameter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_EffectParameter, &sipCpp))
        {
            QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->defaultValue());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EffectParameter, sipName_defaultValue, doc_Phonon_EffectParameter_defaultValue);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_EffectParameter_possibleValues, "possibleValues(self) -> object");

extern "C" {static PyObject *meth_Phonon_EffectParameter_possibleValues(PyObject *, PyObject *);}
static PyObject *meth_Phonon_EffectParameter_possibleValues(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::EffectParameter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_EffectParameter, &sipCpp))
        {
            QVariantList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariantList(sipCpp->possibleValues());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EffectParameter, sipName_possibleValues, doc_Phonon_EffectParameter_possibleValues);

    return NULL;
}


extern "C" {static long slot_Phonon_EffectParameter___hash__(PyObject *);}
static long slot_Phonon_EffectParameter___hash__(PyObject *sipSelf)
{
    Phonon::EffectParameter *sipCpp = reinterpret_cast<Phonon::EffectParameter *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_EffectParameter));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 65 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/effectparameter.sip"
            sipRes = qHash(*sipCpp);
#line 327 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononEffectParameter.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_Phonon_EffectParameter(void *, int);}
static void release_Phonon_EffectParameter(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Phonon::EffectParameter *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_Phonon_EffectParameter(sipSimpleWrapper *);}
static void dealloc_Phonon_EffectParameter(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Phonon_EffectParameter(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Phonon_EffectParameter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Phonon_EffectParameter(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Phonon::EffectParameter *sipCpp = 0;

    {
        int a0;
        const QString* a1;
        int a1State = 0;
        Phonon::EffectParameter::Hints* a2;
        int a2State = 0;
        const QVariant* a3;
        int a3State = 0;
        const QVariant& a4def = QVariant();
        const QVariant* a4 = &a4def;
        int a4State = 0;
        const QVariant& a5def = QVariant();
        const QVariant* a5 = &a5def;
        int a5State = 0;
        const QVariantList& a6def = QVariantList();
        const QVariantList* a6 = &a6def;
        int a6State = 0;
        const QString& a7def = QString();
        const QString* a7 = &a7def;
        int a7State = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_min,
            sipName_max,
            sipName_values,
            sipName_description,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iJ1J1J1|J1J1J1J1", &a0, sipType_QString,&a1, &a1State, sipType_Phonon_EffectParameter_Hints, &a2, &a2State, sipType_QVariant,&a3, &a3State, sipType_QVariant,&a4, &a4State, sipType_QVariant,&a5, &a5State, sipType_QList_0100QVariant,&a6, &a6State, sipType_QString,&a7, &a7State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Phonon::EffectParameter(a0,*a1,*a2,*a3,*a4,*a5,*a6,*a7);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(a2,sipType_Phonon_EffectParameter_Hints,a2State);
            sipReleaseType(const_cast<QVariant *>(a3),sipType_QVariant,a3State);
            sipReleaseType(const_cast<QVariant *>(a4),sipType_QVariant,a4State);
            sipReleaseType(const_cast<QVariant *>(a5),sipType_QVariant,a5State);
            sipReleaseType(const_cast<QVariantList *>(a6),sipType_QList_0100QVariant,a6State);
            sipReleaseType(const_cast<QString *>(a7),sipType_QString,a7State);

            return sipCpp;
        }
    }

    {
        const Phonon::EffectParameter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_Phonon_EffectParameter, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Phonon::EffectParameter(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Phonon_EffectParameter[] = {
    {(void *)slot_Phonon_EffectParameter___hash__, hash_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Phonon_EffectParameter[] = {
    {SIP_MLNAME_CAST(sipName_defaultValue), meth_Phonon_EffectParameter_defaultValue, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_EffectParameter_defaultValue)},
    {SIP_MLNAME_CAST(sipName_description), meth_Phonon_EffectParameter_description, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_EffectParameter_description)},
    {SIP_MLNAME_CAST(sipName_isLogarithmicControl), meth_Phonon_EffectParameter_isLogarithmicControl, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_EffectParameter_isLogarithmicControl)},
    {SIP_MLNAME_CAST(sipName_maximumValue), meth_Phonon_EffectParameter_maximumValue, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_EffectParameter_maximumValue)},
    {SIP_MLNAME_CAST(sipName_minimumValue), meth_Phonon_EffectParameter_minimumValue, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_EffectParameter_minimumValue)},
    {SIP_MLNAME_CAST(sipName_name), meth_Phonon_EffectParameter_name, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_EffectParameter_name)},
    {SIP_MLNAME_CAST(sipName_possibleValues), meth_Phonon_EffectParameter_possibleValues, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_EffectParameter_possibleValues)},
    {SIP_MLNAME_CAST(sipName_type), meth_Phonon_EffectParameter_type, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_EffectParameter_type)}
};

static sipEnumMemberDef enummembers_Phonon_EffectParameter[] = {
    {sipName_IntegerHint, static_cast<int>(Phonon::EffectParameter::IntegerHint), 16},
    {sipName_LogarithmicHint, static_cast<int>(Phonon::EffectParameter::LogarithmicHint), 16},
    {sipName_ToggledHint, static_cast<int>(Phonon::EffectParameter::ToggledHint), 16},
};

PyDoc_STRVAR(doc_Phonon_EffectParameter, "\1Phonon.EffectParameter(int, QString, Phonon.EffectParameter.Hints, QVariant, min: QVariant = QVariant(), max: QVariant = QVariant(), values: object = QVariantList(), description: QString = QString())\n"
    "Phonon.EffectParameter(Phonon.EffectParameter)");


pyqt4ClassTypeDef sipTypeDef_phonon_Phonon_EffectParameter = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Phonon__EffectParameter,
        {0}
    },
    {
        sipNameNr_EffectParameter,
        {0, 255, 0},
        8, methods_Phonon_EffectParameter,
        3, enummembers_Phonon_EffectParameter,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Phonon_EffectParameter,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Phonon_EffectParameter,
    init_type_Phonon_EffectParameter,
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
    dealloc_Phonon_EffectParameter,
    0,
    0,
    0,
    release_Phonon_EffectParameter,
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
