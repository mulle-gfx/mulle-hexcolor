# mulle-hexcolor Library Documentation for AI
<!-- Keywords: color, hex, RGBA, conversion, names, constants -->

## 1. Introduction & Purpose

`mulle-hexcolor` is a lightweight C library for color representation and manipulation using a compact hexadecimal format. The library defines `CGHexColor`, an unsigned integer type (at least 32 bits) that stores colors in RGBA byte format (R shifted by 24 bits, G by 16, B by 8, A unshifted). This compact representation is more convenient for coding and requires less storage than floating-point representations. The library provides extensive color constants, named color lookup tables (145 HTML/CSS standard colors), and conversion utilities. It is designed to be highly optimizable by modern compilers (gcc, clang) with many functions reducing to near-zero overhead when inlined. This library is a component of the mulle-gfx ecosystem.

## 2. Key Concepts & Design Philosophy

The library is built around a simple, efficient hexadecimal color representation:
- **Compact Storage**: `CGHexColor` uses a single `uintptr_t` to store RGBA components as bytes (0-255 range).
- **Compiler Optimization**: All functions are `static inline`, designed to be optimized away by the compiler into direct operations.
- **Named Colors**: Provides 145 HTML/CSS standard color names with binary search lookup for fast name-to-color and color-to-name conversions.
- **ANSI Terminal Support**: Includes a 256-color ANSI terminal palette as a data macro.
- **No Dynamic Allocation**: All operations are stack-based with no heap allocations.
- **Dependency Light**: Depends only on `mulle-core` (which includes `mulle-c11`), standard math, string, and stdlib.

## 3. Core API & Data Structures

### 3.1. `CGHexColor.h`

#### `typedef uintptr_t CGHexColor`
- **Purpose:** The fundamental color type - an unsigned integer storing RGBA in packed byte format.
- **Format:** `0xRRGGBBAA` where each component is a byte (0-255). Red is at bits 24-31, Green at 16-23, Blue at 8-15, Alpha at 0-7.

#### Core Color Creation Functions

- **`CGHexColorMake(float r, float g, float b, float a)`**: Create a hex color from RGBA floats (0.0-1.0 range). Asserts on out-of-range values.
- **`CGHexColorMakeWithRGBA(float r, float g, float b, float a)`**: Identical to `CGHexColorMake`, explicit naming variant.
- **`CGHexColorMakeWithRGBAComponents(float rgba[4])`**: Create from a 4-element float array.

#### Color Component Extraction

- **`CGHexColorGetRGBAComponents(CGHexColor c, float rgba[4])`**: Extract RGBA components to a float array (0.0-1.0 range).

### 3.2. `CGHexColorConstants.h`

#### Predefined Color Constants
- **Purpose:** Provides macro definitions for common colors as `CGHexColor` values.
- **Standard HTML/CSS Colors (140+ colors):** Complete set including `CGHexColorAliceBlue`, `CGHexColorAqua`, `CGHexColorAzure`, `CGHexColorBlack`, `CGHexColorWhite`, `CGHexColorRed`, `CGHexColorGreen`, `CGHexColorBlue`, etc. All colors have full opacity (alpha = 0xFF).
- **Special Colors:**
  - `CGHexColorTransparent` / `CGHexColorClear`: Fully transparent (0x00000000)
- **Artist Palette Colors (13 colors):** Traditional paint colors like `CGHexColorAlizarinCrimson`, `CGHexColorCadmiumYellow`, `CGHexColorPhthaloBlue`, `CGHexColorPrussianBlue`, `CGHexColorTitaniumWhite`, etc.
- **Custom Colors:** `CGHexColorPapaya`, `CGHexColorPersianBlue`

#### ANSI 256-Color Terminal Palette

- **`CGHexColorANSI256Data`**: Macro that expands to 256 `CGHexColor` values representing the standard ANSI terminal color palette (indices 0-255). Use as: `CGHexColor table[256] = { CGHexColorANSI256Data };`

### 3.3. `CGHexColorNames.h`

#### `struct CGHexColorNamePair`
- **Purpose:** Pair a color name string with its `CGHexColor` value.
- **Fields:**
  - `char *name`: Color name (lowercase, no spaces/hyphens)
  - `CGHexColor hexColor`: The corresponding color value

#### Named Color Table and Size

- **`CGHexColorCommonNameTableSize`**: Compile-time constant (145) - the number of standard colors.
- **`_CGHexColorCommonNameTable[145]`**: Read-only table of name-color pairs, sorted by name for binary search.
- **`CGHexColorCommonNameTable`**: Macro providing non-const access (casts away const).

#### Name/Color Lookup Functions

