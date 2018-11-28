/******************************************************************************
 *	NO COPYRIGHT FOR THIS FILE.	FREE FOR ALL			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# ifndef		ALX_MATH_HPP
	# define	ALX_MATH_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
	#include <cstdint>


/******************************************************************************
 ******* C wrapper ************************************************************
 ******************************************************************************/
extern	"C" {


/******************************************************************************
 ******* functions ************************************************************
 ******************************************************************************/
	/*
	 * Factorial
	 */
double	alx_fact	(int64_t n);

	/*
	 * Binomial coefficient (a b):				--!!!  a > b  !!!--
	 * - Bugs: If !(a > b), returns 1.
	 */
double	alx_bin_coef	(int64_t a, int64_t b);

	/*
	 * Median
	 * - If even array, return the mean of the two central values
	 */
uint8_t	alx_median_u8	(int n, uint8_t x[]);

	/*
	 * Maximum element of an array
	 * - Return position containing the maximum element of the array
	 */
int	alx_maximum_u8	(int n, uint8_t x[]);


/******************************************************************************
 ******* C wrapper ************************************************************
 ******************************************************************************/
}	/* extern "C" */


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# endif			/* alx_math.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/