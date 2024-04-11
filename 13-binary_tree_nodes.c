#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes in a binary tree
 * @tree: pointer to root node
 * Return: Number of trees in binary
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t my_nodes = 0;

	if (tree)
	{
		my_nodes += (tree->left || tree->right) ? 1 : 0;
		my_nodes += binary_tree_nodes(tree->left);
		my_node += binary_tree_nodes(tree->right);
	}
	return (my_node);
}
