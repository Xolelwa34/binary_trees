#include "binary_trees.h"


/**
 * bst_insert_recursion - recursively inserts value into binary tree
 * @tree: pointer to new   node
 * @value: integer value
 * Return: New node, or NULL if fails
 */
bst_t *bst_insert_recursion(bst_t *tree, int value)
{
	bst_t *node = NULL;

	if (tree->n > value)
	{
		if (tree->left == NULL)
		{
			node = binary_tree_node(tree, value);
			tree->left = node;
			return (node);
		}

		return (bst_insert_recursion(tree->left, value));
	}

	if (tree->n < value)
	{
		if (tree->right == NULL)
		{
			node = binary_tree_node(tree, value);
			tree->right = new;
			return (node);
		}

		return (bst_insert_recursion(tree->right, value));
	}

	/* (tree->n == value) */
	return (NULL);
}


/**
 * bst_insert - inserts value into binary tree
 * @tree: pointer to node
 * @value: integer
 * Return: pointer to new node, or NULL if fails
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
