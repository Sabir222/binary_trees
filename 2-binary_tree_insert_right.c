#include "binary_trees.h"
/**
 * binary_tree_insert_right - a
 * i
 * @parent: p
 * @value: v
 * Return: NU
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)/* comment*/
{
	binary_tree_t *nnod;/* comment*/

	if (parent == NULL)/* comment*/
	{
		return (NULL);/* comment*/
	}

	nnod = binary_tree_node(parent, value);/* comment*/
	/* comment*/
	if (nnod == NULL)/* comment*/
	{
		return (NULL);
	}
	if (parent->right != NULL)/* comment*/
	{
		nnod->right = parent->right;/* comment*/
		/* comment*/
		parent->right->parent = nnod;
	}
	parent->right = nnod;
	/* comment*/
	return (nnod);
}
