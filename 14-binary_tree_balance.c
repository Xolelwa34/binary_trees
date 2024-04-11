#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the factor of a binary_tree
 * @tree: Pointer to root node
 * Return: balance factor, 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_a = 0,right_b = 0;

	if (!tree)
		return (0);

	left_a = binary_tree_height(tree->left);
	right_a = binary_tree_height(tree->right);
	return (left_a - right_b);
}

/**
 * binary_tree_height - Find the height of a binary tree
 * @tree: pointer to root node
 * Return: returns height , or 0 if it fails
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t s_l = 0;
	size_t s_r = 0;

	if (!tree)
		return (0);

	s_l += 1 + binary_tree_height(tree->left);
	s_r += 1 + binary_tree_height(tree->right);
	if (s_l > s_r)
		return (s_l);

	return (s_r);
}
