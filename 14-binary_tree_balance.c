#include "binary_trees.h"

/**
 * binary_tree_balance - Get the balance factor of a binary tree
 * @tree: pointer to root node balance factor
 *
 * Return: balance facror, or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: pointer to root node balance factor
 *
 * Return: returns height , or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		left_p = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right_p = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left > right) ? left : right);
	}
	return (0);
}
