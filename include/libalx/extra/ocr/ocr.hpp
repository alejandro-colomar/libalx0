/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/ocr/ocr.hpp */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstddef>

#include "libalx/base/compiler/restrict.hpp"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
extern	"C"
{
[[gnu::nonnull]]
int	alx_ocr_read	(ptrdiff_t bufsiz, char *restrict text,
			 const void *restrict imgdata, ptrdiff_t w, ptrdiff_t h,
			 ptrdiff_t B_per_pix, ptrdiff_t B_per_line,
			 int lang, int conf);
}


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
namespace alx {
namespace ocr {


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/
enum	Lang {
	LANG_ENG,
	LANG_SPA,
	LANG_CAT,
	LANG_DIGITS,
	LANG_DIGITS_COMMA
};

enum	Conf {
	CONF_NONE,
	CONF_PRICE,
	CONF_PRICE_EUR,
	CONF_PRICE_GBP,
	CONF_PRICE_USD
};


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace ocr */
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
