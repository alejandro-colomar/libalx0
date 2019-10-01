/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdlib/strto/strtof_s.h */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stddef.h>

#include "libalx/base/stdlib/strto/strtoi_s.h"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
/* Rename without alx_ prefix */
#if defined(ALX_NO_PREFIX)
#define strtod_s(num, str, read)	alx_strtod_s(num, str, read)
#define strtof_s(num, str, read)	alx_strtof_s(num, str, read)
#define strtold_s(num, str, read)	alx_strtold_s(num, str, read)
#endif


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/
/*
 * `errno` needs to be cleared before calling these functions.  If not, false
 * negatives could happen (the function succeds, but it reports error).
 */
__attribute__((nonnull(1, 2), warn_unused_result))
int	alx_strtod_s	(double *restrict num, const char *restrict str,
			 ptrdiff_t *restrict read);
__attribute__((nonnull(1, 2), warn_unused_result))
int	alx_strtof_s	(float *restrict num, const char *restrict str,
			 ptrdiff_t *restrict read);
__attribute__((nonnull(1, 2), warn_unused_result))
int	alx_strtold_s	(long double *restrict num, const char *restrict str,
			 ptrdiff_t *restrict read);

__attribute__((nonnull, warn_unused_result))
inline
int	alx_strtof_status	(const char *restrict str,
				 const char *restrict endptr,
				 int errno_after, int errno_before);


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/
inline
int	alx_strtof_status	(const char *restrict str,
				 const char *restrict endptr,
				 int errno_after, int errno_before)
{
	return	alx_strtol_status(str, endptr, errno_after, errno_before);
}


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
