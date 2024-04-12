#include "binary_trees.h"

/**
 * binary_tree_rotate_left - It rotates a binary tree
 * @tree: tree to rotate
 * Return: pointer to root node, or NULL
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *rotate;

	if (!tree)
		return (NULL);
	rotate = tree->right;

	tree->right = rotate->left;
	if (rotate->left)
		rotate->left->parent = tree;

	rotate->parent = tree->parent;
	if (tree->parent)
	{
		if (tree == tree->parent->left)
			tree->parent->left = rotate;
		else
			tree->parent->right = rotate;

	}
	rotate->left = tree;
	tree->parent = rotate;

	return (rotate);
}
