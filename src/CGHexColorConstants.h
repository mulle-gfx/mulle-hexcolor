#ifndef cg_hex_color_constants_h__
#define cg_hex_color_constants_h__

#include "CGHexColor.h"

//
// fuchsia/magenta and aqua/cyan have the same values, there rest are
// unique
//
// static initializers can't deal with inline calls yet (need constexpr) for that
// so define some helpfule macros

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

#define CGHexColorAlizarinCrimson      0x4e1500ff
#define CGHexColorBrightRed            0xdb0000ff
#define CGHexColorCadmiumYellow        0xffec00ff
#define CGHexColorDarkSienna           0x5f2e1fff
#define CGHexColorIndianYellow         0xffb800ff
#define CGHexColorMidnightBlack        0x000000ff
#define CGHexColorPhthaloBlue          0x0c0040ff
#define CGHexColorPhthaloGreen         0x102e3cff
#define CGHexColorPrussianBlue         0x021e44ff
#define CGHexColorSapGreen             0x0a3410ff
#define CGHexColorTitaniumWhite        0xffffffff
#define CGHexColorVanDykeBrown         0x221b15ff
#define CGHexColorYellowOchre          0xc79b00ff



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

#endif
