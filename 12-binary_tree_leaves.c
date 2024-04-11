#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a binary tree
 * @tree: pointer to root node
 * Return: total leaves root node, or 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		leaf += 1;
	leaf += binary_tree_leaves(tree->left);
	leaf += binary_tree_leaves(tree->right);
	return (leaf);
}
