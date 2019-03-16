/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_BASE_STDINT_INT128_HPP
#define ALX_BASE_STDINT_INT128_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstdint>


/******************************************************************************
 ******* typedefs *************************************************************
 ******************************************************************************/
/* This is to test if uint128_t already exists */
#if !defined(UINT128_MAX)
	typedef	__uint128_t	uint128_t;
	typedef	__int128_t	int128_t;
#endif


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#if !defined(UINT128_MAX)
	#define UINT128_MAX	(~((uint128_t)0))
#endif
#if !defined(INT128_MAX)
	#define INT128_MAX	((int128_t)(UINT128_MAX >> 1))
#endif
#if !defined(INT128_MIN)
	#define INT128_MIN	((int128_t)(-INT128_MAX - 1))
#endif


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
 ******* extern functions *****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/stdint/int128.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
