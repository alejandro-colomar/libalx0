/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_STDIO_PRINTF_SNPRINTFS_H
#define ALX_STDIO_PRINTF_SNPRINTFS_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stdarg.h>
#include <stddef.h>


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
 ******* function prototypes **************************************************
 ******************************************************************************/
int	alx_snprintfs	(char str[restrict],
			 ptrdiff_t *restrict written, ptrdiff_t nmemb,
			 const char *restrict format, ...)
	__attribute__((warn_unused_result));
int	alx_vsnprintfs	(char str[restrict],
			 ptrdiff_t *restrict written, ptrdiff_t nmemb,
			 const char *restrict format, va_list ap)
	__attribute__((nonnull(1, 4), format(printf, 4, 0),
		       warn_unused_result));


/******************************************************************************
 ******* inline functions *****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/stdio/printf/snprintfs.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
