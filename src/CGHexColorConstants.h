//
//  CGHexColorConstants.h
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
#ifndef cg_hex_color_constants_h__
#define cg_hex_color_constants_h__

#include "CGHexColor.h"

//
// fuchsia/magenta and aqua/cyan have the same values, there rest are
// unique
//
// static initializers can't deal with inline calls yet (need constexpr) for that
// so define some helpful macros

#define CGHexColorAliceBlue             0xf0f8ffff
#define CGHexColorAntiqueWhite          0xfaebd7ff
#define CGHexColorAqua                  0x00ffffff
#define CGHexColorAquamarine            0x7fffd4ff
#define CGHexColorAzure                 0xf0ffffff
#define CGHexColorBeige                 0xf5f5dcff
#define CGHexColorBisque                0xffe4c4ff
#define CGHexColorBlack                 0x000000ff
#define CGHexColorBlanchedAlmond        0xffebcdff
#define CGHexColorBlue                  0x0000ffff
#define CGHexColorBlueViolet            0x8a2be2ff
#define CGHexColorBrown                 0xa52a2aff
#define CGHexColorBurlyWood             0xdeb887ff
#define CGHexColorCadetBlue             0x5f9ea0ff
#define CGHexColorChartreuse            0x7fff00ff
#define CGHexColorChocolate             0xd2691eff
#define CGHexColorCoral                 0xff7f50ff
#define CGHexColorCornflowerBlue        0x6495edff
#define CGHexColorCornsilk              0xfff8dcff
#define CGHexColorCrimson               0xdc143cff
#define CGHexColorCyan                  0x00ffffff
#define CGHexColorDarkBlue              0x00008bff
#define CGHexColorDarkCyan              0x008b8bff
#define CGHexColorDarkGoldenrod         0xb8860bff
#define CGHexColorDarkGray              0xa9a9a9ff
#define CGHexColorDarkGreen             0x006400ff
#define CGHexColorDarkKhaki             0xbdb76bff
#define CGHexColorDarkMagenta           0x8b008bff
#define CGHexColorDarkOliveGreen        0x556b2fff
#define CGHexColorDarkOrange            0xff8c00ff
#define CGHexColorDarkOrchid            0x9932ccff
#define CGHexColorDarkRed               0x8b0000ff
#define CGHexColorDarkSalmon            0xe9967aff
#define CGHexColorDarkSeaGreen          0x8fbc8fff
#define CGHexColorDarkSlateBlue         0x483d8bff
#define CGHexColorDarkSlateGray         0x2f4f4fff
#define CGHexColorDarkTurquoise         0x00ced1ff
#define CGHexColorDarkViolet            0x9400d3ff
#define CGHexColorDeepPink              0xff1493ff
#define CGHexColorDeepSkyBlue           0x00bfffff
#define CGHexColorDimGray               0x696969ff
#define CGHexColorDodgerBlue            0x1e90ffff
#define CGHexColorFirebrick             0xb22222ff
#define CGHexColorFloralWhite           0xfffaf0ff
#define CGHexColorForestGreen           0x228b22ff
#define CGHexColorFuchsia               0xff00ffff
#define CGHexColorGainsboro             0xdcdcdcff
#define CGHexColorGhostWhite            0xf8f8ffff
#define CGHexColorGold                  0xffd700ff
#define CGHexColorGoldenrod             0xdaa520ff
#define CGHexColorGray                  0x808080ff
#define CGHexColorGreen                 0x008000ff
#define CGHexColorGreenYellow           0xadff2fff
#define CGHexColorHoneydew              0xf0fff0ff
#define CGHexColorHotPink               0xff69b4ff
#define CGHexColorIndianRed             0xcd5c5cff
#define CGHexColorIndigo                0x4b0082ff
#define CGHexColorIvory                 0xfffff0ff
#define CGHexColorKhaki                 0xf0e68cff
#define CGHexColorLavender              0xe6e6faff
#define CGHexColorLavenderBlush         0xfff0f5ff
#define CGHexColorLawnGreen             0x7cfc00ff
#define CGHexColorLemonChiffon          0xfffacdff
#define CGHexColorLightBlue             0xadd8e6ff
#define CGHexColorLightCoral            0xf08080ff
#define CGHexColorLightCyan             0xe0ffffff
#define CGHexColorLightGoldenrodYellow  0xfafad2ff
#define CGHexColorLightGray             0xd3d3d3ff
#define CGHexColorLightGrey             0xd3d3d3ff  // just different spelling
#define CGHexColorLightGreen            0x90ee90ff
#define CGHexColorLightPink             0xffb6c1ff
#define CGHexColorLightSalmon           0xffa07aff
#define CGHexColorLightSeaGreen         0x20b2aaff
#define CGHexColorLightSkyBlue          0x87cefaff
#define CGHexColorLightSlateGray        0x778899ff
#define CGHexColorLightSteelBlue        0xb0c4deff
#define CGHexColorLightYellow           0xffffe0ff
#define CGHexColorLime                  0x00ff00ff
#define CGHexColorLimeGreen             0x32cd32ff
#define CGHexColorLinen                 0xfaf0e6ff
#define CGHexColorMagenta               0xff00ffff
#define CGHexColorMaroon                0x800000ff
#define CGHexColorMediumAquamarine      0x66cdaaff
#define CGHexColorMediumBlue            0x0000cdff
#define CGHexColorMediumOrchid          0xba55d3ff
#define CGHexColorMediumPurple          0x9370d8ff
#define CGHexColorMediumSeaGreen        0x3cb371ff
#define CGHexColorMediumSlateBlue       0x7b68eeff
#define CGHexColorMediumSpringGreen     0x00fa9aff
#define CGHexColorMediumTurquoise       0x48d1ccff
#define CGHexColorMediumVioletRed       0xc71585ff
#define CGHexColorMidnightBlue          0x191970ff
#define CGHexColorMintCream             0xf5fffaff
#define CGHexColorMistyRose             0xffe4e1ff
#define CGHexColorMoccasin              0xffe4b5ff
#define CGHexColorNavajoWhite           0xffdeadff
#define CGHexColorNavy                  0x000080ff
#define CGHexColorOldLace               0xfdf5e6ff
#define CGHexColorOlive                 0x808000ff
#define CGHexColorOliveDrab             0x6b8e23ff
#define CGHexColorOrange                0xffa500ff
#define CGHexColorOrangeRed             0xff4500ff
#define CGHexColorOrchid                0xda70d6ff
#define CGHexColorPaleGoldenrod         0xeee8aaff
#define CGHexColorPaleGreen             0x98fb98ff
#define CGHexColorPaleTurquoise         0xafeeeeff
#define CGHexColorPaleVioletRed         0xd87093ff
#define CGHexColorPapayaWhip            0xffefd5ff
#define CGHexColorPeachPuff             0xffdab9ff
#define CGHexColorPeru                  0xcd853fff
#define CGHexColorPink                  0xffc0cbff
#define CGHexColorPlum                  0xdda0ddff
#define CGHexColorPowderBlue            0xb0e0e6ff
#define CGHexColorPurple                0x800080ff
#define CGHexColorRebeccaPurple         0x663399ff
#define CGHexColorRed                   0xff0000ff
#define CGHexColorRosyBrown             0xbc8f8fff
#define CGHexColorRoyalBlue             0x4169e1ff
#define CGHexColorSaddleBrown           0x8b4513ff
#define CGHexColorSalmon                0xfa8072ff
#define CGHexColorSandyBrown            0xf4a460ff
#define CGHexColorSeaGreen              0x2e8b57ff
#define CGHexColorSeashell              0xfff5eeff
#define CGHexColorSienna                0xa0522dff
#define CGHexColorSilver                0xc0c0c0ff
#define CGHexColorSkyBlue               0x87ceebff
#define CGHexColorSlateBlue             0x6a5acdff
#define CGHexColorSlateGray             0x708090ff
#define CGHexColorSnow                  0xfffafaff
#define CGHexColorSpringGreen           0x00ff7fff
#define CGHexColorSteelBlue             0x4682b4ff
#define CGHexColorTan                   0xd2b48cff
#define CGHexColorTeal                  0x008080ff
#define CGHexColorThistle               0xd8bfd8ff
#define CGHexColorTomato                0xff6347ff
#define CGHexColorTurquoise             0x40e0d0ff
#define CGHexColorViolet                0xee82eeff
#define CGHexColorWheat                 0xf5deb3ff
#define CGHexColorWhite                 0xffffffff
#define CGHexColorWhiteSmoke            0xf5f5f5ff
#define CGHexColorYellow                0xffff00ff
#define CGHexColorYellowGreen           0x9acd32ff

