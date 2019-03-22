/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/math/array_division.h"

#include <errno.h>
#include <stdint.h>

#include <sys/types.h>


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
 ******* static functions (prototypes) ****************************************
 ******************************************************************************/


/******************************************************************************
 ******* global functions *****************************************************
 ******************************************************************************/
int	alx_array_division_uint	(ssize_t n,
				unsigned dest[restrict n],
				const unsigned src1[restrict n],
				const unsigned src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++) {
		if (!src2[i]) {
			errno	= ERANGE;
			return	-1;
		}
		dest[i]	= src1[i] / src2[i];
	}

	return	0;
}

int	alx_array_division_int	(ssize_t n,
				int dest[restrict n],
				const int src1[restrict n],
				const int src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++) {
		if (!src2[i]) {
			errno	= ERANGE;
			return	-1;
		}
		dest[i]	= src1[i] / src2[i];
	}

	return	0;
}

int	alx_array_division_u8	(ssize_t n,
				uint8_t dest[restrict n],
				const uint8_t src1[restrict n],
				const uint8_t src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++) {
		if (!src2[i]) {
			errno	= ERANGE;
			return	-1;
		}
		dest[i]	= src1[i] / src2[i];
	}

	return	0;
}

int	alx_array_division_s8	(ssize_t n,
				int8_t dest[restrict n],
				const int8_t src1[restrict n],
				const int8_t src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++) {
		if (!src2[i]) {
			errno	= ERANGE;
			return	-1;
		}
		dest[i]	= src1[i] / src2[i];
	}

	return	0;
}

int	alx_array_division_u16	(ssize_t n,
				uint16_t dest[restrict n],
				const uint16_t src1[restrict n],
				const uint16_t src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++) {
		if (!src2[i]) {
			errno	= ERANGE;
			return	-1;
		}
		dest[i]	= src1[i] / src2[i];
	}

	return	0;
}

int	alx_array_division_s16	(ssize_t n,
				int16_t dest[restrict n],
				const int16_t src1[restrict n],
				const int16_t src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++) {
		if (!src2[i]) {
			errno	= ERANGE;
			return	-1;
		}
		dest[i]	= src1[i] / src2[i];
	}

	return	0;
}

int	alx_array_division_u32	(ssize_t n,
				uint32_t dest[restrict n],
				const uint32_t src1[restrict n],
				const uint32_t src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++) {
		if (!src2[i]) {
			errno	= ERANGE;
			return	-1;
		}
		dest[i]	= src1[i] / src2[i];
	}

	return	0;
}

int	alx_array_division_s32	(ssize_t n,
				int32_t dest[restrict n],
				const int32_t src1[restrict n],
				const int32_t src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++) {
		if (!src2[i]) {
			errno	= ERANGE;
			return	-1;
		}
		dest[i]	= src1[i] / src2[i];
	}

	return	0;
}

int	alx_array_division_u64	(ssize_t n,
				uint64_t dest[restrict n],
				const uint64_t src1[restrict n],
				const uint64_t src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++) {
		if (!src2[i]) {
			errno	= ERANGE;
			return	-1;
		}
		dest[i]	= src1[i] / src2[i];
	}

	return	0;
}

int	alx_array_division_s64	(ssize_t n,
				int64_t dest[restrict n],
				const int64_t src1[restrict n],
				const int64_t src2[restrict n])
{

	for (ssize_t i = 0; i < n; i++) {
		if (!src2[i]) {
			errno	= ERANGE;
			return	-1;
		}
		dest[i]	= src1[i] / src2[i];
	}

	return	0;
}



/******************************************************************************
 ******* static functions (definitions) ***************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/