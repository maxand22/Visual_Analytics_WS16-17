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

#line 34 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qvector4d.sip"
#include <qvector4d.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQVector4D.cpp"

#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQVector4D.cpp"
#line 114 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQVector4D.cpp"
#line 34 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qvector2d.sip"
#include <qvector2d.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQVector4D.cpp"
#line 34 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qvector3d.sip"
#include <qvector3d.h>
#line 42 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQVector4D.cpp"
#line 34 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qmatrix4x4.sip"
#include <qmatrix4x4.h>
#line 45 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQVector4D.cpp"


PyDoc_STRVAR(doc_QVector4D_length, "length(self) -> float");

extern "C" {static PyObject *meth_QVector4D_length(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->length();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_length, doc_QVector4D_length);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_lengthSquared, "lengthSquared(self) -> float");

extern "C" {static PyObject *meth_QVector4D_lengthSquared(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_lengthSquared(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lengthSquared();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_lengthSquared, doc_QVector4D_lengthSquared);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_normalized, "normalized(self) -> QVector4D");

extern "C" {static PyObject *meth_QVector4D_normalized(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_normalized(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            QVector4D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector4D(sipCpp->normalized());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector4D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_normalized, doc_QVector4D_normalized);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_normalize, "normalize(self)");

extern "C" {static PyObject *meth_QVector4D_normalize(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_normalize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->normalize();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_normalize, doc_QVector4D_normalize);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_dotProduct, "dotProduct(QVector4D, QVector4D) -> float");

extern "C" {static PyObject *meth_QVector4D_dotProduct(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_dotProduct(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D* a0;
        const QVector4D* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J9", sipType_QVector4D, &a0, sipType_QVector4D, &a1))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QVector4D::dotProduct(*a0,*a1);
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_dotProduct, doc_QVector4D_dotProduct);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_toVector2D, "toVector2D(self) -> QVector2D");

extern "C" {static PyObject *meth_QVector4D_toVector2D(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_toVector2D(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            QVector2D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector2D(sipCpp->toVector2D());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector2D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_toVector2D, doc_QVector4D_toVector2D);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_toVector2DAffine, "toVector2DAffine(self) -> QVector2D");

extern "C" {static PyObject *meth_QVector4D_toVector2DAffine(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_toVector2DAffine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            QVector2D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector2D(sipCpp->toVector2DAffine());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector2D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_toVector2DAffine, doc_QVector4D_toVector2DAffine);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_toVector3D, "toVector3D(self) -> QVector3D");

extern "C" {static PyObject *meth_QVector4D_toVector3D(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_toVector3D(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            QVector3D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector3D(sipCpp->toVector3D());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_toVector3D, doc_QVector4D_toVector3D);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_toVector3DAffine, "toVector3DAffine(self) -> QVector3D");

extern "C" {static PyObject *meth_QVector4D_toVector3DAffine(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_toVector3DAffine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            QVector3D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector3D(sipCpp->toVector3DAffine());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_toVector3DAffine, doc_QVector4D_toVector3DAffine);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QVector4D_isNull(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_isNull, doc_QVector4D_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_x, "x(self) -> float");

extern "C" {static PyObject *meth_QVector4D_x(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->x();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_x, doc_QVector4D_x);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_y, "y(self) -> float");

extern "C" {static PyObject *meth_QVector4D_y(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->y();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_y, doc_QVector4D_y);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_z, "z(self) -> float");

extern "C" {static PyObject *meth_QVector4D_z(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_z(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->z();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_z, doc_QVector4D_z);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_w, "w(self) -> float");

extern "C" {static PyObject *meth_QVector4D_w(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_w(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->w();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_w, doc_QVector4D_w);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_setX, "setX(self, float)");

extern "C" {static PyObject *meth_QVector4D_setX(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_setX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QVector4D, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setX(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_setX, doc_QVector4D_setX);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_setY, "setY(self, float)");

extern "C" {static PyObject *meth_QVector4D_setY(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_setY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QVector4D, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setY(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_setY, doc_QVector4D_setY);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_setZ, "setZ(self, float)");

extern "C" {static PyObject *meth_QVector4D_setZ(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_setZ(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QVector4D, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setZ(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_setZ, doc_QVector4D_setZ);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_setW, "setW(self, float)");

extern "C" {static PyObject *meth_QVector4D_setW(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_setW(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QVector4D, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setW(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_setW, doc_QVector4D_setW);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_toPoint, "toPoint(self) -> QPoint");

extern "C" {static PyObject *meth_QVector4D_toPoint(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_toPoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->toPoint());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_toPoint, doc_QVector4D_toPoint);

    return NULL;
}


PyDoc_STRVAR(doc_QVector4D_toPointF, "toPointF(self) -> QPointF");

extern "C" {static PyObject *meth_QVector4D_toPointF(PyObject *, PyObject *);}
static PyObject *meth_QVector4D_toPointF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector4D, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->toPointF());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector4D, sipName_toPointF, doc_QVector4D_toPointF);

    return NULL;
}


extern "C" {static PyObject *slot_QVector4D___eq__(PyObject *,PyObject *);}
static PyObject *slot_QVector4D___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QVector4D *sipCpp = reinterpret_cast<QVector4D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector4D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVector4D* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector4D, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator==((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QVector4D,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QVector4D___mul__(PyObject *,PyObject *);}
static PyObject *slot_QVector4D___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D* a0;
        const QMatrix4x4* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QVector4D, &a0, sipType_QMatrix4x4, &a1))
        {
            QVector4D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector4D((*a0 * *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector4D,NULL);
        }
    }

    {
        qreal a0;
        const QVector4D* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "dJ9", &a0, sipType_QVector4D, &a1))
        {
            QVector4D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector4D((a0 * *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector4D,NULL);
        }
    }

    {
        const QVector4D* a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QVector4D, &a0, &a1))
        {
            QVector4D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector4D((*a0 * a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector4D,NULL);
        }
    }

    {
        const QVector4D* a0;
        const QVector4D* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QVector4D, &a0, sipType_QVector4D, &a1))
        {
            QVector4D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector4D((*a0 * *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector4D,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVector4D___div__(PyObject *,PyObject *);}
static PyObject *slot_QVector4D___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D* a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QVector4D, &a0, &a1))
        {
            QVector4D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector4D((*a0 / a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector4D,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVector4D___add__(PyObject *,PyObject *);}
static PyObject *slot_QVector4D___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D* a0;
        const QVector4D* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QVector4D, &a0, sipType_QVector4D, &a1))
        {
            QVector4D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector4D((*a0 + *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector4D,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVector4D___sub__(PyObject *,PyObject *);}
static PyObject *slot_QVector4D___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector4D* a0;
        const QVector4D* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QVector4D, &a0, sipType_QVector4D, &a1))
        {
            QVector4D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector4D((*a0 - *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector4D,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVector4D___neg__(PyObject *);}
static PyObject *slot_QVector4D___neg__(PyObject *sipSelf)
{
    QVector4D *sipCpp = reinterpret_cast<QVector4D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector4D));

    if (!sipCpp)
        return 0;


    {
        {
            QVector4D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector4D(-(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector4D,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QVector4D___ne__(PyObject *,PyObject *);}
static PyObject *slot_QVector4D___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QVector4D *sipCpp = reinterpret_cast<QVector4D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector4D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVector4D* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector4D, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator!=((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QVector4D,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QVector4D___idiv__(PyObject *,PyObject *);}
static PyObject *slot_QVector4D___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVector4D)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVector4D *sipCpp = reinterpret_cast<QVector4D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector4D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QVector4D::operator/=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QVector4D___imul__(PyObject *,PyObject *);}
static PyObject *slot_QVector4D___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVector4D)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVector4D *sipCpp = reinterpret_cast<QVector4D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector4D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QVector4D::operator*=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const QVector4D* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector4D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QVector4D::operator*=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QVector4D___isub__(PyObject *,PyObject *);}
static PyObject *slot_QVector4D___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVector4D)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVector4D *sipCpp = reinterpret_cast<QVector4D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector4D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVector4D* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector4D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QVector4D::operator-=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QVector4D___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QVector4D___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVector4D)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVector4D *sipCpp = reinterpret_cast<QVector4D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector4D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVector4D* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector4D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QVector4D::operator+=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QVector4D___repr__(PyObject *);}
static PyObject *slot_QVector4D___repr__(PyObject *sipSelf)
{
    QVector4D *sipCpp = reinterpret_cast<QVector4D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector4D));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 68 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qvector4d.sip"
        PyObject *x = PyFloat_FromDouble(sipCpp->x());
        PyObject *y = PyFloat_FromDouble(sipCpp->y());
        PyObject *z = PyFloat_FromDouble(sipCpp->z());
        PyObject *w = PyFloat_FromDouble(sipCpp->w());
        
        if (x && y && z && w)
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt4.QtGui.QVector4D(%R, %R, %R, %R)", x,
                    y, z, w);
        #else
            sipRes = PyString_FromString("PyQt4.QtGui.QVector4D(");
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(x));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(y));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(z));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(w));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
        }
        
        Py_XDECREF(x);
        Py_XDECREF(y);
        Py_XDECREF(z);
        Py_XDECREF(w);
