/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdlib/popcnt.h */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stdint.h>

#include <immintrin.h>
#include <nmmintrin.h>

#include "libalx/base/stdint/types.h"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* function prototypes **************************************************
 ******************************************************************************/
__attribute__((const))
inline
uint8_t		popcnt_u8	(uint8_t n);
__attribute__((const))
inline
uint16_t	popcnt_u16	(uint16_t n);
__attribute__((const))
inline
uint32_t	popcnt_u32	(uint32_t n);
__attribute__((const))
inline
uint64_t	popcnt_u64	(uint64_t n);
__attribute__((const))
#if defined(uint128_t)
__attribute__((const))
inline
uint64_t	popcnt_u128	(uint128_t n);
#endif
#if defined(uint256_t)
__attribute__((const))
inline
uint64_t	popcnt_u256	(uint256_t n);
#endif


/******************************************************************************
 ******* inline functions *****************************************************
 ******************************************************************************/
inline
uint8_t		popcnt_u8	(uint8_t n)
{

	return	_mm_popcnt_u64(n);
}

inline
uint16_t	popcnt_u16	(uint16_t n)
{

	return	_mm_popcnt_u64(n);
}

inline
uint32_t	popcnt_u32	(uint32_t n)
{

	return	_mm_popcnt_u64(n);
}

inline
uint64_t	popcnt_u64	(uint64_t n)
{

	return	_mm_popcnt_u64(n);
}

#if defined(uint128_t)
inline
uint64_t	popcnt_u128	(uint128_t n)
{
	const	uint_fast64_t	cnt_a	= popcnt_u64((uint64_t)n);
	const	uint_fast64_t	cnt_b	= popcnt_u64((uint64_t)(n >> 64));
	const	uint_fast64_t	cnt	= cnt_a + cnt_b;

	return	cnt;
}
#endif

#if defined(uint256_t)
inline
uint64_t	popcnt_u256	(uint256_t n)
{
	const	uint_fast64_t	cnt_a	= popcnt_u64((uint64_t)n);
	const	uint_fast64_t	cnt_b	= popcnt_u64((uint64_t)(n >> 64));
	const	uint_fast64_t	cnt_c	= popcnt_u64((uint64_t)(n >> (64 * 2)));
	const	uint_fast64_t	cnt_d	= popcnt_u64((uint64_t)(n >> (64 * 3)));
	const	uint_fast64_t	cnt	= cnt_a + cnt_b + cnt_c + cnt_d;

	return	cnt;
}
#endif


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
