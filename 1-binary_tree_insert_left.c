#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node in binary tree a a left child
 * @parent: pointer to node of the left child inserted
 * @value: value that stored in a new node
 * Return: pointer to new node, or NULL if unsuccessful.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	if (!parent)
		return (NULL);

	my_node = malloc(sizeof(binary_tree_t));
	if (!my_node)
		return (NULL);

	my_node->n = value;
	my_node->parent = parent;
	if (parent->left)
	{
		my_node->left = parent->left;
		parent->left->parent = my_node;
	}
	else
		my_node->left = NULL;
	my_node->right = NULL;
	parent->left = my_node;

	return (my_node);
}
