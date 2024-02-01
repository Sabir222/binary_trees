#include "binary_trees.h"
/**
 * binary_tree_is_leaf - k
 * do
 * @node: n
 * Return: 1 
 */
int binary_tree_is_leaf(const binary_tree_t *node)/* comment*/
{
	if (node == NULL)/* comment*/
		return (0);/* comment*/
	if (node->left == NULL && node->right == NULL)/* comment*/
		return (1);
		/* comment*/
	return (0);
}
