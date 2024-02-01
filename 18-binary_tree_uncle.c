#include "binary_trees.h"

/**
 * binary_tree_uncle - f
 * @node: n
 * Return: T
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)/* comment*/
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)/* comment*/
	{
		return (NULL);/* comment*/
	}
	if (node->parent->parent->left == node->parent)/* comment*/
		return (node->parent->parent->right);/* comment*/
		/* comment*/
	return (node->parent->parent->left);/* comment*/
}
