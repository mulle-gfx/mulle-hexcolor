<!-- keywords: hexcolor, CGHexColor, RGBA, color, constants, names -->
# mulle-hexcolor — compact RGBA hex color library

Use this topic when working with `CGHexColor` — the packed 32-bit RGBA color type used across mulle-gfx. This library provides creation from float components, 140+ named HTML/CSS color constants, an artist palette, a 256-entry ANSI terminal palette, and binary-search name/color lookups.

## Understand first

```bash
mulle-sde api cat mulle-hexcolor
mulle-sde api cat CGHexColor
```

## Local references

| Path | Description |
|------|-------------|
| `src/mulle-hexcolor.h` | Umbrella header (includes all sub-headers) |
| `src/CGHexColor.h` | `CGHexColorMake`, `CGHexColorMakeWithRGBA`, `CGHexColorMakeWithRGBAComponents`, `CGHexColorGetRGBAComponents` |
| `src/CGHexColorConstants.h` | Predefined color macros (HTML/CSS, artist, ANSI 256) |
| `src/CGHexColorNames.h` | Name table, binary-search lookups, `CGHexColorMakeWithCommonName` |
| `src/CGHexColorNames.c` | Implementation of name normalization and table sorting |
| `demo/src/main-ansi.c` | Demo: ANSI 256-color palette JSON export |
| `asset/dox/TOC.md` | Full API reference |

## Dominant API families

| Family | Entry point | Purpose |
|--------|-------------|---------|
| **Color construction** | `CGHexColorMake(r,g,b,a)` | Create `CGHexColor` from 0-1 float RGBA |
| **Color extraction** | `CGHexColorGetRGBAComponents(c, rgba)` | Extract floats back from packed hex |
| **Named constants** | `CGHexColorAliceBlue` etc. | 140+ HTML/CSS compile-time color values |
| **Name lookup** | `CGHexColorMakeWithCommonName(name)` | Case/hyphen/space-insensitive name→color |
| **Reverse lookup** | `CGHexColorNamePairInitColorSortedTable` + search | Color→name (requires sorted copy) |
| **ANSI palette** | `CGHexColorANSI256Data` | 256-color terminal palette macro |

## Primary workflow

1. Include `mulle-hexcolor.h`
2. Use predefined constants for static colors
3. Use `CGHexColorMakeWithRGBA` for dynamic float-to-hex conversion
4. Use `CGHexColorMakeWithCommonName` for user-facing color names
5. Use `CGHexColorGetRGBAComponents` to extract components for rendering

## Verify

```bash
mulle-sde craft --debug && mulle-sde run demo
```
