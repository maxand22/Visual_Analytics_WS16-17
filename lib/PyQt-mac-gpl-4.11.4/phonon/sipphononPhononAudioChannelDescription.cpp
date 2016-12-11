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
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/effectwidget.sip"
#include <effectwidget.h>
#line 34 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/mediacontroller.sip"
#include <mediacontroller.h>
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/medianode.sip"
#include <medianode.h>
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/mediaobject.sip"
#include <mediaobject.h>
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/mediasource.sip"
#include <mediasource.h>
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/objectdescription.sip"
#include <objectdescription.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/objectdescription.sip"
#include <objectdescription.h>
#line 53 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononAudioChannelDescription.cpp"

#line 28 "sip/QtCore/qhash.sip"
#include <qhash.h>
#line 57 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononAudioChannelDescription.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononAudioChannelDescription.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 63 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononAudioChannelDescription.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 66 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononAudioChannelDescription.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 69 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononAudioChannelDescription.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 72 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononAudioChannelDescription.cpp"


PyDoc_STRVAR(doc_Phonon_AudioChannelDescription_description, "description(self) -> QString");

extern "C" {static PyObject *meth_Phonon_AudioChannelDescription_description(PyObject *, PyObject *);}
static PyObject *meth_Phonon_AudioChannelDescription_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::AudioChannelDescription *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_AudioChannelDescription, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->description());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AudioChannelDescription, sipName_description, doc_Phonon_AudioChannelDescription_description);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_AudioChannelDescription_index, "index(self) -> int");

extern "C" {static PyObject *meth_Phonon_AudioChannelDescription_index(PyObject *, PyObject *);}
static PyObject *meth_Phonon_AudioChannelDescription_index(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::AudioChannelDescription *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_AudioChannelDescription, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->index();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AudioChannelDescription, sipName_index, doc_Phonon_AudioChannelDescription_index);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_AudioChannelDescription_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_Phonon_AudioChannelDescription_isValid(PyObject *, PyObject *);}
static PyObject *meth_Phonon_AudioChannelDescription_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::AudioChannelDescription *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_AudioChannelDescription, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AudioChannelDescription, sipName_isValid, doc_Phonon_AudioChannelDescription_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_AudioChannelDescription_name, "name(self) -> QString");

extern "C" {static PyObject *meth_Phonon_AudioChannelDescription_name(PyObject *, PyObject *);}
static PyObject *meth_Phonon_AudioChannelDescription_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::AudioChannelDescription *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_AudioChannelDescription, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AudioChannelDescription, sipName_name, doc_Phonon_AudioChannelDescription_name);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_AudioChannelDescription_property, "property(self, str) -> QVariant");

extern "C" {static PyObject *meth_Phonon_AudioChannelDescription_property(PyObject *, PyObject *);}
static PyObject *meth_Phonon_AudioChannelDescription_property(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        const Phonon::AudioChannelDescription *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_Phonon_AudioChannelDescription, &sipCpp, &a0))
        {
            QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->property(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AudioChannelDescription, sipName_property, doc_Phonon_AudioChannelDescription_property);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_AudioChannelDescription_propertyNames, "propertyNames(self) -> object");

extern "C" {static PyObject *meth_Phonon_AudioChannelDescription_propertyNames(PyObject *, PyObject *);}
static PyObject *meth_Phonon_AudioChannelDescription_propertyNames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Phonon::AudioChannelDescription *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Phonon_AudioChannelDescription, &sipCpp))
        {
            QList<QByteArray>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(sipCpp->propertyNames());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AudioChannelDescription, sipName_propertyNames, doc_Phonon_AudioChannelDescription_propertyNames);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_AudioChannelDescription_fromIndex, "fromIndex(int) -> Phonon.AudioChannelDescription");

