/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/extra/gmp/mpz/misc.h"

#include <stdbool.h>

#include <gmp.h>


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
bool	alx_mpz_fits_u64	(const mpz_t op);
extern
bool	alx_mpz_fits_s64	(const mpz_t op);
extern
bool	alx_mpz_fits_u32	(const mpz_t op);
extern
bool	alx_mpz_fits_s32	(const mpz_t op);
extern
bool	alx_mpz_fits_u16	(const mpz_t op);
extern
bool	alx_mpz_fits_s16	(const mpz_t op);


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
