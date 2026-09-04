//
//  CGHexColor.h
//  mulle-hexcolor
//
//  Copyright (c) 2024 Nat! - Mulle kybernetiK.
//  All rights reserved.
//
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  Redistributions of source code must retain the above copyright notice, this
//  list of conditions and the following disclaimer.
//
//  Redistributions in binary form must reproduce the above copyright notice,
//  this list of conditions and the following disclaimer in the documentation
//  and/or other materials provided with the distribution.
//
//  Neither the name of Mulle kybernetiK nor the names of its contributors
//  may be used to endorse or promote products derived from this software
//  without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
//  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
//
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