#define CGHexColorTransparent           0x00000000
#define CGHexColorClear                 0x00000000
#define CGHexColorPersianBlue           0x005ca9ff

#define CGHexColorAlizarinCrimson       0x4e1500ff
#define CGHexColorBrightRed             0xdb0000ff
#define CGHexColorCadmiumYellow         0xffec00ff
#define CGHexColorDarkSienna            0x5f2e1fff
#define CGHexColorIndianYellow          0xffb800ff
#define CGHexColorMidnightBlack         0x000000ff
#define CGHexColorPhthaloBlue           0x0c0040ff
#define CGHexColorPhthaloGreen          0x102e3cff
#define CGHexColorPrussianBlue          0x021e44ff
#define CGHexColorSapGreen              0x0a3410ff
#define CGHexColorTitaniumWhite         0xffffffff
#define CGHexColorVanDykeBrown          0x221b15ff
#define CGHexColorYellowOchre           0xc79b00ff



// TODO: Crayon ColorNames?
//
// Carnation Pink    #FFAACC
// Cerulean          #1DACD6
// Dandelion         #FED85D
// Scarlet           #FC2847
// YellowOrange      #FFAE42
// Sizzling Red   Red Salsa   Tart Orange    Orange Soda
// #FF3855  #FD3A4A  #FB4D46  #FA5B3D
// Bright Yellow  Yellow Sunshine   Slimy Green    Green Lizard
// #FFAA1D  #FFF700  #299617  #A7F432
// Denim Blue  Blue Jeans  Plump Purple   Purple Plum
// #2243B6  #5DADEC  #5946B2  #9C51B6
// Sweet Brown    Brown Sugar    Eerie Black    Black Shadows
// #A83731  #AF6E4D  #1B1B1B  #BFAFB2
// Mango Tango    #E77200
// Robin's Egg Blue  #00CCCC
// Violet Red  #F7468A
// Tickle Me Pink    #FC80A5
// Red Orange  #FF681F
// Chestnut    #B94E48
// Tan   #D99A6C
// Antique Gray   #9F9F9F
// Apple Orchard  #BF3F3F
// Berry Parfait  #A43482
// Black Pearl    #3A3A3A
// Bubble Gum  #DF9ACA
// Butternut Squash  #E74F00
// Caribbean Sea  #67CD95
// Cloudy Sky  #548CD0
// Hot Cocoa   #8F482F
// Iridescent Indigo    #3C32CD
// Lavender Silk  #6B4D82
// Leafy Canopy   #94DDCB
// Liquid Gold    #FFD966
// Mango Purée    #FF6137
// Moonlit Pond   #4F2CD0
// Ocean Foam  #62C9D3
// Orange Peel    #FF8021
// Pesto    #5F7B4A
// Pink Luster    #FFB2E7
// Red Satin   #9F3434
// Sea Glass   #C4EA7F
// Shooting Star  #FFFF65
// Snow Drift  #F3F3F3
// Sunset Shimmer    #F79015