- **`CGHexColorMakeWithCommonName(char *name)`**: Look up a color by name (case-insensitive, ignores spaces and hyphens). Returns `CGHexColorNotFound` (0x00000000) if not found. Examples: "AliceBlue", "alice blue", "alice-blue" all match.
- **`CGHexColorGetCommonName(CGHexColor hexColor)`**: Reverse lookup - find the standard name for a color. Returns NULL if the color is not in the standard table. **Note:** Requires a color-sorted table; see `CGHexColorNamePairInitColorSortedTable`.
- **`CGHexColorMakeWithRandomName(void)`**: Returns a random color from the standard table.
- **`CGHexColorMakeWithNameAtIndex(unsigned int index)`**: Get color at a specific index (wraps with modulo).
- **`CGHexColorNameAtIndex(unsigned int index)`**: Get color name at a specific index (wraps with modulo).

#### Table Search Functions

- **`CGHexColorNamePairSearchHexColorForName(struct CGHexColorNamePair *buf, unsigned int n, char *search)`**: Binary search for color by name in a name-sorted table. Returns `CGHexColorNotFound` if not found.
- **`CGHexColorNamePairSearchNameForHexColor(struct CGHexColorNamePair *buf, unsigned int n, CGHexColor search)`**: Binary search for name by color in a color-sorted table. Returns NULL if not found. **Warning:** Asserts if used with `CGHexColorCommonNameTable` directly (which is name-sorted).
- **`CGHexColorNamePairInitColorSortedTable(struct CGHexColorNamePair *table, unsigned int count)`**: Copy the standard table and sort it by color value for reverse lookups. Table must have space for at least `CGHexColorCommonNameTableSize` entries. Returns the number of entries copied.

#### Special Constants

- **`CGHexColorNotFound`**: Sentinel value (0x00000000) returned when a color name lookup fails. Note this is the same as fully transparent, not black (which is 0x000000FF).

### 3.4. `mulle-hexcolor.h`

#### Main Include Header
- **Purpose:** Single header to include all mulle-hexcolor functionality.
- **Version:** `MULLE__HEXCOLOR_VERSION` macro provides library version as `((major << 20) | (minor << 8) | patch)`.
- **Includes:** Brings in `CGHexColor.h`, `CGHexColorConstants.h`, `CGHexColorNames.h`, and dependency headers.

## 4. Performance Characteristics

- **Color Creation/Extraction:** O(1) - simple bit manipulation and arithmetic operations. With optimization enabled, these compile to just a few CPU instructions.
- **Name Lookup (Name → Color):** O(log n) - binary search on name-sorted table of 145 entries (~7-8 comparisons max).
- **Reverse Lookup (Color → Name):** O(log n) - binary search on color-sorted table. Requires one-time O(n log n) sort via `CGHexColorNamePairInitColorSortedTable`.
- **Random Color:** O(1) - direct array access with modulo.
- **Memory:** `CGHexColor` is 4-8 bytes (platform-dependent `uintptr_t`). The name table is approximately 4KB (145 entries × ~28 bytes per entry).
- **Thread Safety:** All functions are thread-safe for read operations. The standard color table is const. The sorting function is not thread-safe and should only be called during initialization.
- **No Allocations:** All operations are stack-based. No malloc/free involved.

## 5. AI Usage Recommendations & Patterns

### Best Practices

- **Use Inline Functions:** The entire API is designed to be inlined. Trust your compiler optimization (`-O2` or higher).
- **Prefer Constants:** Use the predefined color constants (`CGHexColorRed`, etc.) for common colors instead of constructing them.
- **Name Lookups:** For case-insensitive, flexible name lookup that ignores spaces/hyphens, use `CGHexColorMakeWithCommonName`.
- **Reverse Lookup Setup:** If you need color-to-name lookups, create a color-sorted table once at startup with `CGHexColorNamePairInitColorSortedTable` and reuse it.
- **Alpha Channel:** Remember that RGBA components in the hex format are 0-255, but creation functions expect 0.0-1.0 floats.

### Common Pitfalls

- **CGHexColorNotFound vs Black:** The "not found" sentinel (0x00000000) represents fully transparent, not black. Black is `CGHexColorBlack` (0x000000FF).
- **Reverse Lookup on Wrong Table:** `CGHexColorGetCommonName` will assert if you try to use it directly. It needs a color-sorted table from `CGHexColorNamePairInitColorSortedTable`.
- **Case Sensitivity:** Color names in the table are all lowercase without spaces. However, `CGHexColorMakeWithCommonName` handles this normalization.
- **Float Range:** Color creation functions assert that float values are in [0.0, 1.0]. Out-of-range values will cause assertion failures in debug builds.

### Idiomatic Usage

