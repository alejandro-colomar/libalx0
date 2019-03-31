/******************************************************************************
 *	Copyright (C) 2015	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_MATH_DISTRIBUTION_NORMAL_H
#define ALX_MATH_DISTRIBUTION_NORMAL_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#define DIST_NORMAL_u_MIN	(-INFINITY)
#define DIST_NORMAL_u_MAX	(INFINITY)
#define DIST_NORMAL_o2_MIN	(0)
#define DIST_NORMAL_o2_MAX	(INFINITY)
#define DIST_NORMAL_o_MIN	(0)
#define DIST_NORMAL_o_MAX	(INFINITY)


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
long double	alx_ldbl_distribution_normal_A	(long double o);
double		alx_distribution_normal_A	(double o);
float		alx_flt_distribution_normal_A	(float o);

long double	alx_ldbl_distribution_normal_B	(long double u, long double o);
double		alx_distribution_normal_B	(double u, double o);
float		alx_flt_distribution_normal_B	(float u, float o);

long double	alx_ldbl_distribution_normal_Z	(long double a, long double b,
						long double x);
double		alx_distribution_normal_Z	(double a, double b, double x);
float		alx_flt_distribution_normal_Z	(float a, float b, float x);

long double	alx_ldbl_distribution_normal_X	(long double a, long double b,
						long double z);
double		alx_distribution_normal_X	(double a, double b, double z);
float		alx_flt_distribution_normal_X	(float a, float b, float z);


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/math/distribution_normal.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
