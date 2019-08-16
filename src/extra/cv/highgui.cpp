/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/extra/cv/highgui.hpp"

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#include "libalx/base/compiler/restrict.hpp"
#include "libalx/base/errno/error.hpp"


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
int	alx::CV::imread	(class cv::Mat *restrict img,
			 const char *restrict fname)
{

	*img	= cv::imread(fname, CV_LOAD_IMAGE_COLOR);
	if (img->empty())
		return	-1;
	return	0;
}

int	alx_cv_imread	(void *restrict img, const char *restrict fname)
{
	return	alx::CV::imread((class cv::Mat *)img, fname);
}

void	alx::CV::imwrite(const class cv::Mat *restrict img,
			 const char *restrict fname)
{
	cv::imwrite(fname, *img);
}

void	alx_cv_imwrite	(const void *restrict img, const char *restrict fname)
{
	alx::CV::imwrite((const class cv::Mat *)img, fname);
}


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
