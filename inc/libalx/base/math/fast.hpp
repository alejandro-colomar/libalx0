/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_MATH_FAST_HPP
#define ALX_MATH_FAST_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cfloat>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#if	(FLT_EVAL_METHOD == 0)
#define PRIflt		"f"
#define SCNflt		"f"
#define PRIdbl		"lf"
#define SCNdbl		"lf"

#elif	(FLT_EVAL_METHOD == 1)
#define PRIflt		"lf"
#define SCNflt		"lf"
#define PRIdbl		"lf"
#define SCNdbl		"lf"

#elif	(FLT_EVAL_METHOD == 2)
#define PRIflt		"Lf"
#define SCNflt		"Lf"
#define PRIdbl		"Lf"
#define SCNdbl		"Lf"
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
#endif		/* libalx/base/math/fast.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
