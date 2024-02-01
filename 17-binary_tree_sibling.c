#include "binary_trees.h"

/**
 * binary_tree_sibling - f
 * @node: n
 * Return: T
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)/* comment*/
{
	if (node == NULL || node->parent == NULL)/* comment*/
	{
		return (NULL);/* comment*/
	}
	if (node->parent->left == node)/* comment*/
	/* comment*/
		return (node->parent->right);/* comment*/
		/* comment*/
	return (node->parent->left);
}
