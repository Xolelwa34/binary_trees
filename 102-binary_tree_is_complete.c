#include "binary_trees.h"

/**
 * binary_tree_size - Checks the size of a binary_tree
 * @tree: root node to measure
 * Return: 1 if sucessful, 0 if not
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}

/**
 * binary_to_complete - Checks if the binary tree is complete
 * @tree: root node to measure
 * @i: iterator
 * @size: total number of nodes in tree
 * Return: 1 if complete, 0 if not
*/
int binary_to_complete(const binary_tree_t *tree, size_t i, size_t size)
{
	if (!tree)
		return (1);

	if ((tree->left && (2 * i) + 1 >= size) ||
	    !binary_to_complete(tree->left, (2 * i) + 1, size))
		return (0);

	if ((tree->right && (2 * i) + 2 >= size) ||
	    !binary_to_complete(tree->right, (2 * i) + 2, size))
		return (0);

	return (1);
}

/**
 * binary_tree_is_complete - Checks the completeness of a binary tree
 * @tree: pointer to root node
 * Return: 1 if complete , 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_to_complete(tree, 0, binary_tree_size(tree)));
}
