#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes in a binary tree
 * @tree: pointer to root node
 * Return: Number of trees in binary
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	return (i + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}
