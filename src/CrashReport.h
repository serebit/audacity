/**********************************************************************
 
 Audacity: A Digital Audio Editor
 
 CrashReport.h
 
 Paul Licameli
 split from AudacityApp.h
 
 **********************************************************************/

#ifndef __AUDACITY_CRASH_REPORT__
#define __AUDACITY_CRASH_REPORT__

#undef HAS_CRASH_REPORT

#include "Audacity.h"


#if defined(EXPERIMENTAL_CRASH_REPORT)

#include <wx/setup.h> // for wxUSE* macros
#if defined(wxUSE_DEBUGREPORT) && wxUSE_DEBUGREPORT
   #define HAS_CRASH_REPORT
   #include <wx/debugrpt.h>

   namespace CrashReport
   {
      void Generate(wxDebugReport::Context ctx);
   }
#endif

#endif

#endif
