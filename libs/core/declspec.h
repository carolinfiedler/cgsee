
#pragma once

// NOTE: don't export stl stuff (e.g. containers): 
// http://www.unknownroad.com/rtfm/VisualStudio/warningC4251.html
// don't do it: http://support.microsoft.com/kb/q168958/

#ifdef _MSC_VER
    #define __API_EXPORT_DECLARATION __declspec(dllexport)
    #define __API_IMPORT_DECLARATION __declspec(dllimport)
#elif __GNUC__
    #define __API_EXPORT_DECLARATION
    #define __API_IMPORT_DECLARATION
#else
    #error Missing API import/export declaration
#endif

#ifdef CGSEE_EXPORTS
    #define CGSEE_API __API_EXPORT_DECLARATION
#else
    #define CGSEE_API __API_IMPORT_DECLARATION
#endif
