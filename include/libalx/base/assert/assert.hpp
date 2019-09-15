/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/assert/assert.hpp */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <climits>
#include <cstdint.h>

#include <type_traits>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#define alx_Static_assert_array(a)					\
	_Static_assert(std::is_array <typeof(a)>::value, "Not a `[]`!")

#define alx_static_assert_char_array(a)					\
	alx_Static_assert_array(a);					\
	_Static_assert(std::is_same <char, typeof((a)[0])>::value,	\
						"Not a `char[]` !")

#define alx_Static_assert_char_signed()					\
	_Static_assert(CHAR_MIN < 0, "char != signed char")

#define alx_Static_assert_char_unsigned()				\
	_Static_assert(CHAR_MIN == 0, "char != unsigned char")

#define alx_Static_assert_stdint_types()				\
	_Static_assert(std::is_same <uint8_t, unsigned char>::value,	\
				    "uint8_t != unsigned char");	\
	_Static_assert(std::is_same < int8_t, signed char>::value,	\
				     "int8_t != signed char");		\
	_Static_assert(std::is_same <uint16_t, unsigned short>::value,	\
				    "uint16_t != unsigned short");	\
	_Static_assert(std::is_same < int16_t, short>::value,		\
				     "int16_t != short");		\
	_Static_assert(std::is_same <uint32_t, unsigned>::value,	\
				    "uint32_t != unsigned");		\
	_Static_assert(std::is_same < int32_t, int>::value,		\
				     "int32_t != int");			\
	_Static_assert(std::is_same <uint64_t, unsigned long>::value,	\
				    "uint64_t != unsigned long");	\
	_Static_assert(std::is_same < int64_t, long>::value,		\
				     "int64_t != long")


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
extern	"C"
{
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
 ******* extern functions *****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/