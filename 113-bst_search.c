#include "binary_trees.h"


/**
 * bst_search - Searches value in a binary tree
 *
 * @tree: pointer to root node
 * @value: integer to search
 * Return: node value, 0 otherwise
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	if (value == tree->n)
		return ((bst_t *)tree);

	if (tree->left == NULL && tree->right == NULL)
		return (NULL);

	if (value < tree->n)
		return (bst_search(tree->left, value));

	return (bst_search(tree->right, value));
}
