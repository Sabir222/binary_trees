#include "binary_trees.h"

/**
 * binary_tree_is_root - F
 * @node: N
 * Return: 0
 */

int binary_tree_is_root(const binary_tree_t *node)/* comment*/
{
	if (node == NULL || node->parent != NULL)/* comment*/
	/* comment*/
		return (0);/* comment*/
		/* comment*/
	return (1);
}
