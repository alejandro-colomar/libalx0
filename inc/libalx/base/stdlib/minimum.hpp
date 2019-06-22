/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_STDLIB_MINIMUM_HPP
#define ALX_STDLIB_MINIMUM_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstddef>
#include <cstdint>

#include "libalx/base/stddef/restrict.hpp"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#define	ALX_MIN(a, b) (							\
{									\
	auto	a_	= (a);						\
	auto	b_	= (b);						\
									\
	(a_ < b_) ? a_ : b_;						\
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
ptrdiff_t	alx_minimum_ldbl	(ptrdiff_t nmemb,
					const long double *restrict arr);
ptrdiff_t	alx_minimum		(ptrdiff_t nmemb,
					const double *restrict arr);
ptrdiff_t	alx_minimum_f		(ptrdiff_t nmemb,
					const float *restrict arr);
ptrdiff_t	alx_minimum_uint	(ptrdiff_t nmemb,
					const unsigned *restrict arr);
ptrdiff_t	alx_minimum_int		(ptrdiff_t nmemb,
					const int *restrict arr);
ptrdiff_t	alx_minimum_u8		(ptrdiff_t nmemb,
					const uint8_t *restrict arr);
ptrdiff_t	alx_minimum_s8		(ptrdiff_t nmemb,
					const int8_t *restrict arr);
ptrdiff_t	alx_minimum_u16		(ptrdiff_t nmemb,
					const uint16_t *restrict arr);
ptrdiff_t	alx_minimum_s16		(ptrdiff_t nmemb,
					const int16_t *restrict arr);
ptrdiff_t	alx_minimum_u32		(ptrdiff_t nmemb,
					const uint32_t *restrict arr);
ptrdiff_t	alx_minimum_s32		(ptrdiff_t nmemb,
					const int32_t *restrict arr);
ptrdiff_t	alx_minimum_u64		(ptrdiff_t nmemb,
					const uint64_t *restrict arr);
ptrdiff_t	alx_minimum_s64		(ptrdiff_t nmemb,
					const int64_t *restrict arr);
ptrdiff_t	alx_minimum_pdif	(ptrdiff_t nmemb,
					const ptrdiff_t *restrict arr);
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
#endif		/* libalx/base/stdlib/minimum.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
