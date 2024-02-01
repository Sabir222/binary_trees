#include "binary_trees.h"

/**
 * binary_tree_height_b - Me
 * @tree: t
 * Return: t
 */

size_t binary_tree_height_b(const binary_tree_t *tree)/* comment*/
{
	size_t l = 0;/* comment*/
	/* comment*/
	size_t r = 0;/* comment*/

	if (tree == NULL)/* comment*/
	{
		return (0);/* comment*/
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;/* comment*/
			/* comment*/
			r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;/* comment*/
		}
		return ((l > r) ? l : r);/* comment*/
	}
}

/**
 * binary_tree_balance - M
 * @tree: t
 * Return: b
 */

int binary_tree_balance(const binary_tree_t *tree)/* comment*/
{
	int right = 0, left = 0, total = 0;/* comment*/

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));/* comment*/
		/* comment*/
		right = ((int)binary_tree_height_b(tree->right));/* comment*/
		/* comment*/
		total = left - right;/* comment*/
	}
	return (total);/* comment*/
}
