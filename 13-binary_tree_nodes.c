#include "binary_trees.h"
/**
 * binary_tree_nodes - fu
 * @tree: tr
 * Return: n
 */
size_t binary_tree_nodes(const binary_tree_t *tree)/* comment*/
{
	size_t  node = 0;/* comment*/

	if (tree == NULL)/* comment*/
	{
		return (0);/* comment*/
	}
	else
	{
		node += ((tree->left || tree->right) ? 1 : 0);/* comment*/
		node += binary_tree_nodes(tree->left);/* comment*/
		/* comment*/
		node += binary_tree_nodes(tree->right);/* comment*/
		/* comment*/
		return (node);/* comment*/
	}
}
