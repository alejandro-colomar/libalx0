/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/base/errno/error.h"

#include <stdnoreturn.h>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enum / struct / union ************************************************
 ******************************************************************************/


/******************************************************************************
 ******* static prototypes ****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* global functions *****************************************************
 ******************************************************************************/
void	alx__perrorx__	(const char *restrict file, int line,
			 const char *restrict func, const char *restrict str)
{
	const int	errno_cpy = errno;

	fprintf(stderr, "%s:\n", program_invocation_name);
	fprintf(stderr, "	%s:%i:\n", file, line);
	fprintf(stderr, "	%s():\n", func);
	if (str)
		fprintf(stderr, "		%s\n", str);
	fprintf(stderr, "	E%i -	%s\n", errno_cpy, strerror(errno_cpy));
}

extern noreturn
void	alx__errorx__	(int status, const char *restrict file, int line,
			 const char *restrict func, const char *restrict str);


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
