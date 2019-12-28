/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdlib/alloc/mallocarrays.h */


/******************************************************************************
 ******* about ****************************************************************
 ******************************************************************************/
/*
 * [[gnu::nonnull]] [[gnu::warn_unused_result]]
 * int	mallocarrays(type **restrict ptr, ptrdiff_t nmemb);
 *
 * Safe & simple wrapper for `mallocarray()`.
 *
 * Features:
 * - Safely computes the element size (second argument to `mallocarray()`)
 *	so the user can't make mistakes.
 * - Returns non-zero on error.
 * - Doesn't cast
 * - The pointer stored in `*ptr` is always a valid pointer or NULL.
 *
 * example:
 *	#define ALX_NO_PREFIX
 *	#include <libalx/base/stdlib/alloc/mallocarrays.h>
 *
 *		int *arr;
 *
 *		if (mallocarrays(&arr, 7))		// int arr[7];
 *			goto err;
 *
 *		// `arr` has been succesfully allocated here
 *		free(arr);
 *	err:
 *		// No memory leaks
 */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <errno.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#include "libalx/base/stdlib/alloc/mallocarray.h"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
/*
 * mallocarrays()
 *
 * ptr:		Memory will be allocated, and a pointer to it will be stored
 *		in *ptr.
 * nmemb:	Number of elements in the array.
 *
 * return:
 *	0:		OK.
 *	!= 0:		Failed.
 */
#define alx_mallocarrays(ptr, nmemb)	(				\
{									\
	__auto_type	ptr_	= (ptr);				\
									\
	*ptr_	= alx_mallocarray(nmemb, sizeof(**ptr_));		\
									\
	!(*ptr_);							\
}									\
)


/* Rename without alx_ prefix */
#if defined(ALX_NO_PREFIX)
#define mallocarrays(ptr, nmemb)	alx_mallocarrays(ptr, nmemb)
#endif


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* function prototypes **************************************************
 ******************************************************************************/


/******************************************************************************
 ******* inline functions *****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
