<!-- keywords: patterns, make, constants, names, ANSI, lookup -->
# Patterns

## Creating colors from floats

All float arguments must be in `[0.0, 1.0]` — asserts fire in debug builds otherwise.

```c
CGHexColor   c;

c = CGHexColorMakeWithRGBA( 0.5, 0.2, 0.8, 1.0);  // opaque purple
// or equivalently:
c = CGHexColorMake( 0.5, 0.2, 0.8, 1.0);
```

From an array:

```c
float   rgba[ 4] = { 0.2, 0.4, 0.6, 0.9 };
CGHexColor  c = CGHexColorMakeWithRGBAComponents( rgba);
```

## Using predefined color constants

All HTML/CSS named colors are available as compile-time macros. Use them for static color schemes:

```c
static CGHexColor   background = CGHexColorMidnightBlue;
static CGHexColor   foreground = CGHexColorAliceBlue;
static CGHexColor   highlight  = CGHexColorGold;
```

Transparent/clear is `CGHexColorTransparent` / `CGHexColorClear` (both `0x00000000`).

## Name lookup (string → color)

`CGHexColorMakeWithCommonName` handles case, spaces, and hyphens:

```c
CGHexColor  c;

c = CGHexColorMakeWithCommonName( "Alice Blue");    // OK
c = CGHexColorMakeWithCommonName( "alice-blue");    // OK
c = CGHexColorMakeWithCommonName( "aliceblue");     // OK
if( c == CGHexColorNotFound)
   ...;  // not in the 145-entry table
```

The table is HTML/CSS only — artist names like `"alizarin-crimson"` are NOT in the name table (they only exist as macros like `CGHexColorAlizarinCrimson`).

## Reverse lookup (color → name)

The built-in table is sorted by name, so reverse lookup needs a color-sorted copy:

```c
struct CGHexColorNamePair   sorted[ CGHexColorCommonNameTableSize];

CGHexColorNamePairInitColorSortedTable( sorted, CGHexColorCommonNameTableSize);
// now use sorted for color→name searches

char       *name;
CGHexColor  c = CGHexColorTomato;
name = CGHexColorNamePairSearchNameForHexColor( sorted,
                                                CGHexColorCommonNameTableSize,
                                                c);
```

Do this once at startup and reuse the sorted table.

## ANSI 256-color palette

```c
CGHexColor   ansi[ 256] = { CGHexColorANSI256Data };
// ansi[0]..ansi[255] now contain the standard terminal palette

float   rgba[ 4];
CGHexColorGetRGBAComponents( ansi[ 196], rgba);  // ANSI Red1
```

See `demo/src/main-ansi.c` for a full JSON export example.

## Extracting components for rendering

```c
CGHexColor   c = CGHexColorMake( 1.0, 0.5, 0.0, 0.8);
float        rgba[ 4];

CGHexColorGetRGBAComponents( c, rgba);
// rgba[0]=1.0, rgba[1]=0.5, rgba[2]=0.0, rgba[3]=0.8
```

## Random named color

```c
CGHexColor  c = CGHexColorMakeWithRandomName();  // picks from the 145-entry table at random
```
