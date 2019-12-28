/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdlib/alloc/reallocfs.h */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stddef.h>
#include <stdlib.h>


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
__attribute__((nonnull, warn_unused_result))
inline
int	alx_reallocfs	(void **restrict ptr, size_t size);


/******************************************************************************
 ******* static inline ********************************************************
 ******************************************************************************/
/* Rename without alx_ prefix */
#if defined(ALX_NO_PREFIX)
__attribute__((always_inline, nonnull, warn_unused_result))
static inline
int	reallocfs	(void **restrict ptr, size_t size)
{
	return	alx_reallocfs(ptr, size);
}
#endif


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/
inline
int	alx_reallocfs	(void **restrict ptr, size_t size)
{

	*ptr	= reallocf(*ptr, size);

	return	!*ptr;
}


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
