#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: tree to check
 * Return: height of the tree, 0 if not
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_p = 0;
	size_t right_p = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_p = tree->left ? 1 + binary_tree_height(tree->left) : 1;
			right_p = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		}
		return ((left_p > right_p) ? left_p : right_p);
		}
}

/**
 * ban_avl -  checks the binary if it is a valid AVL
 * @tree: tree to check
 * @high: pointer to higher node
 * @lower: points to lower node
 * Return: 1 if tree is AVL, 0 if not.
 */
int ban_avl(const binary_tree_t *tree, int lower, int high)
{
	size_t height_left_p, height_right_p, balancer;

	if (tree != NULL)
	{
		if (tree->n > high || tree->n < lower)
		{
			return (0);
		}
		height_left_p = binary_tree_height(tree->left);
		height_right_p = binary_tree_height(tree->right);
		balancer = height_l > height_r ? height_left_p - height_right_p : height_right_p - height_left_p;
		if (balancer > 1)
		{
			return (0);
		}
		return (ban_avl(tree->left, lower, tree->n - 1) &&
			ban_avl(tree->right, tree->n + 1, high));
	}
	return (1);
}

/**
 * binary_tree_is_avl - Balances the binary tree
 * @tree: pointer to check node
 * Return: 1 if tree is AVL, 0 if not.
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (ban_avl(tree, INT_MIN, INT_MAX));

}
