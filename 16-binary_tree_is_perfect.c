#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks the binary tree if it is perfect
 * @tree: pointer to root node
 * Return: 1 if success, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (leaf_tree)
		return (0);

	if (tree->right && tree->left)
	{
		if ((leaf_tree->left->left && leaf_tree->left->right) &&
		    (leaf_tree->right->left && leaf_tree->right->right))
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}
	else if (leaf(tree->parent))
		return (1);

}
