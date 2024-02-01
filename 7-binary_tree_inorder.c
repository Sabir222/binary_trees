#include "binary_trees.h"
/**
 * binary_tree_inorder - p
 * @tree: t
 * @func: f
 * Return: N
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))/* comment*/
{
	if (tree == NULL || func == NULL)/* comment*/
	{
		return;/* comment*/
	}
	else/* comment*/
	{
		binary_tree_inorder(tree->left, func);/* comment*/
		/* comment*/
		func(tree->n);
		/* comment*/
		binary_tree_inorder(tree->right, func);
	}
}
