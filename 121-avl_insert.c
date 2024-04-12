#include "binary_trees.h"


/**
 * bst_insert_recursion - Inserts root node in a binary tree
 *
 * @tree: binary tree root node
 * @value: integer ne node
 * Return: pointer to new node, or NULL
 */
bst_t *bst_insert_recursion(bst_t *tree, int value)
{
	bst_t *node = NULL;

	if (tree->n > value)
	{
		if (tree->left == NULL)
		{
			node = binary_tree_node(tree, value);
			tree->left = new;
			return (node);
		}

		return (bst_insert_recursion(tree->left, value));
	}

	if (tree->n < value)
	{
		if (tree->right == NULL)
		{
			node = binary_tree_node(tree, value);
			tree->right = node;
			return (node);
		}

		return (bst_insert_recursion(tree->right, value));
	}

	return (NULL);
}


/**
 * bst_insert - Inserts a value in a binary tree root node
 * @tree: binary tree node
 * @value: integer to new node
 * Return: pointer to new node, or NULL
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node = NULL;

	if (!tree || !(*tree))
	{
		node = binary_tree_node(NULL, value);
		*tree = node;
		return (node);
	}

	return (bst_insert_recursion(*tree, value));
}
