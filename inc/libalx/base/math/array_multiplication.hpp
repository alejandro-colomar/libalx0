/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_MATH_ARRAY_MULTIPLICATION_HPP
#define ALX_MATH_ARRAY_MULTIPLICATION_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstddef>
#include <cstdint>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
namespace alx {


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
int	alx_array_multiplication_uint	(ptrdiff_t nmemb,
					 unsigned dest[],
					 const unsigned src1[],
					 const unsigned src2[])
	__attribute__((nonnull));
int	alx_array_multiplication_int	(ptrdiff_t nmemb,
					 int dest[],
					 const int src1[],
					 const int src2[])
	__attribute__((nonnull));
int	alx_array_multiplication_u8	(ptrdiff_t nmemb,
					 uint8_t dest[],
					 const uint8_t src1[],
					 const uint8_t src2[])
	__attribute__((nonnull));
int	alx_array_multiplication_s8	(ptrdiff_t nmemb,
					 int8_t dest[],
					 const int8_t src1[],
					 const int8_t src2[])
	__attribute__((nonnull));
int	alx_array_multiplication_u16	(ptrdiff_t nmemb,
					 uint16_t dest[],
					 const uint16_t src1[],
					 const uint16_t src2[])
	__attribute__((nonnull));
int	alx_array_multiplication_s16	(ptrdiff_t nmemb,
					 int16_t dest[],
					 const int16_t src1[],
					 const int16_t src2[])
	__attribute__((nonnull));
int	alx_array_multiplication_u32	(ptrdiff_t nmemb,
					 uint32_t dest[],
					 const uint32_t src1[],
					 const uint32_t src2[])
	__attribute__((nonnull));
int	alx_array_multiplication_s32	(ptrdiff_t nmemb,
					 int32_t dest[],
					 const int32_t src1[],
					 const int32_t src2[])
	__attribute__((nonnull));
int	alx_array_multiplication_u64	(ptrdiff_t nmemb,
					 uint64_t dest[],
					 const uint64_t src1[],
					 const uint64_t src2[])
	__attribute__((nonnull));
int	alx_array_multiplication_s64	(ptrdiff_t nmemb,
					 int64_t dest[],
					 const int64_t src1[],
					 const int64_t src2[])
	__attribute__((nonnull));
}


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/
static inline
void	array_multiplication_ldbl	(ptrdiff_t nmemb,
					 long double dest[],
					 const long double src1[],
					 const long double src2[])
	__attribute__((nonnull));
static inline
void	array_multiplication		(ptrdiff_t nmemb,
					 double dest[],
					 const double src1[],
					 const double src2[])
	__attribute__((nonnull));
static inline
void	array_multiplication_flt	(ptrdiff_t nmemb,
					 float dest[],
					 const float src1[],
					 const float src2[])
	__attribute__((nonnull));


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/
static inline
void	array_multiplication_ldbl	(ptrdiff_t nmemb,
					 long double dest[],
					 const long double src1[],
					 const long double src2[])
{

	for (ptrdiff_t i = 0; i < nmemb; i++)
		dest[i]	= src1[i] * src2[i];
}

static inline
void	array_multiplication		(ptrdiff_t nmemb,
					 double dest[],
					 const double src1[],
					 const double src2[])
{

	for (ptrdiff_t i = 0; i < nmemb; i++)
		dest[i]	= src1[i] * src2[i];
}

static inline
void	array_multiplication_flt	(ptrdiff_t nmemb,
					 float dest[],
					 const float src1[],
					 const float src2[])
{

	for (ptrdiff_t i = 0; i < nmemb; i++)
		dest[i]	= src1[i] * src2[i];
}


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace alx */


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/math/array_multiplication.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
