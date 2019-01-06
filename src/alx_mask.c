/******************************************************************************
 *	NO COPYRIGHT FOR THIS FILE.	FREE FOR ALL			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
/* Standard C ----------------------------------------------------------------*/
	#include <stdint.h>

/* libalx --------------------------------------------------------------------*/
	#include "alx_mask.h"


/******************************************************************************
 ******* main *****************************************************************
 ******************************************************************************/
uint64_t	alx_maskgen_u64	(int bit)
{
	return	(UINT64_C(1) << bit);
}

uint32_t	alx_maskgen_u32	(int bit)
{
	return	(UINT32_C(1) << bit);
}

uint16_t	alx_maskgen_u16	(int bit)
{
	return	(UINT16_C(1) << bit);
}

uint8_t		alx_maskgen_u8	(int bit)
{
	return	(UINT8_C(1) << bit);
}


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
