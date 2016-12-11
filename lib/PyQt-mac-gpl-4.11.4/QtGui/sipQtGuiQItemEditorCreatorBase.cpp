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

#line 26 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qitemeditorfactory.sip"
#include <qitemeditorfactory.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQItemEditorCreatorBase.cpp"

#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQItemEditorCreatorBase.cpp"
#line 32 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQItemEditorCreatorBase.cpp"


class sipQItemEditorCreatorBase : public QItemEditorCreatorBase
{
public:
    sipQItemEditorCreatorBase();
    sipQItemEditorCreatorBase(const QItemEditorCreatorBase&);
    virtual ~sipQItemEditorCreatorBase();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QByteArray valuePropertyName() const;
    QWidget* createWidget(QWidget*) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQItemEditorCreatorBase(const sipQItemEditorCreatorBase &);
    sipQItemEditorCreatorBase &operator = (const sipQItemEditorCreatorBase &);

    char sipPyMethods[2];
};

sipQItemEditorCreatorBase::sipQItemEditorCreatorBase(): QItemEditorCreatorBase(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQItemEditorCreatorBase::sipQItemEditorCreatorBase(const QItemEditorCreatorBase& a0): QItemEditorCreatorBase(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQItemEditorCreatorBase::~sipQItemEditorCreatorBase()
{
    sipCommonDtor(sipPySelf);
}

QByteArray sipQItemEditorCreatorBase::valuePropertyName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QItemEditorCreatorBase,sipName_valuePropertyName);

    if (!sipMeth)
        return QByteArray();

    typedef QByteArray (*sipVH_QtCore_14)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_14)(sipModuleAPI_QtGui_QtCore->em_virthandlers[14]))(sipGILState, 0, sipPySelf, sipMeth);
}

QWidget* sipQItemEditorCreatorBase::createWidget(QWidget*a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QItemEditorCreatorBase,sipName_createWidget);

    if (!sipMeth)
        return 0;

    extern QWidget* sipVH_QtGui_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QWidget*);

    return sipVH_QtGui_8(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QItemEditorCreatorBase_createWidget, "createWidget(self, QWidget) -> QWidget");

extern "C" {static PyObject *meth_QItemEditorCreatorBase_createWidget(PyObject *, PyObject *);}
static PyObject *meth_QItemEditorCreatorBase_createWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QWidget* a0;
        sipWrapper *sipOwner = 0;
        const QItemEditorCreatorBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJH", &sipSelf, sipType_QItemEditorCreatorBase, &sipCpp, sipType_QWidget, &a0, &sipOwner))
        {
            QWidget*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QItemEditorCreatorBase, sipName_createWidget);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->createWidget(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWidget,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemEditorCreatorBase, sipName_createWidget, doc_QItemEditorCreatorBase_createWidget);

    return NULL;
}


PyDoc_STRVAR(doc_QItemEditorCreatorBase_valuePropertyName, "valuePropertyName(self) -> QByteArray");

extern "C" {static PyObject *meth_QItemEditorCreatorBase_valuePropertyName(PyObject *, PyObject *);}
static PyObject *meth_QItemEditorCreatorBase_valuePropertyName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QItemEditorCreatorBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemEditorCreatorBase, &sipCpp))
        {
            QByteArray*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QItemEditorCreatorBase, sipName_valuePropertyName);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->valuePropertyName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemEditorCreatorBase, sipName_valuePropertyName, doc_QItemEditorCreatorBase_valuePropertyName);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QItemEditorCreatorBase(void *, int);}
static void release_QItemEditorCreatorBase(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQItemEditorCreatorBase *>(sipCppV);
    else
        delete reinterpret_cast<QItemEditorCreatorBase *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QItemEditorCreatorBase(sipSimpleWrapper *);}
static void dealloc_QItemEditorCreatorBase(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQItemEditorCreatorBase *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QItemEditorCreatorBase(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QItemEditorCreatorBase(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QItemEditorCreatorBase(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQItemEditorCreatorBase *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQItemEditorCreatorBase();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QItemEditorCreatorBase* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QItemEditorCreatorBase, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQItemEditorCreatorBase(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QItemEditorCreatorBase[] = {
    {SIP_MLNAME_CAST(sipName_createWidget), meth_QItemEditorCreatorBase_createWidget, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemEditorCreatorBase_createWidget)},
    {SIP_MLNAME_CAST(sipName_valuePropertyName), meth_QItemEditorCreatorBase_valuePropertyName, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemEditorCreatorBase_valuePropertyName)}
};

PyDoc_STRVAR(doc_QItemEditorCreatorBase, "\1QItemEditorCreatorBase()\n"
    "QItemEditorCreatorBase(QItemEditorCreatorBase)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QItemEditorCreatorBase = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QItemEditorCreatorBase,
        {0}
    },
    {
        sipNameNr_QItemEditorCreatorBase,
        {0, 0, 1},
        2, methods_QItemEditorCreatorBase,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QItemEditorCreatorBase,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QItemEditorCreatorBase,
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
    dealloc_QItemEditorCreatorBase,
    0,
    0,
    0,
    release_QItemEditorCreatorBase,
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
