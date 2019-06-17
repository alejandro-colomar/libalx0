/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef ALX_STDLIB_AVERAGE_H
#define ALX_STDLIB_AVERAGE_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stddef.h>
#include <stdint.h>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#define	AVGfast(a, b) (							\
{									\
	(a + b) / 2.0;							\
}									\
)

#define	AVGsafe(a, b) (							\
{									\
	__auto_type	_a	= (a);					\
	__auto_type	_b	= (b);					\
									\
	(_a / 2) + (_b / 2) + (((_a % 2) + (_b % 2)) / 2);		\
}									\
)


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


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* libalx/base/stdlib/average.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/