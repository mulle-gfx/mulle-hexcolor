# mulle-hexcolor

#### 🌈 mulle-hexcolor converts between color models

This library defines a `CGHexColor` which is a 32bit RGBA
representation as used in CSS or HTML. It's a transport representation so to
speak. There are no computations defined for CGHexColor.




| Release Version                                       | Release Notes  | AI Documentation
|-------------------------------------------------------|----------------|---------------
| ![Mulle kybernetiK tag](https://img.shields.io/github/tag/mulle-gfx/mulle-hexcolor.svg) [![Build Status](https://github.com/mulle-gfx/mulle-hexcolor/workflows/CI/badge.svg)](//github.com/mulle-gfx/mulle-hexcolor/actions) | [RELEASENOTES](RELEASENOTES.md) | [DeepWiki for mulle-hexcolor](https://deepwiki.com/mulle-gfx/mulle-hexcolor)


#### Color creation

| Name                          | Description
| ------------------------------|-------------------------
| CGHexColorMake                | shortcut for CGHexColorMakeWithRGBA
| CGHexColorMakeWithRGB         | calls CGColorMakeRGBA which alpha 1.0
| CGHexColorMakeWithRGBA        | the most basic color construction function
| CGHexColorMakeWithRGBAComponents | create a `CGHexColor` from a float `rgba[4]` array
| CGHexColorGetRGBAComponents   | unpack a `CGHexColor` into a float `rgba[4]` array
| CGHexColorMakeWithCommonName  | create color from HTML name (e.g. "alizarin-crimson")


## Documentation & Guides

* [API Summary](asset/dox/api/toc)
* [Coder Guide](asset/howto/coder/mulle-hexcolor)

## Usage

A color as a plain integer: R<<24, G<<16, B<<8, A. No floating point, no
computations — just a compact, lossless "transport" representation:

``` c
#include <mulle-hexcolor/mulle-hexcolor.h>

int  main( void)
{
   CGHexColor  c = CGHexColorMakeWithRGBA( 1.0f, 0.5f, 0.0f, 1.0f);

   printf( "0x%08lx\n", (unsigned long) c);   /* 0xff8000ff */

   float  rgba[ 4];
   CGHexColorGetRGBAComponents( c, rgba);
   return( 0);
}
```


### You are here

![Overview](overview.dot.svg)





## Add

**This project is a component of the [mulle-gfx](//github.com/mulle-gfx/mulle-gfx) library.
As such you usually will *not* add or install it individually, unless you
specifically do not want to link against `mulle-gfx`.**


### Add as an individual component

Use [mulle-sde](//github.com/mulle-sde) to add mulle-hexcolor to your project:

``` sh
mulle-sde add github:mulle-gfx/mulle-hexcolor
```

To only add the sources of mulle-hexcolor with dependency
sources use [clib](https://github.com/clibs/clib):


``` sh
clib install --out src/mulle-gfx mulle-gfx/mulle-hexcolor
```

Add `-isystem src/mulle-gfx` to your `CFLAGS` and compile all the sources that were downloaded with your project.


## Install

### Install with mulle-sde

Use [mulle-sde](//github.com/mulle-sde) to build and install mulle-hexcolor and all dependencies:

``` sh
mulle-sde install --prefix /usr/local \
   https://github.com/mulle-gfx/mulle-hexcolor/archive/latest.tar.gz
```

### Manual Installation

Install the requirements:

| Requirements                                 | Description
|----------------------------------------------|-----------------------
| [mulle-core](https://github.com/mulle-core/mulle-core)             | 🌋 Almagamated library of mulle-core + mulle-concurrent + mulle-c

Install **mulle-hexcolor** into `/usr/local` with [cmake](https://cmake.org):

``` sh
cmake -B build \
      -DCMAKE_INSTALL_PREFIX=/usr/local \
      -DCMAKE_PREFIX_PATH=/usr/local \
      -DCMAKE_BUILD_TYPE=Release &&
cmake --build build --config Release &&
cmake --install build --config Release
```


## Author

[Nat!](https://mulle-kybernetik.com/weblog) for Mulle kybernetiK  



