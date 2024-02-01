#include "binary_trees.h"
/**
 * binary_tree_delete - f
 * wh
 * @tree: t
 * Return: N
 */
void binary_tree_delete(binary_tree_t *tree)/* comment*/
{
	if (tree == NULL)/* comment*/
	{
		return;/* comment*/
	}
	else
	{
		if (tree != NULL)/* comment*/
		{
			binary_tree_delete(tree->left);/* comment*/
			/* comment*/
			binary_tree_delete(tree->right);/* comment*/
		}
		free(tree);/* comment*/
	}

}
