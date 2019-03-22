/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_MATH_ARRAY_MULTIPLICATION_H
#define ALX_MATH_ARRAY_MULTIPLICATION_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stdint.h>

#include <sys/types.h>


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
int	alx_array_multiplication_uint	(ssize_t n,
					unsigned dest[restrict n],
					const unsigned src1[restrict n],
					const unsigned src2[restrict n]);
int	alx_array_multiplication_int	(ssize_t n,
					int dest[restrict n],
					const int src1[restrict n],
					const int src2[restrict n]);
int	alx_array_multiplication_u8	(ssize_t n,
					uint8_t dest[restrict n],
					const uint8_t src1[restrict n],
					const uint8_t src2[restrict n]);
int	alx_array_multiplication_s8	(ssize_t n,
					int8_t dest[restrict n],
					const int8_t src1[restrict n],
					const int8_t src2[restrict n]);
int	alx_array_multiplication_u16	(ssize_t n,
					uint16_t dest[restrict n],
					const uint16_t src1[restrict n],
					const uint16_t src2[restrict n]);
int	alx_array_multiplication_s16	(ssize_t n,
					int16_t dest[restrict n],
					const int16_t src1[restrict n],
					const int16_t src2[restrict n]);
int	alx_array_multiplication_u32	(ssize_t n,
					uint32_t dest[restrict n],
					const uint32_t src1[restrict n],
					const uint32_t src2[restrict n]);
int	alx_array_multiplication_s32	(ssize_t n,
					int32_t dest[restrict n],
					const int32_t src1[restrict n],
					const int32_t src2[restrict n]);
int	alx_array_multiplication_u64	(ssize_t n,
					uint64_t dest[restrict n],
					const uint64_t src1[restrict n],
					const uint64_t src2[restrict n]);
int	alx_array_multiplication_s64	(ssize_t n,
					int64_t dest[restrict n],
					const int64_t src1[restrict n],
					const int64_t src2[restrict n]);


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/
static inline	void	alx_array_multiplication_ldbl	(ssize_t n,
					long double dest[restrict n],
					const long double src1[restrict n],
					const long double src2[restrict n]);
static inline	void	alx_array_multiplication	(ssize_t n,
					double dest[restrict n],
					const double src1[restrict n],
					const double src2[restrict n]);
static inline	void	alx_array_multiplication_flt	(ssize_t n,
					float dest[restrict n],
					const float src1[restrict n],
					const float src2[restrict n]);


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/
static inline
void	alx_array_multiplication_ldbl	(ssize_t n,
					long double dest[restrict n],
					const long double src1[restrict n],
					const long double src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++)
		dest[i]	= src1[i] * src2[i];
}

static inline
void	alx_array_multiplication	(ssize_t n,
					double dest[restrict n],
					const double src1[restrict n],
					const double src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++)
		dest[i]	= src1[i] * src2[i];
}

static inline
void	alx_array_multiplication_flt	(ssize_t n,
					float dest[restrict n],
					const float src1[restrict n],
					const float src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++)
		dest[i]	= src1[i] * src2[i];
}


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/math/array_multiplication.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/