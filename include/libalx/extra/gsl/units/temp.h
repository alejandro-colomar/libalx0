/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/gsl/units/temp.h */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#define ALX_GSL_UNITS_0K_TO_C_LDBL	(-273.15L)
#define ALX_GSL_UNITS_0K_TO_C		(-273.15)
#define ALX_GSL_UNITS_0K_TO_C_FLT	(-273.15f)

#define ALX_GSL_UNITS_0K_TO_F_LDBL	(-459.67L)
#define ALX_GSL_UNITS_0K_TO_F		(-459.67)
#define ALX_GSL_UNITS_0K_TO_F_FLT	(-459.67f)

#define ALX_GSL_UNITS_R_TO_K_LDBL	(5.0L / 9.0L)
#define ALX_GSL_UNITS_R_TO_K		(5.0 / 9.0)
#define ALX_GSL_UNITS_R_TO_K_FLT	(5.0f / 9.0f)


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/
__attribute__((const))
inline
long double	alx_gsl_units_K_to_C_ldbl	(long double k);
__attribute__((const))
inline
double		alx_gsl_units_K_to_C		(double k);
__attribute__((const))
inline
float		alx_gsl_units_K_to_C_flt	(float k);

__attribute__((const))
inline
long double	alx_gsl_units_C_to_K_ldbl	(long double c);
__attribute__((const))
inline
double		alx_gsl_units_C_to_K		(double c);
__attribute__((const))
inline
float		alx_gsl_units_C_to_K_flt	(float c);

__attribute__((const))
inline
long double	alx_gsl_units_K_to_F_ldbl	(long double k);
__attribute__((const))
inline
double		alx_gsl_units_K_to_F		(double k);
__attribute__((const))
inline
float		alx_gsl_units_K_to_F_flt	(float k);

__attribute__((const))
inline
long double	alx_gsl_units_F_to_K_ldbl	(long double f);
__attribute__((const))
inline
double		alx_gsl_units_F_to_K		(double f);
__attribute__((const))
inline
float		alx_gsl_units_F_to_K_flt	(float f);

__attribute__((const))
inline
long double	alx_gsl_units_K_to_R_ldbl	(long double k);
__attribute__((const))
inline
double		alx_gsl_units_K_to_R		(double k);
__attribute__((const))
inline
float		alx_gsl_units_K_to_R_flt	(float k);

__attribute__((const))
inline
long double	alx_gsl_units_R_to_K_ldbl	(long double r);
__attribute__((const))
inline
double		alx_gsl_units_R_to_K		(double r);
__attribute__((const))
inline
float		alx_gsl_units_R_to_K_flt	(float r);


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/
inline
long double	alx_gsl_units_K_to_C_ldbl	(long double k)
{
	return	k + ALX_GSL_UNITS_0K_TO_C_LDBL;
}

inline
double		alx_gsl_units_K_to_C		(double k)
{
	return	k + ALX_GSL_UNITS_0K_TO_C;
}

inline
float		alx_gsl_units_K_to_C_flt	(float k)
{
	return	k + ALX_GSL_UNITS_0K_TO_C_FLT;
}


inline
long double	alx_gsl_units_C_to_K_ldbl	(long double c)
{
	return	c - ALX_GSL_UNITS_0K_TO_C_LDBL;
}

inline
double		alx_gsl_units_C_to_K		(double c)
{
	return	c - ALX_GSL_UNITS_0K_TO_C;
}

inline
float		alx_gsl_units_C_to_K_flt	(float c)
{
	return	c - ALX_GSL_UNITS_0K_TO_C_FLT;
}


inline
long double	alx_gsl_units_K_to_F_ldbl	(long double k)
{
	return	k / ALX_GSL_UNITS_R_TO_K_LDBL + ALX_GSL_UNITS_0K_TO_F_LDBL;
}

inline
double		alx_gsl_units_K_to_F		(double k)
{
	return	k / ALX_GSL_UNITS_R_TO_K + ALX_GSL_UNITS_0K_TO_F;
}

inline
float		alx_gsl_units_K_to_F_flt	(float k)
{
	return	k / ALX_GSL_UNITS_R_TO_K_FLT + ALX_GSL_UNITS_0K_TO_F_FLT;
}


inline
long double	alx_gsl_units_F_to_K_ldbl	(long double f)
{
	return	(f - ALX_GSL_UNITS_0K_TO_F_LDBL) * ALX_GSL_UNITS_R_TO_K_LDBL;
}

inline
double		alx_gsl_units_F_to_K		(double f)
{
	return	(f - ALX_GSL_UNITS_0K_TO_F) * ALX_GSL_UNITS_R_TO_K;
}

inline
float		alx_gsl_units_F_to_K_flt	(float f)
{
	return	(f - ALX_GSL_UNITS_0K_TO_F_FLT) * ALX_GSL_UNITS_R_TO_K_FLT;
}


inline
long double	alx_gsl_units_K_to_R_ldbl	(long double k)
{
	return	k / ALX_GSL_UNITS_R_TO_K_LDBL;
}

inline
double		alx_gsl_units_K_to_R		(double k)
{
	return	k / ALX_GSL_UNITS_R_TO_K;
}

inline
float		alx_gsl_units_K_to_R_flt	(float k)
{
	return	k / ALX_GSL_UNITS_R_TO_K_FLT;
}


inline
long double	alx_gsl_units_R_to_K_ldbl	(long double r)
{
	return	r * ALX_GSL_UNITS_R_TO_K_LDBL;
}

inline
double		alx_gsl_units_R_to_K		(double r)
{
	return	r * ALX_GSL_UNITS_R_TO_K;
}

inline
float		alx_gsl_units_R_to_K_flt	(float r)
{
	return	r * ALX_GSL_UNITS_R_TO_K_FLT;
}


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/