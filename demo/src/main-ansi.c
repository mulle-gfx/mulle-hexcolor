#include "include-private.h"

#include <stdio.h>

#include "demo-version.h"
#include "CGHexColor.h"
#include "CGHexColorConstants.h"


static CGHexColor   ansi_colors[ 256] =
{
   CGHexColorANSI256Data
};



static void   print_table( char *name, char *infix, int code)
{
   int   i;

   mulle_printf( "   \"%s\": [\n", name);

   for( i = 0; i < 256; i++)
   {
      mulle_printf( "      {");
      mulle_printf( " \"scope\": \"ansi.%s.color%d\",", infix, i);
      mulle_printf( " \"code\": \"\\\\x1b\\\\[%d;5;%dm\",", code, i);
      mulle_printf( " \"color\": \"#%06lx\"", (unsigned long) ansi_colors[ i] >> 8);
      mulle_printf( " }%s\n", i == 255 ? "" : ",");
   }

   mulle_printf( "   ]");
}



int  main( int argc, char *argv[])
{
   mulle_printf( "{\n");
   print_table( "ANSI_FG", "fg", 38);
   mulle_printf( ",\n");
   print_table( "ANSI_BG", "bg", 48);
   mulle_printf( "\n");
   mulle_printf( "}\n");

   return( 0);
}