- **Use Hex Constants for Static Colors:** When defining colors at compile time, use the macro constants directly: `CGHexColor myColor = CGHexColorCornflowerBlue;`
- **Dynamic Color Names:** When parsing user input or config files with color names, use `CGHexColorMakeWithCommonName` and check for `CGHexColorNotFound`.
- **ANSI Colors:** For terminal applications, initialize a 256-color array with `CGHexColorANSI256Data` macro.

## 6. Integration Examples

### Example 1: Creating and Using Basic Colors

```c
#include <mulle-hexcolor/mulle-hexcolor.h>
#include <stdio.h>

int   main( void)
{
   CGHexColor   red;
   CGHexColor   semiTransparentBlue;
   float        rgba[ 4];

   /* Create pure red using constant */
   red = CGHexColorRed;

   /* Create a semi-transparent blue using float components */
   semiTransparentBlue = CGHexColorMake( 0.0, 0.0, 1.0, 0.5);

   /* Extract components back to floats */
   CGHexColorGetRGBAComponents( semiTransparentBlue, rgba);
   printf( "Blue components: R=%.2f G=%.2f B=%.2f A=%.2f\n",
           rgba[ 0], rgba[ 1], rgba[ 2], rgba[ 3]);

   return( 0);
}
```

### Example 2: Using Named Color Lookups

```c
#include <mulle-hexcolor/mulle-hexcolor.h>
#include <stdio.h>

int   main( void)
{
   CGHexColor   color;
   char         *name;

   /* Case-insensitive lookup with space handling */
   color = CGHexColorMakeWithCommonName( "Alice Blue");
   if( color == CGHexColorNotFound)
   {
      printf( "Color not found\n");
      return( 1);
   }

   printf( "Found color: 0x%08lx\n", (unsigned long) color);

   /* Get a random color name */
   name = CGHexColorNameAtIndex( 42);
   printf( "Random color name: %s\n", name);

   return( 0);
}
```

### Example 3: Reverse Color Lookup (Color to Name)

```c
#include <mulle-hexcolor/mulle-hexcolor.h>
#include <stdio.h>
#include <stdlib.h>

int   main( void)
{
   struct CGHexColorNamePair   sortedTable[ CGHexColorCommonNameTableSize];
   CGHexColor                  color;
   char                        *name;

   /* Initialize a color-sorted table for reverse lookups */
   CGHexColorNamePairInitColorSortedTable( sortedTable,
                                           CGHexColorCommonNameTableSize);

   /* Look up name for a specific color */
   color = CGHexColorTomato;
   name  = CGHexColorNamePairSearchNameForHexColor( sortedTable,
                                                    CGHexColorCommonNameTableSize,
                                                    color);

   if( name)
      printf( "Color 0x%08lx is named: %s\n", (unsigned long) color, name);
   else
      printf( "Color 0x%08lx has no standard name\n", (unsigned long) color);

   return( 0);
}
```

### Example 4: Working with ANSI Terminal Colors

```c
#include <mulle-hexcolor/mulle-hexcolor.h>
#include <stdio.h>

int   main( void)
{
   CGHexColor   ansiColors[ 256] = { CGHexColorANSI256Data };
   float        rgba[ 4];
   int          i;

   /* Print first 16 ANSI colors in RGB format */
   for( i = 0; i < 16; i++)
   {
      CGHexColorGetRGBAComponents( ansiColors[ i], rgba);
      printf( "ANSI %d: RGB(%d, %d, %d)\n",
              i,
              (int) (rgba[ 0] * 255),
              (int) (rgba[ 1] * 255),
              (int) (rgba[ 2] * 255));
   }

   return( 0);
}
```

### Example 5: Color Constant Usage in Configuration

```c
#include <mulle-hexcolor/mulle-hexcolor.h>

/* Define application color scheme using constants */
struct ColorScheme
{
   CGHexColor   background;
   CGHexColor   foreground;
   CGHexColor   highlight;
   CGHexColor   error;
   CGHexColor   warning;
};


static struct ColorScheme   darkTheme =
{
   .background = CGHexColorMidnightBlue,
   .foreground = CGHexColorAliceBlue,
   .highlight  = CGHexColorGold,
   .error      = CGHexColorCrimson,
   .warning    = CGHexColorOrange
};


static struct ColorScheme   lightTheme =
{
   .background = CGHexColorWhiteSmoke,
   .foreground = CGHexColorBlack,
   .highlight  = CGHexColorCornflowerBlue,
   .error      = CGHexColorRed,
   .warning    = CGHexColorDarkOrange
};
```

## 7. Dependencies

- **mulle-core**: Amalgamated library of mulle-core and mulle-c components (provides `mulle-c11`, `mulle-qsort_r`, and other utilities)
- **m** (math library): Used implicitly via `math.h` include (link with `-lm` if needed)

The library uses standard C headers: `stdint.h`, `string.h`, `stdlib.h`, `assert.h`, `math.h`, and `ctype.h`.
