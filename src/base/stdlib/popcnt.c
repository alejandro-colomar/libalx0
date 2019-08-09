/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/base/stdlib/popcnt.h"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enum / struct / union ************************************************
 ******************************************************************************/


/******************************************************************************
 ******* static prototypes ****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* global functions *****************************************************
 ******************************************************************************/
extern
uint8_t		popcnt_u8	(uint8_t n);
extern
uint16_t	popcnt_u16	(uint16_t n);
extern
uint32_t	popcnt_u32	(uint32_t n);
extern
uint64_t	popcnt_u64	(uint64_t n);
#if defined(uint128_t)
extern
uint64_t	popcnt_u128	(uint128_t n);
#endif
#if defined(uint256_t)
extern
uint64_t	popcnt_u256	(uint256_t n);
#endif


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
