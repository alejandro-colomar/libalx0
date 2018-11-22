/******************************************************************************
 *	NO COPYRIGHT FOR THIS FILE.	FREE FOR ALL			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
/* Standard C ----------------------------------------------------------------*/
	#include <stdint.h>
		/* qsort() */
	#include <stdlib.h>

/* libalx --------------------------------------------------------------------*/
		/* compare_uint8() */
	#include "alx_cmp.h"

/* Module --------------------------------------------------------------------*/
	#include "alx_math.h"


/******************************************************************************
 ******* main *****************************************************************
 ******************************************************************************/
	/*
	 * Factorial
	 */
double	alx_fact		(int64_t n)
{
	if (n < 1) {
		return	1;
	} else {
		return	n * alx_fact(n - 1);
	}
}

	/*
	 * Binomial coefficient (a b):			--!!!  a > b  !!!--
	 * - Bugs: If !(a > b), returns 1.
	 */
double	alx_bin_coef		(int64_t a, int64_t b)
{
	int64_t	i = 1;
	double	c = 1;

	while (a > b) {
		c = c * a-- / i++;
	}

	return	c;
}

	/*
	 * Median
	 * - If even array, return the mean of the two central values
	 */
uint8_t	alx_median_uint8	(int n, uint8_t x[n])
{
	uint8_t	median;

	qsort(x, n, sizeof(x[0]), compare_uint8);

	if (n % 2) {
		median	= x[n/2];
	} else {
		median	= (x[n/2] + x[n/2 - 1]) / 2.0;
	}

	return	median;
}


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
