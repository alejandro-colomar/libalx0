/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/extra/ncurses/perror.h"

#include <errno.h>
#include <string.h>

#include <ncurses.h>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enum / struct / union ************************************************
 ******************************************************************************/


/******************************************************************************
 ******* static functions (prototypes) ****************************************
 ******************************************************************************/


/******************************************************************************
 ******* global functions *****************************************************
 ******************************************************************************/
void	alx_ncurses_perror__	(WINDOW *restrict win,
				 const char *restrict file, int line,
				 const char *restrict func,
				 const char *restrict str)
{

	mvwprintw(win, 0, 0, "%s: ", program_invocation_name);
	mvwprintw(win, 1, 0, "%s:%i: ", file, line);
	mvwprintw(win, 2, 0, "%s(): ", func);
	if (str)
		mvwprintw(win, 3, 0, "	%s\n", str);
	mvwprintw(win, 4, 0, "E%i -	%s\n", errno, strerror(errno));

	wrefresh(win);
	/* Wait for any key */
	wgetch(win);
	wclear(win);
	wrefresh(win);
}


/******************************************************************************
 ******* static functions (definitions) ***************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
