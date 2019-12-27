/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/alx/data-structures/node.hpp */


/******************************************************************************
 ******* about ****************************************************************
 ******************************************************************************/
/*
 * Doubly linked node
 *
 * Read  <libalx/extra/alx/data-structures/node.h>  for documentation.
 */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstddef>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
struct	Alx_Node {
	struct Alx_Dyn_Buffer	*buf;
	struct Alx_Node		*left;
	struct Alx_Node		*right;
};

extern	"C"
{
[[gnu::nonnull]][[gnu::warn_unused_result]]
int	alx_node_init		(struct Alx_Node **restrict node,
				 const void *restrict data, size_t size);
[[gnu::nonnull]][[gnu::warn_unused_result]]
int	alx_node_init_empty	(struct Alx_Node **node);
void	alx_node_deinit		(struct Alx_Node *node);
[[gnu::nonnull]][[gnu::warn_unused_result]]
int	alx_node_write		(struct Alx_Node *node,
				 const void *data, size_t size);
[[gnu::nonnull]]
int	alx_node_read		(const struct Alx_Node *node,
				 void *data, size_t size);
}


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
namespace alx {
namespace CV {


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
}	/* namespace CV */
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
