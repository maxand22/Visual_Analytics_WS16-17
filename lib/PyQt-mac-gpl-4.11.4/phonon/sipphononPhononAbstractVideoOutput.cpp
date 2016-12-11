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
#line 34 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/abstractvideooutput.sip"
#include <abstractvideooutput.h>
#line 33 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononAbstractVideoOutput.cpp"

#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 37 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononAbstractVideoOutput.cpp"
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
#line 28 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/path.sip"
#include <path.h>
#line 34 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/sip/phonon/path.sip"
#include <path.h>
#line 66 "/Users/behdad/Documents/Visual_Analytics_WS16-17/lib/PyQt-mac-gpl-4.11.4/phonon/sipphononPhononAbstractVideoOutput.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_Phonon_AbstractVideoOutput(void *, int);}
static void release_Phonon_AbstractVideoOutput(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Phonon::AbstractVideoOutput *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_Phonon_AbstractVideoOutput(sipSimpleWrapper *);}
static void dealloc_Phonon_AbstractVideoOutput(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Phonon_AbstractVideoOutput(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_Phonon_AbstractVideoOutput[] = {{23, 255, 1}};


pyqt4ClassTypeDef sipTypeDef_phonon_Phonon_AbstractVideoOutput = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Phonon__AbstractVideoOutput,
        {0}
    },
    {
        sipNameNr_AbstractVideoOutput,
        {0, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_Phonon_AbstractVideoOutput,
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
    dealloc_Phonon_AbstractVideoOutput,
    0,
    0,
    0,
    release_Phonon_AbstractVideoOutput,
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
