#include "binary_trees.h"
/**
 * binary_tree_depth - d
 * @tree: n
 * Return: 0 
 */
size_t binary_tree_depth(const binary_tree_t *tree)/* comment*/
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);/* comment*/
}
