/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/string/strchr.hpp */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstddef>

#include "libalx/base/stddef/restrict.hpp"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
extern	"C"
{
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strrchrnul	(const char *restrict str, char c);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strnchr		(ptrdiff_t size, const char *restrict str,
				 char c);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strnrchr		(ptrdiff_t size, const char *restrict str,
				 char c);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strnchrnul	(ptrdiff_t size, const char *restrict str,
				 char c);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strnrchrnul	(ptrdiff_t size, const char *restrict str,
				 char c);

[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strcasechr	(const char *restrict str, char c);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strrcasechr	(const char *restrict str, char c);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strcasechrnul	(const char *restrict str, char c);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strrcasechrnul	(const char *restrict str, char c);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strncasechr	(ptrdiff_t size, const char *restrict str,
				 char c);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strnrcasechr	(ptrdiff_t size, const char *restrict str,
				 char c);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strncasechrnul	(ptrdiff_t size, const char *restrict str,
				 char c);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t alx_strnrcasechrnul	(ptrdiff_t size, const char *restrict str,
				 char c);
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
