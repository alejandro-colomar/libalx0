/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_ASSERT_ASSERT_H
#define ALX_ASSERT_ASSERT_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <assert.h>

#include "libalx/base/compiler/type.h"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#define alx_static_assert_array(a)	do				\
{									\
									\
	static_assert(!alx_same_type((a), &(a)[0]), "Not a `[]` !");	\
} while (0)

#define alx_static_assert_char_array(a)	do				\
{									\
	alx_static_assert_array(a);					\
	static_assert(__builtin_types_compatible_p(char, typeof((a)[0])),\
						"Not a `char[]` !");	\
} while (0)


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


/******************************************************************************
 ******* inline functions *****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/assert/assert.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
