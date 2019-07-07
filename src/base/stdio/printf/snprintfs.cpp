/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/base/stdio/printf/snprintfs.hpp"

#include <cerrno>
#include <cstdarg>
#include <cstddef>
#include <cstdio>

#include "libalx/base/compiler/restrict.hpp"


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
 ******* static functions (prototypes) ****************************************
 ******************************************************************************/


/******************************************************************************
 ******* global functions *****************************************************
 ******************************************************************************/
int	alx::snprintfs	(char *restrict str,
			 ptrdiff_t *restrict written, ptrdiff_t nmemb,
			 const char *restrict format, ...)
{
	va_list	ap;
	int	len;

	if (nmemb <= 0)
		goto ovf;

	va_start(ap, format);
	len	= vsnprintf(str, nmemb, format, ap);
	va_end(ap);

	if (len < 0)
		goto err;
	if (len >= nmemb)
		goto trunc;
	if (written)
		*written = len;

	return	0;
trunc:
	if (written)
		*written = nmemb - 1;
	errno	= ENOMEM;
	return	1;
ovf:
	errno	= EOVERFLOW;
err:	if (written)
		*written = 0;
	return	-1;
}

int	alx::vsnprintfs	(char *restrict str,
			 ptrdiff_t *restrict written, ptrdiff_t nmemb,
			 const char *restrict format, va_list ap)
{
	int	len;

	if (nmemb <= 0)
		goto ovf;

	len	= vsnprintf(str, nmemb, format, ap);

	if (len < 0)
		goto err;
	if (len >= nmemb)
		goto trunc;
	if (written)
		*written = len;

	return	0;
trunc:
	if (written)
		*written = nmemb - 1;
	errno	= ENOMEM;
	return	1;
ovf:
	errno	= EOVERFLOW;
err:	if (written)
		*written = 0;
	return	-1;
}


/******************************************************************************
 ******* static functions (definitions) ***************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