// Color that is common, but not part of any "set" I know about

#define CGHexColorPapaya    0xE56717ff


// ANSI codes for terminal 0-255 as used in
//
// ESC[38;5;<code>m
// ESC[0m
//
// taken from https://vim.fandom.com/wiki/Xterm256_color_names_for_console_Vim
// but there are duplicate names, so I hand edited some of the numbers like
// CGHexColorANSIBlue3 was dupe but CGHexColorANSIBlue2 did not exist
//
// if you need a table do
//
// CGHexColor   table[ 256] = { CGHexColorANSI256Data };
//
// There are no defines for the individual names in CGHexColor, because I think the
// original names are not very helpful, containing lots of duplicates and
// holes.
//
#define CGHexColorANSI256Data                 \
   0x000000ff, /* x000                    */  \
   0x800000ff, /* x001                    */  \
   0x008000ff, /* x002                    */  \
   0x808000ff, /* x003                    */  \
   0x000080ff, /* x004                    */  \
   0x800080ff, /* x005                    */  \
   0x008080ff, /* x006                    */  \
   0xc0c0c0ff, /* x007                    */  \
   0x808080ff, /* x008                    */  \
   0xff0000ff, /* x009                    */  \
   0x00ff00ff, /* x010                    */  \
   0xffff00ff, /* x011                    */  \
   0xff00ffff, /* x012                    */  \
   0xff00ffff, /* x013                    */  \
   0x00ffffff, /* x014                    */  \
   0xffffffff, /* x015                    */  \
   0x000000ff, /* x016_Grey0              */  \
   0x00005fff, /* x017_NavyBlue           */  \
   0x000087ff, /* x018_DarkBlue           */  \
   0x0000afff, /* x019_Blue3              */  \
   0x0000d7ff, /* x020_Blue3              */  \
   0x0000ffff, /* x021_Blue1              */  \
   0x005f00ff, /* x022_DarkGreen          */  \
   0x005f5fff, /* x023_DeepSkyBlue4       */  \
   0x005f87ff, /* x024_DeepSkyBlue4       */  \
   0x005fafff, /* x025_DeepSkyBlue4       */  \
   0x005fd7ff, /* x026_DodgerBlue3        */  \
   0x005fffff, /* x027_DodgerBlue2        */  \
   0x008700ff, /* x028_Green4             */  \
   0x00875fff, /* x029_SpringGreen4       */  \
   0x008787ff, /* x030_Turquoise4         */  \
   0x0087afff, /* x031_DeepSkyBlue3       */  \
   0x0087d7ff, /* x032_DeepSkyBlue3       */  \
   0x0087ffff, /* x033_DodgerBlue1        */  \
   0x00af00ff, /* x034_Green3             */  \
   0x00af5fff, /* x035_SpringGreen3       */  \
   0x00af87ff, /* x036_DarkCyan           */  \
   0x00afafff, /* x037_LightSeaGreen      */  \
   0x00afd7ff, /* x038_DeepSkyBlue2       */  \
   0x00afffff, /* x039_DeepSkyBlue1       */  \
   0x00d700ff, /* x040_Green3             */  \
   0x00d75fff, /* x041_SpringGreen3       */  \
   0x00d787ff, /* x042_SpringGreen2       */  \
   0x00d7afff, /* x043_Cyan3              */  \
   0x00d7d7ff, /* x044_DarkTurquoise      */  \
   0x00d7ffff, /* x045_Turquoise2         */  \
   0x00ff00ff, /* x046_Green1             */  \
   0x00ff5fff, /* x047_SpringGreen2       */  \
   0x00ff87ff, /* x048_SpringGreen1       */  \
   0x00ffafff, /* x049_MediumSpringGreen  */  \
   0x00ffd7ff, /* x050_Cyan2              */  \
   0x00ffffff, /* x051_Cyan1              */  \
   0x5f0000ff, /* x052_DarkRed            */  \
   0x5f005fff, /* x053_DeepPink4          */  \
   0x5f0087ff, /* x054_Purple4            */  \
   0x5f00afff, /* x055_Purple4            */  \
   0x5f00d7ff, /* x056_Purple3            */  \
   0x5f00ffff, /* x057_BlueViolet         */  \
   0x5f5f00ff, /* x058_Orange4            */  \
   0x5f5f5fff, /* x059_Grey37             */  \
   0x5f5f87ff, /* x060_MediumPurple4      */  \
   0x5f5fafff, /* x061_SlateBlue3         */  \
   0x5f5fd7ff, /* x062_SlateBlue3         */  \
   0x5f5fffff, /* x063_RoyalBlue1         */  \
   0x5f8700ff, /* x064_Chartreuse4        */  \
   0x5f875fff, /* x065_DarkSeaGreen4      */  \
   0x5f8787ff, /* x066_PaleTurquoise4     */  \
   0x5f87afff, /* x067_SteelBlue          */  \
   0x5f87d7ff, /* x068_SteelBlue3         */  \
   0x5f87ffff, /* x069_CornflowerBlue     */  \
   0x5faf00ff, /* x070_Chartreuse3        */  \
   0x5faf5fff, /* x071_DarkSeaGreen4      */  \
   0x5faf87ff, /* x072_CadetBlue          */  \
   0x5fafafff, /* x073_CadetBlue          */  \
   0x5fafd7ff, /* x074_SkyBlue3           */  \
   0x5fafffff, /* x075_SteelBlue1         */  \
   0x5fd700ff, /* x076_Chartreuse3        */  \
   0x5fd75fff, /* x077_PaleGreen3         */  \
   0x5fd787ff, /* x078_SeaGreen3          */  \
   0x5fd7afff, /* x079_Aquamarine3        */  \
   0x5fd7d7ff, /* x080_MediumTurquoise    */  \
   0x5fd7ffff, /* x081_SteelBlue1         */  \
   0x5fff00ff, /* x082_Chartreuse2        */  \
   0x5fff5fff, /* x083_SeaGreen2          */  \
   0x5fff87ff, /* x084_SeaGreen1          */  \
   0x5fffafff, /* x085_SeaGreen1          */  \
   0x5fffd7ff, /* x086_Aquamarine1        */  \
   0x5fffffff, /* x087_DarkSlateGray2     */  \
   0x870000ff, /* x088_DarkRed            */  \
   0x87005fff, /* x089_DeepPink4          */  \
   0x870087ff, /* x090_DarkMagenta        */  \
   0x8700afff, /* x091_DarkMagenta        */  \
   0x8700d7ff, /* x092_DarkViolet         */  \
   0x8700ffff, /* x093_Purple             */  \
   0x875f00ff, /* x094_Orange4            */  \
   0x875f5fff, /* x095_LightPink4         */  \
   0x875f87ff, /* x096_Plum4              */  \
   0x875fafff, /* x097_MediumPurple3      */  \
   0x875fd7ff, /* x098_MediumPurple3      */  \
   0x875fffff, /* x099_SlateBlue1         */  \
   0x878700ff, /* x100_Yellow4            */  \
   0x87875fff, /* x101_Wheat4             */  \
   0x878787ff, /* x102_Grey53             */  \
   0x8787afff, /* x103_LightSlateGrey     */  \
   0x8787d7ff, /* x104_MediumPurple       */  \
   0x8787ffff, /* x105_LightSlateBlue     */  \
   0x87af00ff, /* x106_Yellow4            */  \
   0x87af5fff, /* x107_DarkOliveGreen3    */  \
   0x87af87ff, /* x108_DarkSeaGreen       */  \
   0x87afafff, /* x109_LightSkyBlue3      */  \
   0x87afd7ff, /* x110_LightSkyBlue3      */  \
   0x87afffff, /* x111_SkyBlue2           */  \
   0x87d700ff, /* x112_Chartreuse2        */  \
   0x87d75fff, /* x113_DarkOliveGreen3    */  \
   0x87d787ff, /* x114_PaleGreen3         */  \
   0x87d7afff, /* x115_DarkSeaGreen3      */  \
   0x87d7d7ff, /* x116_DarkSlateGray3     */  \
   0x87d7ffff, /* x117_SkyBlue1           */  \
   0x87ff00ff, /* x118_Chartreuse1        */  \
   0x87ff5fff, /* x119_LightGreen         */  \
   0x87ff87ff, /* x120_LightGreen         */  \
   0x87ffafff, /* x121_PaleGreen1         */  \
   0x87ffd7ff, /* x122_Aquamarine1        */  \
   0x87ffffff, /* x123_DarkSlateGray1     */  \
   0xaf0000ff, /* x124_Red3               */  \
   0xaf005fff, /* x125_DeepPink4          */  \
   0xaf0087ff, /* x126_MediumVioletRed    */  \
   0xaf00afff, /* x127_Magenta3           */  \
   0xaf00d7ff, /* x128_DarkViolet         */  \
   0xaf00ffff, /* x129_Purple             */  \
   0xaf5f00ff, /* x130_DarkOrange3        */  \
   0xaf5f5fff, /* x131_IndianRed          */  \
   0xaf5f87ff, /* x132_HotPink3           */  \
   0xaf5fafff, /* x133_MediumOrchid3      */  \
   0xaf5fd7ff, /* x134_MediumOrchid       */  \
   0xaf5fffff, /* x135_MediumPurple2      */  \
   0xaf8700ff, /* x136_DarkGoldenrod      */  \
   0xaf875fff, /* x137_LightSalmon3       */  \
   0xaf8787ff, /* x138_RosyBrown          */  \
   0xaf87afff, /* x139_Grey63             */  \
   0xaf87d7ff, /* x140_MediumPurple2      */  \
   0xaf87ffff, /* x141_MediumPurple1      */  \
   0xafaf00ff, /* x142_Gold3              */  \
   0xafaf5fff, /* x143_DarkKhaki          */  \
   0xafaf87ff, /* x144_NavajoWhite3       */  \
   0xafafafff, /* x145_Grey69             */  \
   0xafafd7ff, /* x146_LightSteelBlue3    */  \
   0xafafffff, /* x147_LightSteelBlue     */  \
   0xafd700ff, /* x148_Yellow3            */  \
   0xafd75fff, /* x149_DarkOliveGreen3    */  \
   0xafd787ff, /* x150_DarkSeaGreen3      */  \
   0xafd7afff, /* x151_DarkSeaGreen2      */  \
   0xafd7d7ff, /* x152_LightCyan3         */  \
   0xafd7ffff, /* x153_LightSkyBlue1      */  \
   0xafff00ff, /* x154_GreenYellow        */  \
   0xafff5fff, /* x155_DarkOliveGreen2    */  \
   0xafff87ff, /* x156_PaleGreen1         */  \
   0xafffafff, /* x157_DarkSeaGreen2      */  \
   0xafffd7ff, /* x158_DarkSeaGreen1      */  \
   0xafffffff, /* x159_PaleTurquoise1     */  \
   0xd70000ff, /* x160_Red3               */  \
   0xd7005fff, /* x161_DeepPink3          */  \
   0xd70087ff, /* x162_DeepPink3          */  \
   0xd700afff, /* x163_Magenta3           */  \
   0xd700d7ff, /* x164_Magenta3           */  \
   0xd700ffff, /* x165_Magenta2           */  \
   0xd75f00ff, /* x166_DarkOrange3        */  \
   0xd75f5fff, /* x167_IndianRed          */  \
   0xd75f87ff, /* x168_HotPink3           */  \
   0xd75fafff, /* x169_HotPink2           */  \
   0xd75fd7ff, /* x170_Orchid             */  \
   0xd75fffff, /* x171_MediumOrchid1      */  \
   0xd78700ff, /* x172_Orange3            */  \
   0xd7875fff, /* x173_LightSalmon3       */  \
   0xd78787ff, /* x174_LightPink3         */  \
   0xd787afff, /* x175_Pink3              */  \
   0xd787d7ff, /* x176_Plum3              */  \
   0xd787ffff, /* x177_Violet             */  \
   0xd7af00ff, /* x178_Gold3              */  \
   0xd7af5fff, /* x179_LightGoldenrod3    */  \
   0xd7af87ff, /* x180_Tan                */  \
   0xd7afafff, /* x181_MistyRose3         */  \
   0xd7afd7ff, /* x182_Thistle3           */  \
   0xd7afffff, /* x183_Plum2              */  \
   0xd7d700ff, /* x184_Yellow3            */  \
   0xd7d75fff, /* x185_Khaki3             */  \
   0xd7d787ff, /* x186_LightGoldenrod2    */  \
   0xd7d7afff, /* x187_LightYellow3       */  \
   0xd7d7d7ff, /* x188_Grey84             */  \
   0xd7d7ffff, /* x189_LightSteelBlue1    */  \
   0xd7ff00ff, /* x190_Yellow2            */  \
   0xd7ff5fff, /* x191_DarkOliveGreen1    */  \
   0xd7ff87ff, /* x192_DarkOliveGreen1    */  \
   0xd7ffafff, /* x193_DarkSeaGreen1      */  \
   0xd7ffd7ff, /* x194_Honeydew2          */  \
   0xd7ffffff, /* x195_LightCyan1         */  \
   0xff0000ff, /* x196_Red1               */  \
   0xff005fff, /* x197_DeepPink2          */  \
   0xff0087ff, /* x198_DeepPink1          */  \
   0xff00afff, /* x199_DeepPink1          */  \
   0xff00d7ff, /* x200_Magenta2           */  \
   0xff00ffff, /* x201_Magenta1           */  \
   0xff5f00ff, /* x202_OrangeRed1         */  \
   0xff5f5fff, /* x203_IndianRed1         */  \
   0xff5f87ff, /* x204_IndianRed1         */  \
   0xff5fafff, /* x205_HotPink            */  \
   0xff5fd7ff, /* x206_HotPink            */  \
   0xff5fffff, /* x207_MediumOrchid1      */  \
   0xff8700ff, /* x208_DarkOrange         */  \
   0xff875fff, /* x209_Salmon1            */  \
   0xff8787ff, /* x210_LightCoral         */  \
   0xff87afff, /* x211_PaleVioletRed1     */  \
   0xff87d7ff, /* x212_Orchid2            */  \
   0xff87ffff, /* x213_Orchid1            */  \
   0xffaf00ff, /* x214_Orange1            */  \
   0xffaf5fff, /* x215_SandyBrown         */  \
   0xffaf87ff, /* x216_LightSalmon1       */  \
   0xffafafff, /* x217_LightPink1         */  \
   0xffafd7ff, /* x218_Pink1              */  \
   0xffafffff, /* x219_Plum1              */  \
   0xffd700ff, /* x220_Gold1              */  \
   0xffd75fff, /* x221_LightGoldenrod2    */  \
   0xffd787ff, /* x222_LightGoldenrod2    */  \
   0xffd7afff, /* x223_NavajoWhite1       */  \
   0xffd7d7ff, /* x224_MistyRose1         */  \
   0xffd7ffff, /* x225_Thistle1           */  \
   0xffff00ff, /* x226_Yellow1            */  \
   0xffff5fff, /* x227_LightGoldenrod1    */  \
   0xffff87ff, /* x228_Khaki1             */  \
   0xffffafff, /* x229_Wheat1             */  \
   0xffffd7ff, /* x230_Cornsilk1          */  \
   0xffffffff, /* x231_Grey100            */  \
   0x080808ff, /* x232_Grey3              */  \
   0x121212ff, /* x233_Grey7              */  \
   0x1c1c1cff, /* x234_Grey11             */  \
   0x262626ff, /* x235_Grey15             */  \
   0x303030ff, /* x236_Grey19             */  \
   0x3a3a3aff, /* x237_Grey23             */  \
   0x444444ff, /* x238_Grey27             */  \
   0x4e4e4eff, /* x239_Grey30             */  \
   0x585858ff, /* x240_Grey35             */  \
   0x626262ff, /* x241_Grey39             */  \
   0x6c6c6cff, /* x242_Grey42             */  \
   0x767676ff, /* x243_Grey46             */  \
   0x808080ff, /* x244_Grey50             */  \
   0x8a8a8aff, /* x245_Grey54             */  \
   0x949494ff, /* x246_Grey58             */  \
   0x9e9e9eff, /* x247_Grey62             */  \
   0xa8a8a8ff, /* x248_Grey66             */  \
   0xb2b2b2ff, /* x249_Grey70             */  \
   0xbcbcbcff, /* x250_Grey74             */  \
   0xc6c6c6ff, /* x251_Grey78             */  \
   0xd0d0d0ff, /* x252_Grey82             */  \
   0xdadadaff, /* x253_Grey85             */  \
   0xe4e4e4ff, /* x254_Grey89             */  \
   0xeeeeeeff, /* x255_Grey93             */


















































































































































































































































#endif
