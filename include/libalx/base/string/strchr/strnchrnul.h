/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/string/strchr/strnchrnul.h */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stddef.h>
#include <string.h>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/
__attribute__((nonnull, pure))
inline
ptrdiff_t alx_strnchrnul	(ptrdiff_t size,
				 const char str[static restrict size],
				 char c);


/******************************************************************************
 ******* static inline ********************************************************
 ******************************************************************************/
/* Rename without alx_ prefix */
#if defined(ALX_NO_PREFIX)
__attribute__((always_inline, nonnull, pure))
static inline
ptrdiff_t strnchrnul		(ptrdiff_t size,
				 const char str[static restrict size],
				 char c)
{
	return	alx_strnchrnul(size, str, c);
}
#endif


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/
inline
ptrdiff_t alx_strnchrnul	(ptrdiff_t size,
				 const char str[static restrict size],
				 char c)
{
	const char	len = strnlen(str, size);
	const char	*p = memchr(str, c, len);

	if (!p)
		return	len;
	return	p - str;
}


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
