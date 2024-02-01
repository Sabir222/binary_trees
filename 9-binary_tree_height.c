#include "binary_trees.h"

/**
 * binary_tree_height - F
 * @tree: t
 * Return: t
 */

size_t binary_tree_height(const binary_tree_t *tree)/* comment*/
{
	size_t l = 0;/* comment*/
	size_t r = 0;/* comment*/

	if (tree == NULL)/* comment*/
	{
		return (0);
	}
	else/* comment*/
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 0;/* comment*/
			/* comment*/
			r = tree->right ? 1 + binary_tree_height(tree->right) : 0;/* comment*/
		}
		return ((l > r) ? l : r);/* comment*/
	}
}
