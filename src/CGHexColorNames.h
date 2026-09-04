//
//  CGHexColorNames.h
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
#ifndef cg_hex_color_names_h__
#define cg_hex_color_names_h__

#include "CGHexColor.h"

//
struct CGHexColorNamePair
{
   char         *name;
   CGHexColor   hexColor;
};


// hardcoded size makes some things easier,
#define CGHexColorCommonNameTableSize  145

// these are just HTML colors, no "extensions". Which is better for import
// and export,,,
MULLE__HEXCOLOR_GLOBAL
const struct CGHexColorNamePair   _CGHexColorCommonNameTable[ CGHexColorCommonNameTableSize];


#define CGHexColorNotFound  0x00000000

// get rid of const
#define CGHexColorCommonNameTable  \
   ((struct CGHexColorNamePair *)   _CGHexColorCommonNameTable)


static inline CGHexColor
  CGHexColorNamePairSearchHexColorForName( struct CGHexColorNamePair *buf,
                                           unsigned int n,
                                           char *search)
{
   int                         first;
   int                         diff;
   int                         last;
   int                         middle;
   struct CGHexColorNamePair   *p;

   assert( search);

   first  = 0;
   last   = n - 1;
   middle = (first + last) / 2;

   while( first <= last)
   {
      p    = &buf[ middle];
      diff = strcmp( p->name, search);
      if( diff <= 0)
      {
         if( ! diff)
            return( p->hexColor);

         first = middle + 1;
      }
      else
         last = middle - 1;

      middle = (first + last) / 2;
   }

   return( CGHexColorNotFound);
}


static inline char *
   CGHexColorNamePairSearchNameForHexColor( struct CGHexColorNamePair *buf,
                                            unsigned int n,
                                            CGHexColor search)
{
   int                         first;
   int64_t                     diff64;
   int64_t                     search64;
   int                         last;
   int                         middle;
   struct CGHexColorNamePair   *p;

   assert( buf != CGHexColorCommonNameTable || "use CGHexColorNamePairInitColorSortedTable to create a table sorted by hexColor");

   first    = 0;
   last     = n - 1;
   middle   = (first + last) / 2;

   search64 = search;
   while( first <= last)
   {
      p      = &buf[ middle];
      diff64 = (int64_t) p->hexColor - search64;
      if( diff64 <= 0)
      {
         if( ! diff64)
            return( p->name);

         first = middle + 1;
      }
      else
         last = middle - 1;

      middle = (first + last) / 2;
   }

   return( NULL);
}


MULLE__HEXCOLOR_GLOBAL
unsigned int   CGHexColorNamePairInitColorSortedTable( struct CGHexColorNamePair  *table,
                                                       unsigned int count);


// will return 0x00000000 (not black 0x000000FF) for not found
MULLE__HEXCOLOR_GLOBAL
CGHexColor  CGHexColorMakeWithCommonName( char *name);


MULLE__HEXCOLOR_GLOBAL
CGHexColor  CGHexColorMakeWithRandomName( void);


static inline CGHexColor   CGHexColorMakeWithNameAtIndex( unsigned int index)
{
   CGHexColor   hexColor;

   index   %= CGHexColorCommonNameTableSize;
   hexColor = _CGHexColorCommonNameTable[ index].hexColor;
   return( hexColor);
}


static inline char *  CGHexColorNameAtIndex( unsigned int index)
{
   index %= CGHexColorCommonNameTableSize;
   return( _CGHexColorCommonNameTable[ index].name);
}


// returns NULL if none found
MULLE__HEXCOLOR_GLOBAL
char   *CGHexColorGetCommonName( CGHexColor hexColor);


#endif
