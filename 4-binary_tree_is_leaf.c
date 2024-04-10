#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks a node if  a leaf of a binary tree
 * @node: node pointer
 * Return: 1 if Successful, 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	else
		return (1);
}