extern "C" {static PyObject *meth_Phonon_AudioChannelDescription_fromIndex(PyObject *, PyObject *);}
static PyObject *meth_Phonon_AudioChannelDescription_fromIndex(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            Phonon::AudioChannelDescription*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Phonon::AudioChannelDescription(Phonon::AudioChannelDescription::fromIndex(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Phonon_AudioChannelDescription,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AudioChannelDescription, sipName_fromIndex, doc_Phonon_AudioChannelDescription_fromIndex);

    return NULL;
}


extern "C" {static PyObject *slot_Phonon_AudioChannelDescription___eq__(PyObject *,PyObject *);}
static PyObject *slot_Phonon_AudioChannelDescription___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Phonon::AudioChannelDescription *sipCpp = reinterpret_cast<Phonon::AudioChannelDescription *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_AudioChannelDescription));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Phonon::AudioChannelDescription* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_Phonon_AudioChannelDescription, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Phonon::AudioChannelDescription::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_phonon,eq_slot,sipType_Phonon_AudioChannelDescription,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Phonon_AudioChannelDescription___ne__(PyObject *,PyObject *);}
static PyObject *slot_Phonon_AudioChannelDescription___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Phonon::AudioChannelDescription *sipCpp = reinterpret_cast<Phonon::AudioChannelDescription *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_AudioChannelDescription));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Phonon::AudioChannelDescription* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_Phonon_AudioChannelDescription, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Phonon::AudioChannelDescription::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_phonon,ne_slot,sipType_Phonon_AudioChannelDescription,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_Phonon_AudioChannelDescription(void *, int);}
static void release_Phonon_AudioChannelDescription(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Phonon::AudioChannelDescription *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Phonon_AudioChannelDescription(void *, SIP_SSIZE_T, const void *);}
static void assign_Phonon_AudioChannelDescription(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Phonon::AudioChannelDescription *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Phonon::AudioChannelDescription *>(sipSrc);
}


extern "C" {static void *array_Phonon_AudioChannelDescription(SIP_SSIZE_T);}
static void *array_Phonon_AudioChannelDescription(SIP_SSIZE_T sipNrElem)
{
    return new Phonon::AudioChannelDescription[sipNrElem];
}


extern "C" {static void *copy_Phonon_AudioChannelDescription(const void *, SIP_SSIZE_T);}
static void *copy_Phonon_AudioChannelDescription(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Phonon::AudioChannelDescription(reinterpret_cast<const Phonon::AudioChannelDescription *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Phonon_AudioChannelDescription(sipSimpleWrapper *);}
static void dealloc_Phonon_AudioChannelDescription(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Phonon_AudioChannelDescription(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Phonon_AudioChannelDescription(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Phonon_AudioChannelDescription(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Phonon::AudioChannelDescription *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Phonon::AudioChannelDescription();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;
        const QHash<QByteArray,QVariant>* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "iJ1", &a0, sipType_QHash_0100QByteArray_0100QVariant,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Phonon::AudioChannelDescription(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QHash<QByteArray,QVariant> *>(a1),sipType_QHash_0100QByteArray_0100QVariant,a1State);

            return sipCpp;
        }
    }

    {
        const Phonon::AudioChannelDescription* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_Phonon_AudioChannelDescription, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Phonon::AudioChannelDescription(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Phonon_AudioChannelDescription[] = {
    {(void *)slot_Phonon_AudioChannelDescription___eq__, eq_slot},
    {(void *)slot_Phonon_AudioChannelDescription___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Phonon_AudioChannelDescription[] = {
    {SIP_MLNAME_CAST(sipName_description), meth_Phonon_AudioChannelDescription_description, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_AudioChannelDescription_description)},
    {SIP_MLNAME_CAST(sipName_fromIndex), meth_Phonon_AudioChannelDescription_fromIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_AudioChannelDescription_fromIndex)},
    {SIP_MLNAME_CAST(sipName_index), meth_Phonon_AudioChannelDescription_index, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_AudioChannelDescription_index)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_Phonon_AudioChannelDescription_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_AudioChannelDescription_isValid)},
    {SIP_MLNAME_CAST(sipName_name), meth_Phonon_AudioChannelDescription_name, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_AudioChannelDescription_name)},
    {SIP_MLNAME_CAST(sipName_property), meth_Phonon_AudioChannelDescription_property, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_AudioChannelDescription_property)},
    {SIP_MLNAME_CAST(sipName_propertyNames), meth_Phonon_AudioChannelDescription_propertyNames, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_AudioChannelDescription_propertyNames)}
};

PyDoc_STRVAR(doc_Phonon_AudioChannelDescription, "\1Phonon.AudioChannelDescription()\n"
    "Phonon.AudioChannelDescription(int, object)\n"
    "Phonon.AudioChannelDescription(Phonon.AudioChannelDescription)");


pyqt4ClassTypeDef sipTypeDef_phonon_Phonon_AudioChannelDescription = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Phonon__AudioChannelDescription,
        {0}
    },
    {
        sipNameNr_AudioChannelDescription,
        {0, 255, 0},
        7, methods_Phonon_AudioChannelDescription,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Phonon_AudioChannelDescription,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Phonon_AudioChannelDescription,
    init_type_Phonon_AudioChannelDescription,
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
    dealloc_Phonon_AudioChannelDescription,
    assign_Phonon_AudioChannelDescription,
    array_Phonon_AudioChannelDescription,
    copy_Phonon_AudioChannelDescription,
    release_Phonon_AudioChannelDescription,
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