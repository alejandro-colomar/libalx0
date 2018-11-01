/******************************************************************************
 *	Copyright (C) 2017	Alejandro Colomar Andrés		      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# ifndef		ALX_INPUT_HPP
	# define	ALX_INPUT_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
	#include <stdbool.h>
	#include <stdint.h>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
	# define	ERR_OK		(0)
	# define	ERR_RANGE	(1)
	# define	ERR_SSCANF	(2)
	# define	ERR_FPTR	(3)
	# define	ERR_FGETS	(4)
	# define	ERR_GETSTR	(5)


/******************************************************************************
 ******* C wrapper ************************************************************
 ******************************************************************************/
extern	"C" {


/******************************************************************************
 ******* functions ************************************************************
 ******************************************************************************/
	int	alx_sscan_dbl	(double		*dest,
				double		m,
				double		def,
				double		M,
				const char	*str);

	int	alx_sscan_int	(int		*dest,
				double		m,
				int		def,
				double		M,
				const char	*str);

	int	alx_sscan_int64	(int64_t	*dest,
				double		m,
				int64_t		def,
				double		M,
				const char	*str);

	int	alx_sscan_fname	(const char	*fpath,
				char		*fname,
				bool		exist,
				const char	*str);

	double	alx_getdbl	(double		m,
				double		def,
				double		M,
				const char	*title,
				const char	*help);

	int64_t	alx_getint	(double		m,
				int64_t		def,
				double		M,
				const char	*title,
				const char	*help);


/******************************************************************************
 ******* C wrapper ************************************************************
 ******************************************************************************/
}	/* extern "C" */


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# endif			/* alx_input.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
