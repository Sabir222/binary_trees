#include "binary_trees.h"
/**
 * binary_tree_preorder - pr
 * @tree: t
 * @func: f
 * Return: N
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))/* comment*/
{
	if (tree == NULL || func == NULL)/* comment*/
	/* comment*/
	{
		return;/* comment*/
	}
	else
	{
		func(tree->n);/* comment*/
		binary_tree_preorder(tree->left, func);/* comment*/
		/* comment*/
		binary_tree_preorder(tree->right, func);/* comment*/
	}
}
