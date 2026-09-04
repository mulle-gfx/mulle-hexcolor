//
//  CGHexColorNames.c
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
#define _GNU_SOURCE

#include <mulle-core/mulle-core.h>

#include "CGHexColor.h"
#include "CGHexColorConstants.h"
#include "CGHexColorNames.h"

#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <assert.h>


//
// don't extend this table with "alice blue" or "alice-blue"
// the search ignores spaces and hyphens
// don't put in non-standard names, like alizarin crimson, this should
// remain compatible with graphviz, html, css, etc
//
// all colors will have alpha set to 0xFF
// unknown is all zero
//
MULLE__HEXCOLOR_GLOBAL_VAR
const struct CGHexColorNamePair
   _CGHexColorCommonNameTable[ CGHexColorCommonNameTableSize] =
{
   { "aliceblue",            CGHexColorAliceBlue },
   { "antiquewhite",         CGHexColorAntiqueWhite },
   { "aqua",                 CGHexColorAqua },
   { "aquamarine",           CGHexColorAquamarine },
   { "azure",                CGHexColorAzure },
   { "beige",                CGHexColorBeige },
   { "bisque",               CGHexColorBisque },
   { "black",                CGHexColorBlack },
   { "blanchedalmond",       CGHexColorBlanchedAlmond },
   { "blue",                 CGHexColorBlue },
   { "blueviolet",           CGHexColorBlueViolet },
   { "brown",                CGHexColorBrown },
   { "burlywood",            CGHexColorBurlyWood },
   { "cadetblue",            CGHexColorCadetBlue },
   { "chartreuse",           CGHexColorChartreuse },
   { "chocolate",            CGHexColorChocolate },
   { "coral",                CGHexColorCoral },
   { "cornflowerblue",       CGHexColorCornflowerBlue },
   { "cornsilk",             CGHexColorCornsilk },
   { "crimson",              CGHexColorCrimson },
   { "cyan",                 CGHexColorCyan },
   { "darkblue",             CGHexColorDarkBlue },
   { "darkcyan",             CGHexColorDarkCyan },
   { "darkgoldenrod",        CGHexColorDarkGoldenrod },
   { "darkgray",             CGHexColorDarkGray },
   { "darkgreen",            CGHexColorDarkGreen },
   { "darkkhaki",            CGHexColorDarkKhaki },
   { "darkmagenta",          CGHexColorDarkMagenta },
   { "darkolivegreen",       CGHexColorDarkOliveGreen },
   { "darkorange",           CGHexColorDarkOrange },
   { "darkorchid",           CGHexColorDarkOrchid },
   { "darkred",              CGHexColorDarkRed },
   { "darksalmon",           CGHexColorDarkSalmon },
   { "darkseagreen",         CGHexColorDarkSeaGreen },
   { "darkslateblue",        CGHexColorDarkSlateBlue },
   { "darkslategray",        CGHexColorDarkSlateGray },
   { "darkturquoise",        CGHexColorDarkTurquoise },
   { "darkviolet",           CGHexColorDarkViolet },
   { "deeppink",             CGHexColorDeepPink },
   { "deepskyblue",          CGHexColorDeepSkyBlue },
   { "dimgray",              CGHexColorDimGray },
   { "dodgerblue",           CGHexColorDodgerBlue },
   { "firebrick",            CGHexColorFirebrick },
   { "floralwhite",          CGHexColorFloralWhite },
   { "forestgreen",          CGHexColorForestGreen },
   { "fuchsia",              CGHexColorFuchsia },
   { "gainsboro",            CGHexColorGainsboro },
   { "ghostwhite",           CGHexColorGhostWhite },
   { "gold",                 CGHexColorGold },
   { "goldenrod",            CGHexColorGoldenrod },
   { "gray",                 CGHexColorGray },
   { "green",                CGHexColorGreen },
   { "greenyellow",          CGHexColorGreenYellow },
   { "honeydew",             CGHexColorHoneydew },
   { "hotpink",              CGHexColorHotPink },
   { "indianred",            CGHexColorIndianRed },
   { "indianyellow",         CGHexColorIndianYellow },
   { "indigo",               CGHexColorIndigo },
   { "ivory",                CGHexColorIvory },
   { "khaki",                CGHexColorKhaki },
   { "lavender",             CGHexColorLavender },
   { "lavenderblush",        CGHexColorLavenderBlush },
   { "lawngreen",            CGHexColorLawnGreen },
   { "lemonchiffon",         CGHexColorLemonChiffon },
   { "lightblue",            CGHexColorLightBlue },
   { "lightcoral",           CGHexColorLightCoral },
   { "lightcyan",            CGHexColorLightCyan },
   { "lightgoldenrodyellow", CGHexColorLightGoldenrodYellow },
   { "lightgreen",           CGHexColorLightGreen },
   { "lightgray",            CGHexColorLightGray },
   { "lightgrey",            CGHexColorLightGrey },
   { "lightpink",            CGHexColorLightPink },
   { "lightsalmon",          CGHexColorLightSalmon },
   { "lightseagreen",        CGHexColorLightSeaGreen },
   { "lightskyblue",         CGHexColorLightSkyBlue },
   { "lightslategray",       CGHexColorLightSlateGray },
   { "lightsteelblue",       CGHexColorLightSteelBlue },
   { "lightyellow",          CGHexColorLightYellow },
   { "lime",                 CGHexColorLime },
   { "limegreen",            CGHexColorLimeGreen },
   { "linen",                CGHexColorLinen },
   { "magenta",              CGHexColorMagenta },
   { "maroon",               CGHexColorMaroon },
   { "mediumaquamarine",     CGHexColorMediumAquamarine },
   { "mediumblue",           CGHexColorMediumBlue },
   { "mediumorchid",         CGHexColorMediumOrchid },
   { "mediumpurple",         CGHexColorMediumPurple },
   { "mediumseagreen",       CGHexColorMediumSeaGreen },
   { "mediumslateblue",      CGHexColorMediumSlateBlue },
   { "mediumspringgreen",    CGHexColorMediumSpringGreen },
   { "mediumturquoise",      CGHexColorMediumTurquoise },
   { "mediumvioletred",      CGHexColorMediumVioletRed },
   { "midnightblue",         CGHexColorMidnightBlue },
   { "midnightblack",        CGHexColorMidnightBlack },
   { "mintcream",            CGHexColorMintCream },
   { "mistyrose",            CGHexColorMistyRose },
   { "moccasin",             CGHexColorMoccasin },
   { "navajowhite",          CGHexColorNavajoWhite },
   { "navy",                 CGHexColorNavy },
   { "oldlace",              CGHexColorOldLace },
   { "olive",                CGHexColorOlive },
   { "olivedrab",            CGHexColorOliveDrab },
   { "orange",               CGHexColorOrange },
   { "orangered",            CGHexColorOrangeRed },
   { "orchid",               CGHexColorOrchid },
   { "palegoldenrod",        CGHexColorPaleGoldenrod },
   { "palegreen",            CGHexColorPaleGreen },
   { "paleturquoise",        CGHexColorPaleTurquoise },
   { "palevioletred",        CGHexColorPaleVioletRed },
   { "papaya",               CGHexColorPapaya },
   { "papayawhip",           CGHexColorPapayaWhip },
   { "peachpuff",            CGHexColorPeachPuff },
   { "peru",                 CGHexColorPeru },
   { "pink",                 CGHexColorPink },
   { "plum",                 CGHexColorPlum },
   { "powderblue",           CGHexColorPowderBlue },
   { "purple",               CGHexColorPurple },
   { "rebeccapurple",        CGHexColorRebeccaPurple },
   { "red",                  CGHexColorRed },
   { "rosybrown",            CGHexColorRosyBrown },
   { "royalblue",            CGHexColorRoyalBlue },
   { "saddlebrown",          CGHexColorSaddleBrown },
   { "salmon",               CGHexColorSalmon },
   { "sandybrown",           CGHexColorSandyBrown },
   { "seagreen",             CGHexColorSeaGreen },
   { "seashell",             CGHexColorSeashell },
   { "sienna",               CGHexColorSienna },
   { "silver",               CGHexColorSilver },
   { "skyblue",              CGHexColorSkyBlue },
   { "slateblue",            CGHexColorSlateBlue },
   { "slategray",            CGHexColorSlateGray },
   { "snow",                 CGHexColorSnow },
   { "springgreen",          CGHexColorSpringGreen },
   { "steelblue",            CGHexColorSteelBlue },
   { "tan",                  CGHexColorTan },
   { "teal",                 CGHexColorTeal },
   { "thistle",              CGHexColorThistle },
   { "tomato",               CGHexColorTomato },
   { "turquoise",            CGHexColorTurquoise },
   { "violet",               CGHexColorViolet },
   { "wheat",                CGHexColorWheat },
   { "white",                CGHexColorWhite },
   { "whitesmoke",           CGHexColorWhiteSmoke },
   { "yellow",               CGHexColorYellow },
   { "yellowgreen",          CGHexColorYellowGreen }
};



