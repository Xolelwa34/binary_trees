#include "binary_trees.h"

/**
 * binary_tree_is_full - checks the binary treee if it's full
 * @tree: root node to check
 * Return: 1 if Successful, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	else if (tree->right || tree->left)
		return (0);
	else
		return (1);
}
