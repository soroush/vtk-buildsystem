#pragma once

#if defined(_WIN32)
#  define LIB_FOO_ABI_EXPORT __declspec(dllexport)
#  define LIB_FOO_ABI_IMPORT __declspec(dllimport)
#elif __GNUC__ >= 4
#  define LIB_FOO_ABI_EXPORT __attribute__ ((visibility("default")))
#  define LIB_FOO_ABI_IMPORT __attribute__ ((visibility("default")))
#else
#  define LIB_FOO_ABI_EXPORT
#  define LIB_FOO_ABI_IMPORT
#endif

#ifdef LIB_FOO_EXPORTS
#  define LIB_FOO_API LIB_FOO_ABI_EXPORT
#else
#  define LIB_FOO_API LIB_FOO_ABI_IMPORT
#endif