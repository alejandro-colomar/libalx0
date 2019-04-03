/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_STDLIB_LOCAL_MAXIMA_H
#define ALX_STDLIB_LOCAL_MAXIMA_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


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
void	alx_local_maxima_ldbl	(ptrdiff_t rows, ptrdiff_t cols,
				const long double arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);
void	alx_local_maxima	(ptrdiff_t rows, ptrdiff_t cols,
				const double arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);
void	alx_local_maxima_f	(ptrdiff_t rows, ptrdiff_t cols,
				const float arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);
void	alx_local_maxima_uint	(ptrdiff_t rows, ptrdiff_t cols,
				const unsigned arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);
void	alx_local_maxima_int	(ptrdiff_t rows, ptrdiff_t cols,
				const int arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);
void	alx_local_maxima_u8	(ptrdiff_t rows, ptrdiff_t cols,
				const uint8_t arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);
void	alx_local_maxima_s8	(ptrdiff_t rows, ptrdiff_t cols,
				const int8_t arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);
void	alx_local_maxima_u16	(ptrdiff_t rows, ptrdiff_t cols,
				const uint16_t arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);
void	alx_local_maxima_s16	(ptrdiff_t rows, ptrdiff_t cols,
				const int16_t arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);
void	alx_local_maxima_u32	(ptrdiff_t rows, ptrdiff_t cols,
				const uint32_t arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);
void	alx_local_maxima_s32	(ptrdiff_t rows, ptrdiff_t cols,
				const int32_t arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);
void	alx_local_maxima_u64	(ptrdiff_t rows, ptrdiff_t cols,
				const uint64_t arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);
void	alx_local_maxima_s64	(ptrdiff_t rows, ptrdiff_t cols,
				const int64_t arr_in[restrict rows][cols],
				bool arr_out[restrict rows][cols]);


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/stdlib/local_maxima.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/