CGHexColor  CGHexColorMakeWithCommonName( char *name)
{
   char   buf[ 32];
   char   *dst;
   char   *src;
   int    c;

   if( ! name)
      return( CGHexColorNotFound);

   if( strlen( name) >= sizeof( buf)) // strlen( "lightgoldenrodyellow") == 21
      return( CGHexColorNotFound);

   dst = buf;
   src = name;
   do
   {
      c = tolower( *src++);
      if( c == ' '  || c == '-')
         continue;
      *dst++ = c;
   }
   while( c);

   return( CGHexColorNamePairSearchHexColorForName( CGHexColorCommonNameTable,
                                                    CGHexColorCommonNameTableSize,
                                                    buf));
}


CGHexColor  CGHexColorMakeWithRandomName( void)
{
   return( CGHexColorCommonNameTable[ rand() % CGHexColorCommonNameTableSize].hexColor);
}


char   *CGHexColorGetCommonName( CGHexColor hexColor)
{
   return( CGHexColorNamePairSearchNameForHexColor( CGHexColorCommonNameTable,
                                                    CGHexColorCommonNameTableSize,
                                                    hexColor));
}


static int   CGHexColorNamePairCompareByColor( void *a, void *b, void *info)
{
   struct CGHexColorNamePair *arg1 = (struct CGHexColorNamePair *) a;
   struct CGHexColorNamePair *arg2 = (struct CGHexColorNamePair *) b;

   return( (arg1->hexColor > arg2->hexColor) - (arg1->hexColor < arg2->hexColor));
}


unsigned int   CGHexColorNamePairInitColorSortedTable( struct CGHexColorNamePair  *table,
                                                       unsigned int count)
{
   size_t   size;

   assert( count >= CGHexColorCommonNameTableSize);
   assert( table != CGHexColorCommonNameTable);

   size = sizeof( struct CGHexColorNamePair) * CGHexColorCommonNameTableSize;
   memcpy( table, CGHexColorCommonNameTable, size);

   mulle_qsort_r( table,
                  CGHexColorCommonNameTableSize,
                  sizeof( struct CGHexColorNamePair),
                  CGHexColorNamePairCompareByColor,
                  NULL);
   return( CGHexColorCommonNameTableSize);
}