#line 1132 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQVector4D.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QVector4D(void *, int);}
static void release_QVector4D(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QVector4D *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static PyObject *pickle_QVector4D(void *);}
static PyObject *pickle_QVector4D(void *sipCppV)
{
    QVector4D *sipCpp = reinterpret_cast<QVector4D *>(sipCppV);
    PyObject *sipRes;

#line 38 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qvector4d.sip"
    sipRes = Py_BuildValue((char *)"dddd", (double)sipCpp->x(),
            (double)sipCpp->y(), (double)sipCpp->z(), (double)sipCpp->w());
#line 1163 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQVector4D.cpp"

    return sipRes;
}


extern "C" {static void assign_QVector4D(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector4D(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector4D *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector4D *>(sipSrc);
}


extern "C" {static void *array_QVector4D(SIP_SSIZE_T);}
static void *array_QVector4D(SIP_SSIZE_T sipNrElem)
{
    return new QVector4D[sipNrElem];
}


extern "C" {static void *copy_QVector4D(const void *, SIP_SSIZE_T);}
static void *copy_QVector4D(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector4D(reinterpret_cast<const QVector4D *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QVector4D(sipSimpleWrapper *);}
static void dealloc_QVector4D(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QVector4D(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QVector4D(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QVector4D(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QVector4D *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector4D();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "dddd", &a0, &a1, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector4D(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QPoint* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPoint, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector4D(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QPointF* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QPointF, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector4D(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            return sipCpp;
        }
    }

    {
        const QVector2D* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QVector2D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector4D(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QVector2D* a0;
        qreal a1;
        qreal a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9dd", sipType_QVector2D, &a0, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector4D(*a0,a1,a2);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QVector3D* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QVector3D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector4D(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QVector3D* a0;
        qreal a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9d", sipType_QVector3D, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector4D(*a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QVector4D* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QVector4D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector4D(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QVector4D[] = {
    {(void *)slot_QVector4D___eq__, eq_slot},
    {(void *)slot_QVector4D___mul__, mul_slot},
    {(void *)slot_QVector4D___div__, div_slot},
    {(void *)slot_QVector4D___add__, add_slot},
    {(void *)slot_QVector4D___sub__, sub_slot},
    {(void *)slot_QVector4D___neg__, neg_slot},
    {(void *)slot_QVector4D___ne__, ne_slot},
    {(void *)slot_QVector4D___idiv__, idiv_slot},
    {(void *)slot_QVector4D___imul__, imul_slot},
    {(void *)slot_QVector4D___isub__, isub_slot},
    {(void *)slot_QVector4D___iadd__, iadd_slot},
    {(void *)slot_QVector4D___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QVector4D[] = {
    {SIP_MLNAME_CAST(sipName_dotProduct), meth_QVector4D_dotProduct, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_dotProduct)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QVector4D_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_isNull)},
    {SIP_MLNAME_CAST(sipName_length), meth_QVector4D_length, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_length)},
    {SIP_MLNAME_CAST(sipName_lengthSquared), meth_QVector4D_lengthSquared, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_lengthSquared)},
    {SIP_MLNAME_CAST(sipName_normalize), meth_QVector4D_normalize, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_normalize)},
    {SIP_MLNAME_CAST(sipName_normalized), meth_QVector4D_normalized, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_normalized)},
    {SIP_MLNAME_CAST(sipName_setW), meth_QVector4D_setW, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_setW)},
    {SIP_MLNAME_CAST(sipName_setX), meth_QVector4D_setX, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_setX)},
    {SIP_MLNAME_CAST(sipName_setY), meth_QVector4D_setY, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_setY)},
    {SIP_MLNAME_CAST(sipName_setZ), meth_QVector4D_setZ, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_setZ)},
    {SIP_MLNAME_CAST(sipName_toPoint), meth_QVector4D_toPoint, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_toPoint)},
    {SIP_MLNAME_CAST(sipName_toPointF), meth_QVector4D_toPointF, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_toPointF)},
    {SIP_MLNAME_CAST(sipName_toVector2D), meth_QVector4D_toVector2D, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_toVector2D)},
    {SIP_MLNAME_CAST(sipName_toVector2DAffine), meth_QVector4D_toVector2DAffine, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_toVector2DAffine)},
    {SIP_MLNAME_CAST(sipName_toVector3D), meth_QVector4D_toVector3D, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_toVector3D)},
    {SIP_MLNAME_CAST(sipName_toVector3DAffine), meth_QVector4D_toVector3DAffine, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_toVector3DAffine)},
    {SIP_MLNAME_CAST(sipName_w), meth_QVector4D_w, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_w)},
    {SIP_MLNAME_CAST(sipName_x), meth_QVector4D_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QVector4D_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_y)},
    {SIP_MLNAME_CAST(sipName_z), meth_QVector4D_z, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector4D_z)}
};

PyDoc_STRVAR(doc_QVector4D, "\1QVector4D()\n"
    "QVector4D(float, float, float, float)\n"
    "QVector4D(QPoint)\n"
    "QVector4D(QPointF)\n"
    "QVector4D(QVector2D)\n"
    "QVector4D(QVector2D, float, float)\n"
    "QVector4D(QVector3D)\n"
    "QVector4D(QVector3D, float)\n"
    "QVector4D(QVector4D)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QVector4D = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QVector4D,
        {0}
    },
    {
        sipNameNr_QVector4D,
        {0, 0, 1},
        20, methods_QVector4D,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QVector4D,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QVector4D,
    init_type_QVector4D,
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
    dealloc_QVector4D,
    assign_QVector4D,
    array_QVector4D,
    copy_QVector4D,
    release_QVector4D,
    0,
    0,
    0,
    0,
    pickle_QVector4D,
    0,
    0
},
    0,
    0,
    0
};
