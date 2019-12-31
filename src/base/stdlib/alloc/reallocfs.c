/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/base/stdlib/alloc/reallocfs.h"

#include <errno.h>
#include <stddef.h>
#include <stdlib.h>


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
void	*alx_reallocfs__	(void *restrict ptr, size_t size,
				 int *restrict error)
{

	if (!size)
		goto zero;

	ptr	= reallocf(ptr, size);
	if (!ptr)
		goto err;

	return	ptr;
err:
	*error	= -ENOMEM;
	return	NULL;
zero:
	free(ptr);
	*error	= ENOMEM;
	return	NULL;
}


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/