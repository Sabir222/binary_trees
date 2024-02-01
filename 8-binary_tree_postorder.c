#include "binary_trees.h"
/**
 * binary_tree_postorder - p
 * @tree: t
 * @func: f
 * Return: N
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))/* comment*/
{
	if (tree == NULL || func == NULL)/* comment*/
	{
		return;/* comment*/
		/* comment*/
	}
	else
	{
		binary_tree_postorder(tree->left, func);/* comment*/
		/* comment*/
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);/* comment*/
}
