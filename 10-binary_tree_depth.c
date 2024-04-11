#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary_tree in a node
 * @tree: integer from which node is measured
 * Return: root height, or 0 if fails
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_p;

	if (!tree)
		return (0);

	for (depth_p = 0; tree->parent; depth_p++)
		tree = tree->parent;

	return (depth_p);
}
