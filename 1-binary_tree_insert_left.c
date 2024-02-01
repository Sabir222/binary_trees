#include "binary_trees.h"
/**
 * binary_tree_insert_left - a
 * i
 * @parent: p
 * @value: v
 * Return: N
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)/* comment*/
{
	binary_tree_t *nnod;/* comment*/
/* comment*/
	if (parent == NULL)/* comment*/
	{
		return (NULL);/* comment*/
	}

	nnod = binary_tree_node(parent, value);/* comment*/
	if (nnod == NULL)/* comment*/
	{
		return (NULL);/* comment*/
	}
	if (parent->left != NULL)/* comment*/
	{
		nnod->left = parent->left;/* comment*/
		/* comment*/
		parent->left->parent = nnod;/* comment*/
	}
	parent->left = nnod;
	/* comment*/
	return (nnod);
}
