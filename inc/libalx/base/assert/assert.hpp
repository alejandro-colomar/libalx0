/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_ASSERT_ASSERT_HPP
#define ALX_ASSERT_ASSERT_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cassert>

#include "libalx/base/compiler/type.hpp"


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
namespace alx {


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#define alx_static_assert_array(a)	do					\
{									\
	static_assert(!alx_same_type((a), &(a)[0]), "Not an array!");	\
} while (0)


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* variables ************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern functions *****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* template (declarations) **********************************************
 ******************************************************************************/


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/


/******************************************************************************
 ******* template (definitions) ***********************************************
 ******************************************************************************/


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/assert/assert.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
