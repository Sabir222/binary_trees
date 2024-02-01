#include "binary_trees.h"
/**
 * binary_tree_leaves - f
 * @tree: t
 * Return: n
 */
size_t binary_tree_leaves(const binary_tree_t *tree)/* comment*/
{
	size_t leaf = 0, l = 0, r = 0;/* comment*/

	if (tree == NULL)/* comment*/
	{
		return (0);/* comment*/
	}
	else/* comment*/
	{
		l = binary_tree_leaves(tree->left);/* comment*/
		/* comment*/
		r = binary_tree_leaves(tree->right);/* comment*/
		leaf = l + r;/* comment*/
		return ((!l && !r) ? leaf + 1 : leaf + 0);/* comment*/
	}
}
