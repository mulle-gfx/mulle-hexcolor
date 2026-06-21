#ifndef cg_hex_color_h__
#define cg_hex_color_h__


#include "include.h"

#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


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


static inline void   CGHexColorGetRGBAComponents( CGHexColor c, float rgba[ 4])
{
   rgba[ 3] = (c & 0xFF) / 255.0;
   c >>= 8;
   rgba[ 2] = (c & 0xFF) / 255.0;
   c >>= 8;
   rgba[ 1] = (c & 0xFF) / 255.0;
   c >>= 8;
   rgba[ 0] = (c & 0xFF) / 255.0;
}


#endif
