/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_STRING_STRCHR_HPP
#define ALX_STRING_STRCHR_HPP


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
ptrdiff_t alx_strcasechr	(const char *restrict str, char c);
ptrdiff_t alx_strrcasechr	(const char *restrict str, char c);
ptrdiff_t alx_strcasechrnul	(const char *restrict str, char c);
ptrdiff_t alx_strrcasechrnul	(const char *restrict str, char c);
ptrdiff_t alx_strncasechr	(ptrdiff_t size, const char *restrict str,
				char c);
ptrdiff_t alx_strnrcasechr	(ptrdiff_t size, const char *restrict str,
				char c);
ptrdiff_t alx_strncasechrnul	(ptrdiff_t size, const char *restrict str,
				char c);
ptrdiff_t alx_strnrcasechrnul	(ptrdiff_t size, const char *restrict str,
				char c);
}


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/
static inline
ptrdiff_t alx_strrchrnul	(const char *restrict str, char c);
static inline
ptrdiff_t alx_strnchr		(ptrdiff_t size, const char *restrict str,
				char c);
static inline
ptrdiff_t alx_strnrchr		(ptrdiff_t size, const char *restrict str,
				char c);
static inline
ptrdiff_t alx_strnchrnul	(ptrdiff_t size, const char *restrict str,
				char c);
static inline
ptrdiff_t alx_strnrchrnul	(ptrdiff_t size, const char *restrict str,
				char c);


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/
static inline
ptrdiff_t alx_strrchrnul	(const char *restrict str, char c)
{
	const char	*p = strrchr(str, c);

	if (!p)
		return	strlen(str);
	return	p - str;
}

static inline
ptrdiff_t alx_strnchr		(ptrdiff_t size, const char *restrict str,
				char c)
{
	const char	len = strnlen(str, size);
	const char	*p = memchr(str, c, len);

	if (!p)
		return	-1;
	return	p - str;
}

static inline
ptrdiff_t alx_strnrchr		(ptrdiff_t size, const char *restrict str,
				char c)
{
	const char	len = strnlen(str, size);
#if defined(_GNU_SOURCE)
	const char	*p = memrchr(str, c, len);

	if (!p)
		return	-1;
	return	p - str;
#else
	for (ptrdiff_t i = len - 1; i >= 0; i--) {
		if (str[i] == c)
			return	i;
	}
	return	-1;
#endif
}

static inline
ptrdiff_t alx_strnchrnul	(ptrdiff_t size, const char *restrict str,
				char c)
{
	const char	len = strnlen(str, size);
	const char	*p = memchr(str, c, len);

	if (!p)
		return	size;
	return	p - str;
}

static inline
ptrdiff_t alx_strnrchrnul	(ptrdiff_t size, const char *restrict str,
				char c)
{
	const char	len = strnlen(str, size);
#if defined(_GNU_SOURCE)
	const char	*p = memrchr(str, c, len);

	if (!p)
		return	len;
	return	p - str;
#else
	for (ptrdiff_t i = len - 1; i >= 0; i--) {
		if (str[i] == c)
			return	i;
	}
	return	len;
#endif
}


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/string/strchr.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
