#include "binary_trees.h"
/**
 * binary_tree_size - f
 * @tree: t
 * Return: s
 */
size_t binary_tree_size(const binary_tree_t *tree)/* comment*/
{
	size_t size = 0, r = 0, l = 0;/* comment*/

	if (tree == NULL)/* comment*/
	{
		return (0);/* comment*/
	}
	else
	{
		l = binary_tree_size(tree->left);/* comment*/
		/* comment*/
		r = binary_tree_size(tree->right);/* comment*/
		/* comment*/
		size = r + l + 1;
	}
	return (size);/* comment*/
}
