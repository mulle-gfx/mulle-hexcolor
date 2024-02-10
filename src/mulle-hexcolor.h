#ifndef mulle_hexcolor_h__
#define mulle_hexcolor_h__

#include <mulle-core/mulle-core.h>
#include <stdint.h>

/*
 *  (c) 2021 nat Mulle kybernetiK
 *
 *  version:  major, minor, patch
 */
#define MULLE__HEXCOLOR_VERSION  ((0UL << 20) | (0 << 8) | 1)


#include "CGHexColor.h"
#include "CGHexColorConstants.h"
#include "CGHexColorNames.h"

/*
 * The versioncheck header can be generated with
 * mulle-project-dependency-versions, but it is optional.
 */
#ifdef __has_include
# if __has_include( "_mulle-hexcolor-versioncheck.h")
#  include "_mulle-hexcolor-versioncheck.h"
# endif
#endif

#endif


/*
 * extension : mulle-sde/c-demo
 * directory : demo/library
 * template  : .../PROJECT_NAME.h
 * Suppress this comment with `export MULLE_SDE_GENERATE_FILE_COMMENTS=NO`
 */
