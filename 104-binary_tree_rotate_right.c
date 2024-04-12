#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Right rotates binary tree
 * @tree: tree to rotate right
 * Return: pointer to root node, or NULL
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *rotate;

	if (!tree)
		return (NULL);

	rotate = tree->left;
	tree->left = rotate->right;
	if (rotate->right)
		rotate->right->parent = tree;

	rotate->parent = tree->parent;
	if (tree->parent)
	{
		if (tree == tree->parent->right)
			tree->parent->right = rotate;
		else
			tree->parent->left = rotate;
	}
	rotate->right = tree;
	tree->parent = rotate;

	return (rotate);
}
