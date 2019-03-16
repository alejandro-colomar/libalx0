/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_BASE_MATH_SCALE_LINEAR_HPP
#define ALX_BASE_MATH_SCALE_LINEAR_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstdint>


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
 ******* extern functions *****************************************************
 ******************************************************************************/
extern	"C"
{
long double	alx_scale_linear_ldbl	(long double input,
					long double in_0, long double in_1,
					long double out_0, long double out_1);
double		alx_scale_linear	(double input,
					double in_0, double in_1,
					double out_0, double out_1);
float		alx_scale_linear_f	(float input,
					float in_0, float in_1,
					float out_0, float out_1);
int		alx_scale_linear_int	(int input,
					int in_0, int in_1,
					int out_0, int out_1);
int8_t		alx_scale_linear_s8	(int8_t input,
					int8_t in_0, int8_t in_1,
					int8_t out_0, int8_t out_1);
int16_t		alx_scale_linear_s16	(int16_t input,
					int16_t in_0, int16_t in_1,
					int16_t out_0, int16_t out_1);
int32_t		alx_scale_linear_s32	(int32_t input,
					int32_t in_0, int32_t in_1,
					int32_t out_0, int32_t out_1);
int64_t		alx_scale_linear_s64	(int64_t input,
					int64_t in_0, int64_t in_1,
					int64_t out_0, int64_t out_1);
}


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/math/scale_linear.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
