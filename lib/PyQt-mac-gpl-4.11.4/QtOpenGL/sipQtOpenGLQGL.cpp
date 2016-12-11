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

#include "sipAPIQtOpenGL.h"

#line 30 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 29 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtOpenGL/sipQtOpenGLQGL.cpp"

#line 56 "sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/QtOpenGL/sipQtOpenGLQGL.cpp"


PyDoc_STRVAR(doc_QGL_setPreferredPaintEngine, "setPreferredPaintEngine(QPaintEngine.Type)");

extern "C" {static PyObject *meth_QGL_setPreferredPaintEngine(PyObject *, PyObject *);}
static PyObject *meth_QGL_setPreferredPaintEngine(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPaintEngine::Type a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QPaintEngine_Type, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QGL::setPreferredPaintEngine(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_setPreferredPaintEngine, doc_QGL_setPreferredPaintEngine);

    return NULL;
}


static PyMethodDef methods_QGL[] = {
    {SIP_MLNAME_CAST(sipName_setPreferredPaintEngine), meth_QGL_setPreferredPaintEngine, METH_VARARGS, SIP_MLDOC_CAST(doc_QGL_setPreferredPaintEngine)}
};

static sipEnumMemberDef enummembers_QGL[] = {
    {sipName_AccumBuffer, static_cast<int>(QGL::AccumBuffer), 1},
    {sipName_AlphaChannel, static_cast<int>(QGL::AlphaChannel), 1},
    {sipName_ColorIndex, static_cast<int>(QGL::ColorIndex), 1},
    {sipName_DeprecatedFunctions, static_cast<int>(QGL::DeprecatedFunctions), 1},
    {sipName_DepthBuffer, static_cast<int>(QGL::DepthBuffer), 1},
    {sipName_DirectRendering, static_cast<int>(QGL::DirectRendering), 1},
    {sipName_DoubleBuffer, static_cast<int>(QGL::DoubleBuffer), 1},
    {sipName_HasOverlay, static_cast<int>(QGL::HasOverlay), 1},
    {sipName_IndirectRendering, static_cast<int>(QGL::IndirectRendering), 1},
    {sipName_NoAccumBuffer, static_cast<int>(QGL::NoAccumBuffer), 1},
    {sipName_NoAlphaChannel, static_cast<int>(QGL::NoAlphaChannel), 1},
    {sipName_NoDeprecatedFunctions, static_cast<int>(QGL::NoDeprecatedFunctions), 1},
    {sipName_NoDepthBuffer, static_cast<int>(QGL::NoDepthBuffer), 1},
    {sipName_NoOverlay, static_cast<int>(QGL::NoOverlay), 1},
    {sipName_NoSampleBuffers, static_cast<int>(QGL::NoSampleBuffers), 1},
    {sipName_NoStencilBuffer, static_cast<int>(QGL::NoStencilBuffer), 1},
    {sipName_NoStereoBuffers, static_cast<int>(QGL::NoStereoBuffers), 1},
    {sipName_Rgba, static_cast<int>(QGL::Rgba), 1},
    {sipName_SampleBuffers, static_cast<int>(QGL::SampleBuffers), 1},
    {sipName_SingleBuffer, static_cast<int>(QGL::SingleBuffer), 1},
    {sipName_StencilBuffer, static_cast<int>(QGL::StencilBuffer), 1},
    {sipName_StereoBuffers, static_cast<int>(QGL::StereoBuffers), 1},
};


pyqt4ClassTypeDef sipTypeDef_QtOpenGL_QGL = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_NAMESPACE,
        sipNameNr_QGL,
        {0}
    },
    {
        sipNameNr_QGL,
        {0, 0, 1},
        1, methods_QGL,
        22, enummembers_QGL,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
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
    0,
    0,
    0,
    0,
    0,
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
