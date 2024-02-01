#include "binary_trees.h"
/**
 * binary_tree_is_full - f
 * a t
 * @tree: t
 * Return: 1
 */
int binary_tree_is_full(const binary_tree_t *tree)/* comment*/
{
	int left = 0, right = 0;/* comment*/

	if (tree == NULL)/* comment*/
	/* comment*/
	{
		return (0);/* comment*/
	}
	else
	{
		if (tree->left && tree->right)/* comment*/
		{
			left = binary_tree_is_full(tree->left);/* comment*/
			/* comment*/
			right = binary_tree_is_full(tree->right);/* comment*/
			if (left == 0 || right == 0)/* comment*/
			{
				return (0);/* comment*/
			}
			return (1);/* comment*/
		}
		else if (!tree->left && !tree->right)/* comment*/
		{
			return (1);/* comment*/
		}
		else
		{
			return (0);/* comment*/
		}
	}
}
