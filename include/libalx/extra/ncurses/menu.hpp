/******************************************************************************
 *	Copyright (C) 2017	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/ncurses/menu.hpp */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstdint>
#include <cstddef>

#include <ncurses.h>

#include "libalx/base/compiler/restrict.hpp"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
struct	Alx_Ncurses_Menu {
	int8_t		r;
	int8_t		c;
	const char	*t;
};

extern	"C"
{
ptrdiff_t alx_ncurses_menu	(int8_t height, int8_t width,
				 ptrdiff_t N,
				 const struct Alx_Ncurses_Menu
					mnu[static restrict N],
				 const char *restrict title);
ptrdiff_t alx_ncurses_menu_w	(WINDOW *restrict win,
				 ptrdiff_t N,
				 const struct Alx_Ncurses_Menu
					mnu[static restrict N],
				 const char *restrict title);
}


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
namespace alx {
namespace ncurses {


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace ncurses */
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
