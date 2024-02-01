#include "binary_trees.h"
/**
 * tree_is_perfect - f
 * it 
 * each 
 * @tree: t
 * Return: 0
 */
int tree_is_perfect(const binary_tree_t *tree)/* comment*/
{
	int l = 0, r = 0;/* comment*/

	if (tree->left && tree->right)/* comment*/
	{
		l = 1 + tree_is_perfect(tree->left);/* comment*/
		/* comment*/
		r = 1 + tree_is_perfect(tree->right);/* comment*/
		/* comment*/
		if (r == l && r != 0 && l != 0)/* comment*/
		/* comment*/
			return (r);/* comment*/
		return (0);/* comment*/
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
/**
 * binary_tree_is_perfect - p
 * @tree: t
 * Return: 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)/* comment*/
{
	int result = 0;/* comment*/

	if (tree == NULL)/* comment*/
	{
		return (0);/* comment*/
	}
	else
	{
		result = tree_is_perfect(tree);/* comment*/
		if (result != 0)/* comment*/
		{
			return (1);/* comment*/
		}
		return (0);/* comment*/
	}
}
