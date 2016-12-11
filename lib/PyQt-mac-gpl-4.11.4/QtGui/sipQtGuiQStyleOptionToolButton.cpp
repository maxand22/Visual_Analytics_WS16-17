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

#line 1511 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolButton.cpp"

#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolButton.cpp"
#line 1511 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 36 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolButton.cpp"
#line 30 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 39 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolButton.cpp"
#line 30 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 42 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolButton.cpp"
#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 45 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolButton.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 48 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolButton.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolButton.cpp"
#line 32 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 54 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolButton.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionToolButton(void *, int);}
static void release_QStyleOptionToolButton(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionToolButton *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionToolButton(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionToolButton(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionToolButton *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionToolButton *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionToolButton(SIP_SSIZE_T);}
static void *array_QStyleOptionToolButton(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionToolButton[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionToolButton(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionToolButton(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionToolButton(reinterpret_cast<const QStyleOptionToolButton *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionToolButton(sipSimpleWrapper *);}
static void dealloc_QStyleOptionToolButton(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionToolButton(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionToolButton(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionToolButton(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionToolButton *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolButton();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionToolButton* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionToolButton, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolButton(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionToolButton[] = {{512, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionToolButton[] = {
    {sipName_Arrow, static_cast<int>(QStyleOptionToolButton::Arrow), 607},
    {sipName_HasMenu, static_cast<int>(QStyleOptionToolButton::HasMenu), 607},
    {sipName_Menu, static_cast<int>(QStyleOptionToolButton::Menu), 607},
    {sipName_MenuButtonPopup, static_cast<int>(QStyleOptionToolButton::MenuButtonPopup), 607},
    {sipName_None, static_cast<int>(QStyleOptionToolButton::None), 607},
    {sipName_PopupDelay, static_cast<int>(QStyleOptionToolButton::PopupDelay), 607},
    {sipName_Type, static_cast<int>(QStyleOptionToolButton::Type), 605},
    {sipName_Version, static_cast<int>(QStyleOptionToolButton::Version), 606},
};


extern "C" {static PyObject *varget_QStyleOptionToolButton_arrowType(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_arrowType(void *sipSelf, PyObject *, PyObject *)
{
    Qt::ArrowType sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = sipCpp->arrowType;

    return sipConvertFromEnum(sipVal, sipType_Qt_ArrowType);
}


extern "C" {static int varset_QStyleOptionToolButton_arrowType(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_arrowType(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::ArrowType sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = (Qt::ArrowType)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->arrowType = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_features(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyleOptionToolButton::ToolButtonFeatures*sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -106);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->features;

    sipPy = sipConvertFromType(sipVal, sipType_QStyleOptionToolButton_ToolButtonFeatures, NULL);
    sipKeepReference(sipPySelf, -106, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolButton_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionToolButton::ToolButtonFeatures*sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionToolButton_ToolButtonFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionToolButton_ToolButtonFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_font(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_font(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QFont*sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -107);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->font;

    sipPy = sipConvertFromType(sipVal, sipType_QFont, NULL);
    sipKeepReference(sipPySelf, -107, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolButton_font(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_font(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QFont*sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QFont *>(sipForceConvertToType(sipPy,sipType_QFont,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->font = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_icon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_icon(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QIcon*sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -108);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->icon;

    sipPy = sipConvertFromType(sipVal, sipType_QIcon, NULL);
    sipKeepReference(sipPySelf, -108, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolButton_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon*sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_iconSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_iconSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -109);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->iconSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPySelf, -109, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolButton_iconSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_iconSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->iconSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_pos(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_pos(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QPoint*sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -110);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->pos;

    sipPy = sipConvertFromType(sipVal, sipType_QPoint, NULL);
    sipKeepReference(sipPySelf, -110, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolButton_pos(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_pos(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QPoint*sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QPoint *>(sipForceConvertToType(sipPy,sipType_QPoint,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->pos = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_text(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QString*sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -111);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->text;

    sipPy = sipConvertFromType(sipVal, sipType_QString, NULL);
    sipKeepReference(sipPySelf, -111, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolButton_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_toolButtonStyle(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_toolButtonStyle(void *sipSelf, PyObject *, PyObject *)
{
    Qt::ToolButtonStyle sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = sipCpp->toolButtonStyle;

    return sipConvertFromEnum(sipVal, sipType_Qt_ToolButtonStyle);
}


extern "C" {static int varset_QStyleOptionToolButton_toolButtonStyle(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_toolButtonStyle(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::ToolButtonStyle sipVal;
    QStyleOptionToolButton *sipCpp = reinterpret_cast<QStyleOptionToolButton *>(sipSelf);

    sipVal = (Qt::ToolButtonStyle)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->toolButtonStyle = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionToolButton[] = {
    {InstanceVariable, sipName_arrowType, (PyMethodDef *)varget_QStyleOptionToolButton_arrowType, (PyMethodDef *)varset_QStyleOptionToolButton_arrowType, NULL, NULL},
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionToolButton_features, (PyMethodDef *)varset_QStyleOptionToolButton_features, NULL, NULL},
    {InstanceVariable, sipName_font, (PyMethodDef *)varget_QStyleOptionToolButton_font, (PyMethodDef *)varset_QStyleOptionToolButton_font, NULL, NULL},
    {InstanceVariable, sipName_icon, (PyMethodDef *)varget_QStyleOptionToolButton_icon, (PyMethodDef *)varset_QStyleOptionToolButton_icon, NULL, NULL},
    {InstanceVariable, sipName_iconSize, (PyMethodDef *)varget_QStyleOptionToolButton_iconSize, (PyMethodDef *)varset_QStyleOptionToolButton_iconSize, NULL, NULL},
    {InstanceVariable, sipName_pos, (PyMethodDef *)varget_QStyleOptionToolButton_pos, (PyMethodDef *)varset_QStyleOptionToolButton_pos, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionToolButton_text, (PyMethodDef *)varset_QStyleOptionToolButton_text, NULL, NULL},
    {InstanceVariable, sipName_toolButtonStyle, (PyMethodDef *)varget_QStyleOptionToolButton_toolButtonStyle, (PyMethodDef *)varset_QStyleOptionToolButton_toolButtonStyle, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionToolButton, "\1QStyleOptionToolButton()\n"
    "QStyleOptionToolButton(QStyleOptionToolButton)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionToolButton = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionToolButton,
        {0}
    },
    {
        sipNameNr_QStyleOptionToolButton,
        {0, 0, 1},
        0, 0,
        8, enummembers_QStyleOptionToolButton,
        8, variables_QStyleOptionToolButton,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionToolButton,
    -1,
    -1,
    supers_QStyleOptionToolButton,
    0,
    init_type_QStyleOptionToolButton,
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
    dealloc_QStyleOptionToolButton,
    assign_QStyleOptionToolButton,
    array_QStyleOptionToolButton,
    copy_QStyleOptionToolButton,
    release_QStyleOptionToolButton,
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
