#include "binary_trees.h"

/**
 * binary_tree_node - Cy
 * @parent: n
 * @value: V
 * Return: t
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)/* comment*/
{
	binary_tree_t *nnod;/* comment*/

	nnod = malloc(sizeof(binary_tree_t));
	/* comment*/
	if (nnod == NULL)
	{
		return (NULL);/* comment*/
	}
	nnod->n = value;
	/* comment*/
	nnod->parent = parent;
	/* comment*/
	nnod->left = NULL;
	/* comment*/
	nnod->right = NULL;
	/* comment*/
	return (nnod);/* comment*/
}
