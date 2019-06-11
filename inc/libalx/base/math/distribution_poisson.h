/******************************************************************************
 *	Copyright (C) 2015	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_MATH_DISTRIBUTION_POISSON_H
#define ALX_MATH_DISTRIBUTION_POISSON_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <errno.h>
#include <math.h>


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


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/
static inline
long double	alx_ldbl_distribution_poisson_E	(long double l);
static inline
double		alx_distribution_poisson_E	(double l);
static inline
float		alx_flt_distribution_poisson_E	(float l);

static inline
long double	alx_ldbl_distribution_poisson_Var(long double l);
static inline
double		alx_distribution_poisson_Var	(double l);
static inline
float		alx_flt_distribution_poisson_Var(float l);


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/
static inline
long double	alx_ldbl_distribution_poisson_E	(long double l)
{

	if (l < 0.0L) {
		errno	= EDOM;
		return	nanl("");
	}

	return	l;
}
static inline
double		alx_distribution_poisson_E	(double l)
{

	if (l < 0.0) {
		errno	= EDOM;
		return	nan("");
	}

	return	l;
}
static inline
float		alx_flt_distribution_poisson_E	(float l)
{

	if (l < 0.0f) {
		errno	= EDOM;
		return	nanf("");
	}

	return	l;
}

static inline
long double	alx_ldbl_distribution_poisson_Var(long double l)
{

	if (l < 0.0L) {
		errno	= EDOM;
		return	nanl("");
	}

	return	l;
}
static inline
double		alx_distribution_poisson_Var	(double l)
{

	if (l < 0.0) {
		errno	= EDOM;
		return	nan("");
	}

	return	l;
}
static inline
float		alx_flt_distribution_poisson_Var(float l)
{

	if (l < 0.0f) {
		errno	= EDOM;
		return	nanf("");
	}

	return	l;
}


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/math/distribution_poisson.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
