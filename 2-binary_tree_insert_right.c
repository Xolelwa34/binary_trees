#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a binary_tree into a new node
 * @parent: pointer to node
 * @value: value that's stored into a new node
 * Return: pointer to new node, or NULL if unsuccessful
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	my_node = binary_tree_my_node(parent, value);

	if (parent->right != NULL)
	{
		parent->right->parent = my_node;
		my_node->right = parent->right;
	}
	parent->right = my_node;

	return (my_node);
}
