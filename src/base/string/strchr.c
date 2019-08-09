/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/base/string/strchr.h"

#include "ctype.h"
#include "string.h"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enum / struct / union ************************************************
 ******************************************************************************/


/******************************************************************************
 ******* static prototypes ****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* global functions *****************************************************
 ******************************************************************************/
extern
ptrdiff_t alx_strrchrnul	(const char str[restrict], char c);
extern
ptrdiff_t alx_strnchr		(ptrdiff_t size,
				 const char str[static restrict size],
				 char c);
extern
ptrdiff_t alx_strnrchr		(ptrdiff_t size,
				 const char str[static restrict size],
				 char c);
extern
ptrdiff_t alx_strnchrnul	(ptrdiff_t size,
				 const char str[static restrict size],
				 char c);
extern
ptrdiff_t alx_strnrchrnul	(ptrdiff_t size,
				 const char str[static restrict size],
				 char c);

ptrdiff_t alx_strcasechr	(const char str[restrict], char c)
{
	const ptrdiff_t	len = strlen(str);
	char		str_lower[len + 1];
	char		c_lower;
	char		*p;

	for (ptrdiff_t i = 0; i < len; i++)
		str_lower[i]	= tolower((unsigned char)str[i]);
	str_lower[len]	= '\0';
	c_lower		= tolower((unsigned char)c);

	p	= strchr(str_lower, c_lower);

	return	p - str_lower;
}

ptrdiff_t alx_strrcasechr	(const char str[restrict], char c)
{
	const ptrdiff_t	len = strlen(str);
	char		str_lower[len + 1];
	char		c_lower;
	char		*p;

	for (ptrdiff_t i = 0; i < len; i++)
		str_lower[i]	= tolower((unsigned char)str[i]);
	str_lower[len]	= '\0';
	c_lower		= tolower((unsigned char)c);

	p	= strrchr(str_lower, c_lower);

	return	p - str_lower;
}

ptrdiff_t alx_strcasechrnul	(const char str[restrict], char c)
{
	const ptrdiff_t	len = strlen(str);
	char		str_lower[len + 1];
	char		c_lower;
	char		*p;

	for (ptrdiff_t i = 0; i < len; i++)
		str_lower[i]	= tolower((unsigned char)str[i]);
	str_lower[len]	= '\0';
	c_lower		= tolower((unsigned char)c);

#if defined(_GNU_SOURCE)
	p	= strchrnul(str_lower, c_lower);
#else
	p	= strchr(str_lower, c_lower);
	if (!p)
		return	len;
#endif
	return	p - str_lower;
}

ptrdiff_t alx_strrcasechrnul	(const char str[restrict], char c)
{
	const ptrdiff_t	len = strlen(str);
	char		str_lower[len + 1];
	char		c_lower;

	for (ptrdiff_t i = 0; i < len; i++)
		str_lower[i]	= tolower((unsigned char)str[i]);
	str_lower[len]	= '\0';
	c_lower		= tolower((unsigned char)c);

	return	alx_strrchrnul(str_lower, c_lower);
}

ptrdiff_t alx_strncasechr	(ptrdiff_t size, const char str[restrict size],
				 char c)
{
	const ptrdiff_t	len = strnlen(str, size);
	char		str_lower[len + 1];
	char		c_lower;
	char		*p;

	for (ptrdiff_t i = 0; i < len; i++)
		str_lower[i]	= tolower((unsigned char)str[i]);
	str_lower[len]	= '\0';
	c_lower		= tolower((unsigned char)c);

	p	= strchr(str_lower, c_lower);

	return	p - str_lower;
}

ptrdiff_t alx_strnrcasechr	(ptrdiff_t size, const char str[restrict size],
				 char c)
{
	const ptrdiff_t	len = strnlen(str, size);
	char		str_lower[len + 1];
	char		c_lower;
	char		*p;

	for (ptrdiff_t i = 0; i < len; i++)
		str_lower[i]	= tolower((unsigned char)str[i]);
	str_lower[len]	= '\0';
	c_lower		= tolower((unsigned char)c);

	p	= strrchr(str_lower, c_lower);

	return	p - str_lower;
}

ptrdiff_t alx_strncasechrnul	(ptrdiff_t size, const char str[restrict size],
				 char c)
{
	const ptrdiff_t	len = strnlen(str, size);
	char		str_lower[len + 1];
	char		c_lower;
	char		*p;

	for (ptrdiff_t i = 0; i < len; i++)
		str_lower[i]	= tolower((unsigned char)str[i]);
	str_lower[len]	= '\0';
	c_lower		= tolower((unsigned char)c);

#if defined(_GNU_SOURCE)
	p	= strchrnul(str_lower, c_lower);
#else
	p	= strchr(str_lower, c_lower);
	if (!p)
		return	len;
#endif
	return	p - str_lower;
}

ptrdiff_t alx_strnrcasechrnul	(ptrdiff_t size, const char str[restrict size],
				 char c)
{
	const ptrdiff_t	len = strnlen(str, size);
	char		str_lower[len + 1];
	char		c_lower;
	char		*p;

	for (ptrdiff_t i = 0; i < len; i++)
		str_lower[i]	= tolower((unsigned char)str[i]);
	str_lower[len]	= '\0';
	c_lower		= tolower((unsigned char)c);

	p	= strrchr(str_lower, c_lower);
	if (!p)
		return	len;
	return	p - str_lower;
}


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
