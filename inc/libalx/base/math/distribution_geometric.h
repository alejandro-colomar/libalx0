/******************************************************************************
 *	Copyright (C) 2015	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_MATH_DISTRIBUTION_GEOMETRIC_H
#define ALX_MATH_DISTRIBUTION_GEOMETRIC_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stdint.h>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#define DIST_GEOMETRIC_p_MIN	(0.0)
#define DIST_GEOMETRIC_p_MAX	(1.0)
#define DIST_GEOMETRIC_x_MIN	(0)


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
long double	alx_ldbl_distribution_geometric_P(long double p, int64_t x);
double		alx_distribution_geometric_P	(double p, int32_t x);
float		alx_flt_distribution_geometric_P(float p, int16_t x);

long double	alx_ldbl_distribution_geometric_E(long double p);
double		alx_distribution_geometric_E	(double p);
float		alx_flt_distribution_geometric_E(float p);

long double	alx_ldbl_distribution_geometric_Var(long double p);
double		alx_distribution_geometric_Var	(double p);
float		alx_flt_distribution_geometric_Var(float p);


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/math/distribution_geometric.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/