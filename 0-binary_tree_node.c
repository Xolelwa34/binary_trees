#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - It creates a node that can have a muximum of two node children
 * @parent: pointer to create a node
 * @value: value to be inserted in a new node
 * Return: New node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	my_node = malloc(sizeof(binary_tree_t));

	if (my_node == NULL)
	{
		return (NULL);
	}

	my_node->parent = parent;
	my_node->left = NULL;
	my_node->right = NULL;
	my_node->n = value;

	return (my_node);
}
