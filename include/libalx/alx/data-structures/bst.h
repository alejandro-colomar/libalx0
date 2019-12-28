/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/alx/data-structures/bst.h */


/******************************************************************************
 ******* about ****************************************************************
 ******************************************************************************/
/*
 * Binary search tree
 *
 * An orphan node is a BST itself.  A BST can be created by inserting nodes
 * into a single element BST (a node) with
 * `alx_bst_insert_node(bst, node, cmp)` or
 * `alx_bst_insert(bst, data, size, cmp)`.
 *
 * Data is copied into `malloc`ed memory, and `free`d or `realloc`ed
 * automatically by the functions.
 *
 * Each node stores a pointer to a dynamic buffer, and pointers to its two
 * subtrees and its parent.  More info about the nodes can be found in
 *  <libalx/alx/data-structures/node.h>.
 *
 * If any of the nodes' metadata is manually modified by the user, the list may
 * be corrupted, and the behavior is undefined.
 */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stddef.h>

#include "libalx/alx/data-structures/llist.h"
#include "libalx/alx/data-structures/node.h"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/
/* Avoid circular dependence */
struct	Alx_LinkedList;


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/
/*
 * Inserts a new node into the BST.
 * Allocates memory for the node and for the data, copies the data passed by
 * the user to the newly allocated space, and updates any necessary metadata.
 *
 * bst:		Pointer to a BST.
 * data:	Pointer to the first byte of the data to be copied.
 * size:	Size of the data to be copied.
 * cmp:		Comparison function pointer.  This function should return
 *			0:	The node data compares equal to the bst node.
 *			< 0:	The node data goes to the left of the bst node.
 *			> 0:	The node data goes to the right of the bst node.
 *
 * return:
 *	0:		OK.
 *	ENOMEM:		Aborted; failure to allocate the node.
 */
__attribute__((nonnull, warn_unused_result))
int	alx_bst_insert			(struct Alx_Node *bst,
					 const void *data, size_t size,
					 int (*cmp)(const void *bst_data,
						    const void *node_data));

/*
 * Inserts an already existing node into the BST.
 * Updates any necessary metadata.
 *
 * bst:		Pointer to a BST.
 * node:	Pointer to the node to be prepended.
 * cmp:		Comparison function pointer.  This function should return
 *			0:	The node data compares equal to the bst node.
 *			< 0:	The node data goes to the left of the bst node.
 *			> 0:	The node data goes to the right of the bst node.
 */
__attribute__((nonnull))
void	alx_bst_insert_node		(struct Alx_Node *restrict bst,
					 struct Alx_Node *restrict node,
					 int (*cmp)(const void *bst_data,
						    const void *node_data));

/*
 * Deletes all the nodes in the BST.
 * If bst is NULL, no operation is performed.
 *
 * bst:		Pointer to a BST.
 */
void	alx_bst_delete_all		(struct Alx_Node *restrict bst);

/*
 * Returns the leftmost node in the BST.
 *
 * bst:		Pointer to a BST.
 */
__attribute__((nonnull, pure, warn_unused_result))
struct Alx_Node	*alx_bst_leftmost_node	(struct Alx_Node *restrict bst);

/*
 * Returns the rightmost node in the BST.
 *
 * bst:		Pointer to a BST.
 */
__attribute__((nonnull, pure, warn_unused_result))
struct Alx_Node	*alx_bst_rightmost_node	(struct Alx_Node *restrict bst);

/*
 * Removes a node from the BST and updates any necessary metadata.
 * The return value is `parent`, or if parent is NULL, a pointer to the new BST
 * formed by merging the two subtrees.
 *
 * parent:	Pointer to the parent node of `node` in the BST.
 *		If `node` is the root of the BST, `parent` should be NULL.
 * node:	Pointer to the node to be removed from the BST.
 */
__attribute__((nonnull(2), warn_unused_result))
struct Alx_Node	*alx_bst_remove_node	(struct Alx_Node *restrict parent,
					 struct Alx_Node *restrict node);

/*
 * Apply function `*f` to each node in the list (in order, starting at the
 * leftmost and ending at the rightmost).
 * If bst is NULL, no operation is performed.
 *
 * bst:		Pointer to a BST.
 * f:		Pointer to the function to be applied.
 * state:	External data to be used within `*f`.
 *
 * return:
 *	0:		OK.
 *	else:		If `*f` fails (returns != 0), the function returns
 *			immediately and the return value is passed to the
 *			caller.
 */
__attribute__((nonnull(2)))
int	alx_bst_apply			(struct Alx_Node *restrict bst,
					 int (*f)(struct Alx_Node *restrict node,
						  void *restrict state),
					 void *restrict state);

/*
 * Apply function `*f` to each node in the list (in reverse order, starting
 * at the rightmost and ending at the leftmost).
 * If bst is NULL, no operation is performed.
 *
 * bst:		Pointer to a BST.
 * f:		Pointer to the function to be applied.
 * state:	External data to be used within `*f`.
 *
 * return:
 *	0:		OK.
 *	else:		If `*f` fails (returns != 0), the function returns
 *			immediately and the return value is passed to the
 *			caller.
 */
__attribute__((nonnull(2)))
int	alx_bst_apply_bwd		(struct Alx_Node *restrict bst,
					 int (*f)(struct Alx_Node *restrict node,
						  void *restrict state),
					 void *restrict state);


/*
 * Copy the BST data into an empty dynamic array.  If the array is
 * not empty, all of its previous data is lost.  The array is resized to fit
 * the new data.  The BST may be restructured, although it will still be
 * ordered.  If an error occurs, the array may be reset.
 *
 * bst:		Pointer to a BST.
 * arr:		Pointer to an array.
 *
 * return:
 *	0:		OK.
 *	ENOMEM:		Aborted; failure to reallocate some data.
 *	ENOBUFS:	Aborted; nodes have different data sizes.
 */
int	alx_bst_to_dynarr		(struct Alx_Node *restrict bst,
					 struct Alx_Dyn_Array *restrict arr);

/*
 * Moves the BST nodes into an empty linked list.  If the linked list was not
 * empty, all of its previous nodes are deleted.  The BST is destroyed.
 *
 * bst:		Pointer to a BST.
 * list:	Pointer to a list.
 */
void	alx_bst_to_llist		(struct Alx_Node *restrict bst,
					 struct Alx_LinkedList *restrict list);


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
