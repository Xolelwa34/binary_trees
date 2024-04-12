#include "binary_trees.h"
#include "limits.h"

/**
 * find_bst - Checks a binary tree if it's a valid one
 * @tree:pointer to root node to check
 * @pi: The value of the lowest node
 * @val: value of the largest root node
 *
 * Return: If the tree is a valid BST, 0 if not
 */
int find_bst(const binary_tree_t *tree, int pi, int val)
{
	if (tree != NULL)
	{
		if (tree->n < pi || tree->n > val)
			return (0);
		return (find_bst(tree->left, pi, tree->n - 1) &&
			find_bst(tree->right, tree->n + 1, val));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Checks if a binary tree is BST or not
 * @tree: pointer to root node
 *
 * Return: 1 if tree is a valid BST, and 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (find_bst(tree, INT_MIN, INT_MAX));
