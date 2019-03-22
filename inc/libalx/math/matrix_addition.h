/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_MATH_MATRIX_ADDITION_H
#define ALX_MATH_MATRIX_ADDITION_H


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
int	alx_matrix_addition_uint(ssize_t n,
					unsigned dest[n],
					const unsigned src1[n],
					const unsigned src2[n]);
int	alx_matrix_addition_int	(ssize_t n,
					int dest[n],
					const int src1[n],
					const int src2[n]);
int	alx_matrix_addition_u8	(ssize_t n,
					uint8_t dest[n],
					const uint8_t src1[n],
					const uint8_t src2[n]);
int	alx_matrix_addition_s8	(ssize_t n,
					int8_t dest[n],
					const int8_t src1[n],
					const int8_t src2[n]);
int	alx_matrix_addition_u16	(ssize_t n,
					uint16_t dest[n],
					const uint16_t src1[n],
					const uint16_t src2[n]);
int	alx_matrix_addition_s16	(ssize_t n,
					int16_t dest[n],
					const int16_t src1[n],
					const int16_t src2[n]);
int	alx_matrix_addition_u32	(ssize_t n,
					uint32_t dest[n],
					const uint32_t src1[n],
					const uint32_t src2[n]);
int	alx_matrix_addition_s32	(ssize_t n,
					int32_t dest[n],
					const int32_t src1[n],
					const int32_t src2[n]);
int	alx_matrix_addition_u64	(ssize_t n,
					uint64_t dest[n],
					const uint64_t src1[n],
					const uint64_t src2[n]);
int	alx_matrix_addition_s64	(ssize_t n,
					int64_t dest[n],
					const int64_t src1[n],
					const int64_t src2[n]);


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/
static inline	void	alx_matrix_addition_ldbl(ssize_t n,
					long double dest[n],
					const long double src1[n],
					const long double src2[n]);
static inline	void	alx_matrix_addition	(ssize_t n,
					double dest[n],
					const double src1[n],
					const double src2[n]);
static inline	void	alx_matrix_addition_flt	(ssize_t n,
					float dest[n],
					const float src1[n],
					const float src2[n]);


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/
static inline
void	alx_matrix_addition_ldbl	(ssize_t n,
					long double dest[n],
					const long double src1[n],
					const long double src2[n])
{

	for (ssize_t i = 0; i < n; i++)
		dest[i]	= src1[i] + src2[i];
}

static inline
void	alx_matrix_addition		(ssize_t n,
					double dest[n],
					const double src1[n],
					const double src2[n])
{

	for (ssize_t i = 0; i < n; i++)
		dest[i]	= src1[i] + src2[i];
}

static inline
void	alx_matrix_addition_flt		(ssize_t n,
					float dest[n],
					const float src1[n],
					const float src2[n])
{

	for (ssize_t i = 0; i < n; i++)
		dest[i]	= src1[i] + src2[i];
}



/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/math/matrix_addition.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
