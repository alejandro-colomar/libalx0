/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_MATH_PRIME_DEFACTORIZATION_HPP
#define ALX_MATH_PRIME_DEFACTORIZATION_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstdint>

#include "libalx/base/math/prime.hpp"
#include "libalx/base/stddef/restrict.hpp"


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
long double	alx_ldbl_prime_defactorization_8b(
			const int8_t pf[static restrict PRIME_NUMS_QTY_8b])
		__attribute__((nonnull, pure));
long double	alx_ldbl_prime_defactorization_16b(
			const int16_t pf[static restrict PRIME_NUMS_QTY_16b])
		__attribute__((nonnull, pure));
long double	alx_ldbl_prime_defactorization_32b(
			const int32_t pf[static restrict PRIME_NUMS_QTY_32b])
		__attribute__((nonnull, pure));

double	alx_prime_defactorization_8b(
			const int8_t pf[static restrict PRIME_NUMS_QTY_8b])
	__attribute__((nonnull, pure));
double	alx_prime_defactorization_16b(
			const int16_t pf[static restrict PRIME_NUMS_QTY_16b])
	__attribute__((nonnull, pure));
double	alx_prime_defactorization_32b(
			const int32_t pf[static restrict PRIME_NUMS_QTY_32b])
	__attribute__((nonnull, pure));

float	alx_flt_prime_defactorization_8b(
			const int8_t pf[static restrict PRIME_NUMS_QTY_8b])
	__attribute__((nonnull, pure));
float	alx_flt_prime_defactorization_16b(
			const int16_t pf[static restrict PRIME_NUMS_QTY_16b])
	__attribute__((nonnull, pure));
float	alx_flt_prime_defactorization_32b(
			const int32_t pf[static restrict PRIME_NUMS_QTY_32b])
	__attribute__((nonnull, pure));
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
#endif		/* libalx/base/math/prime_defactorization.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
