#pragma once

#if defined(_WIN32)
#  define LIB_BAR_ABI_EXPORT __declspec(dllexport)
#  define LIB_BAR_ABI_IMPORT __declspec(dllimport)
#elif __GNUC__ >= 4
#  define LIB_BAR_ABI_EXPORT __attribute__ ((visibility("default")))
#  define LIB_BAR_ABI_IMPORT __attribute__ ((visibility("default")))
#else
#  define LIB_BAR_ABI_EXPORT
#  define LIB_BAR_ABI_IMPORT
#endif

#ifdef LIB_BAR_EXPORTS
#  define LIB_BAR_API LIB_BAR_ABI_EXPORT
#else
#  define LIB_BAR_API LIB_BAR_ABI_IMPORT
#endif