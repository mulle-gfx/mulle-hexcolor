#ifndef cg_hex_color_h__
#define cg_hex_color_h__

#include <stdint.h>

//
// hopefully get nanovg header here for struct NVGcolor from MulleCG
//
#ifdef __has_include
# if __has_include( "include.h")
#  include "include.h"
# endif
#endif

#include <mulle-c11/mulle-c11.h>  // if include not there
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


#ifdef MULLE__HEXCOLOR_BUILD
# define MULLE__HEXCOLOR_EXTERN_GLOBAL    MULLE_C_GLOBAL
#else
# if defined( MULLE_THREAD_INCLUDE_DYNAMIC) || (defined( MULLE_INCLUDE_DYNAMIC) && ! defined( MULLE_THREAD_INCLUDE_STATIC))
#  define MULLE__HEXCOLOR_EXTERN_GLOBAL   MULLE_C_EXTERN_GLOBAL
# else
#  define MULLE__HEXCOLOR_EXTERN_GLOBAL   extern
# endif
#endif


typedef uintptr_t   CGHexColor;


static inline CGHexColor   CGHexColorMake( float r, float g, float b, float a)
{
   assert( r >= 0.0 && r <= 1.0);
   assert( g >= 0.0 && g <= 1.0);
   assert( b >= 0.0 && b <= 1.0);
   assert( a >= 0.0 && a <= 1.0);

   return( ((uint32_t) (0xFF * r) << 24) |
           ((uint32_t) (0xFF * g) << 16) |
           ((uint32_t) (0xFF * b) << 8) |
           ((uint32_t) (0xFF * a)));
}


static inline CGHexColor   CGHexColorMakeWithRGBA( float r, float g, float b, float a)
{
   assert( r >= 0.0 && r <= 1.0);
   assert( g >= 0.0 && g <= 1.0);
   assert( b >= 0.0 && b <= 1.0);
   assert( a >= 0.0 && a <= 1.0);

   return( ((uint32_t) (0xFF * r) << 24) |
           ((uint32_t) (0xFF * g) << 16) |
           ((uint32_t) (0xFF * b) << 8) |
           ((uint32_t) (0xFF * a)));
}


static inline CGHexColor   CGHexColorMakeWithRGBAComponents( float rgba[ 4])
{
   return( CGHexColorMakeWithRGBA( rgba[ 0], rgba[ 1], rgba[ 2], rgba[ 3]));
}


#endif
