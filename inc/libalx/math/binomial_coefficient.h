/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_MATH_BINOMIAL_COEFFICIENT_H
#define ALX_MATH_BINOMIAL_COEFFICIENT_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stdint.h>

#include "libalx/math/prime.h"


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
long double	alx_ldbl_binomial_coefficient		(int16_t n, int16_t k);
double		alx_binomial_coefficient		(int16_t n, int16_t k);
float		alx_flt_binomial_coefficient		(int16_t n, int16_t k);
int		alx_binomial_coefficient_factorized	(int16_t n, int16_t k,
				int8_t (*restrict pf)[PRIME_NUMBERS_QTY_S16]);


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/math/binomial_coefficient.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/