/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_MATH_ARITHMETIC_MEAN_HPP
#define ALX_MATH_ARITHMETIC_MEAN_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstddef>
#include <cstdint>

#include "libalx/base/stddef/restrict.hpp"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#define	AVGfast(a, b) (							\
{									\
	(a + b) / 2.0;							\
}									\
)

#define	AVGsafe(a, b) (							\
{									\
	auto	_a	= (a);						\
	auto	_b	= (b);						\
									\
	(_a / 2) + (_b / 2) + (((_a % 2) + (_b % 2)) / 2);		\
}									\
)


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
long double	alx_arithmetic_mean_ldbl(ptrdiff_t nmemb,
					const long double *restrict arr);
double		alx_arithmetic_mean	(ptrdiff_t nmemb,
					const double *restrict arr);
float		alx_arithmetic_mean_flt	(ptrdiff_t nmemb,
					const float *restrict arr);
double		alx_arithmetic_mean_uint(ptrdiff_t nmemb,
					const unsigned *restrict arr);
double		alx_arithmetic_mean_int	(ptrdiff_t nmemb,
					const int *restrict arr);
double		alx_arithmetic_mean_u8	(ptrdiff_t nmemb,
					const uint8_t *restrict arr);
double		alx_arithmetic_mean_s8	(ptrdiff_t nmemb,
					const int8_t *restrict arr);
double		alx_arithmetic_mean_u16	(ptrdiff_t nmemb,
					const uint16_t *restrict arr);
double		alx_arithmetic_mean_s16	(ptrdiff_t nmemb,
					const int16_t *restrict arr);
double		alx_arithmetic_mean_u32	(ptrdiff_t nmemb,
					const uint32_t *restrict arr);
double		alx_arithmetic_mean_s32	(ptrdiff_t nmemb,
					const int32_t *restrict arr);
double		alx_arithmetic_mean_u64	(ptrdiff_t nmemb,
					const uint64_t *restrict arr);
double		alx_arithmetic_mean_s64	(ptrdiff_t nmemb,
					const int64_t *restrict arr);
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
#endif		/* libalx/base/math/arithmetic_mean.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
