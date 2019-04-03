/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_STRING_STRGREP_HPP
#define ALX_STRING_STRGREP_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstddef>
#include <cstring>

#include "libalx/base/stddef/restrict.hpp"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* structs / unions *****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* variables ************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern functions *****************************************************
 ******************************************************************************/
extern	"C"
{
ptrdiff_t	alx_strnfgrep		(ptrdiff_t size,
					char *restrict dest,
					const char *restrict src,
					const char *restrict pattern);
ptrdiff_t	alx_strlfgrep		(ptrdiff_t size,
					char *restrict dest,
					const char *restrict src,
					const char *restrict pattern);
ptrdiff_t	alx_strncasefgrep	(ptrdiff_t size,
					char *restrict dest,
					const char *restrict src,
					const char *restrict pattern);
ptrdiff_t	alx_strlcasefgrep	(ptrdiff_t size,
					char *restrict dest,
					const char *restrict src,
					const char *restrict pattern);
ptrdiff_t	alx_strnfgrepv		(ptrdiff_t size,
					char *restrict dest,
					const char *restrict src,
					const char *restrict pattern);
ptrdiff_t	alx_strlfgrepv		(ptrdiff_t size,
					char *restrict dest,
					const char *restrict src,
					const char *restrict pattern);
ptrdiff_t	alx_strncasefgrepv	(ptrdiff_t size,
					char *restrict dest,
					const char *restrict src,
					const char *restrict pattern);
ptrdiff_t	alx_strlcasefgrepv	(ptrdiff_t size,
					char *restrict dest,
					const char *restrict src,
					const char *restrict pattern);
}


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/string/strgrep.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
