<!-- keywords: quirks, pitfalls, invariants, restrictions -->
# Quirks

## `CGHexColorNotFound` is NOT black

The sentinel `CGHexColorNotFound` is `0x00000000` (fully transparent), while `CGHexColorBlack` is `0x000000FF` (opaque black). Always check against `CGHexColorNotFound`, not against zero.

```c
CGHexColor  c = CGHexColorMakeWithCommonName( "nonexistent");
if( c == CGHexColorNotFound) ...    // correct
if( c == 0) ...                      // wrong — would also match black intent
```

## Float range assertions

`CGHexColorMake`, `CGHexColorMakeWithRGBA`, and `CGHexColorMakeWithRGBAComponents` all assert `r/g/b/a >= 0.0 && <= 1.0`. Pass values outside this range in debug builds and the process aborts.

## No computations on `CGHexColor`

`CGHexColor` is a transport-only representation. There are no blending, lerp, brightness, or other color math functions — use `mulle-color` or `mulle-gfx` for those.

## Name table is HTML/CSS only

The 145-entry `_CGHexColorCommonNameTable` contains only standard HTML/CSS color names. Artist colors (`CGHexColorAlizarinCrimson`, `CGHexColorPhthaloBlue`, etc.) have `#define` macros but are NOT in the name table. `CGHexColorMakeWithCommonName("alizarin-crimson")` returns `CGHexColorNotFound`.

## Reverse lookup requires a sorted copy

`CGHexColorCommonNameTable` is sorted by **name**. Calling search functions that expect a color-sorted table on it triggers an assertion:

```c
// BAD — asserts at runtime:
CGHexColorNamePairSearchNameForHexColor(
   CGHexColorCommonNameTable, ...);

// GOOD — use a copy sorted by color:
struct CGHexColorNamePair   tmp[ CGHexColorCommonNameTableSize];
CGHexColorNamePairInitColorSortedTable( tmp, CGHexColorCommonNameTableSize);
```

## Name table normalization rules

Names in the table are lowercase, no spaces, no hyphens. `CGHexColorMakeWithCommonName` strips spaces and hyphens and lowercases. Input names longer than 31 chars (the internal buffer) return `CGHexColorNotFound`.

## ANSI 256-color macro expands to 246 lines of data

`CGHexColorANSI256Data` is a large macro expander — use it exactly once per compilation unit inside a `CGHexColor name[256]` initializer. Do not paste it into function bodies repeatedly.

## `CGHexColorGetCommonName` has a bug

As of version 0.0.1, `CGHexColorGetCommonName` passes the name-sorted `CGHexColorCommonNameTable` directly to `CGHexColorNamePairSearchNameForHexColor`, which will **assert** because that function expects a color-sorted table. Workaround: use `CGHexColorNamePairInitColorSortedTable` + `CGHexColorNamePairSearchNameForHexColor` manually.

## All predefined constants have alpha = 0xFF

Every `CGHexColorAliceBlue`–style macro includes full opacity in its hex value. The only exceptions are `CGHexColorTransparent` and `CGHexColorClear` (`0x00000000`).
