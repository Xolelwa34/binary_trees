#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * bst_check_minimum - Checks minimum value in a binary search tree
 *
 * @tree: BST root or subtree
 * Return: node of the tree containing minimum value, or NULL if tree is NULL
 */
static bst_t *bst_check_minimum(bst_t *tree)
{
	bst_t *count = NULL;

	count = tree;
	while (count && count->left)
		count = count->left;

	return (count);
}


/**
 * bst_remove -  removes a node from the  BST tree
 * @root: root node of the tree
 * @value: node  value to remove
 * Return: changed tree, or 0
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp = NULL;

	if (!root)
		return (NULL);
	if (value < root->n)
	{
		root->left = bst_remove(root->left, value);
		if (root->left)
			root->left->parent = root;
	}
	else if (value > root->n)
	{ 
		root->right = bst_remove(root->right, value);
		if (root->right)
			root->right->parent = root;
	}
	else
	{
		if (root->left == NULL)
		{ 
			count = root->right;
			free(root);
			return (count);
		}
		else if (root->right == NULL)
		{ 
			
			count = root->left;
			free(root);
			return (count);
		}
		count = bst_find_min(root->right);
		root->n = count->n;
		root->right = bst_remove(root->right, count->n);
		if (root->right)
			root->right->parent = root;
	}
	return (root);
}
