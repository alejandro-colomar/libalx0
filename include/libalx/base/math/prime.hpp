/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/math/prime.hpp */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstdbool>
#include <cstddef>
#include <cstdint>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#define	PRIME_NUMS_QTY_8b	(54)
#define	PRIME_NUMS_QTY_16b	(6542)
#define	PRIME_NUMBERS_QTY_32b	(203280221)


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
extern	"C"
{
extern	const uint8_t	alx_prime_8b[PRIME_NUMS_QTY_8b];
extern	uint16_t	alx_prime_16b[PRIME_NUMS_QTY_16b];


void	alx_prime_16b_init	(void);

[[gnu::const]]
ptrdiff_t	alx_prime_index_8b	(uint8_t n);
[[gnu::const]]
ptrdiff_t	alx_prime_index_16b	(uint16_t n);
}


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
namespace alx {


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
