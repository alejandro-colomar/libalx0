/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/base/stdio/printf/swnprintf.h"

#include <errno.h>
#include <stdarg.h>
#include <stdio.h>


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
int	alx_swnprintf(char str[restrict], int *restrict written, size_t nmemb,
			char *restrict format, ...)
{
	va_list	ap;
	int	len;

	va_start(ap, format);
	len	= vsnprintf(str, nmemb, format, ap);
	va_end(ap);

	if (written != NULL)
		*written = len;

	if (len < 0)
		goto err;
	if ((unsigned)len >= nmemb)
		goto trunc;

	return	0;
err:
	return	-errno;
trunc:
	if (written)
		*written = nmemb - 1;
	errno	= ENOMEM;
	return	ENOMEM;
}


/******************************************************************************
 ******* static functions (definitions) ***************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
