#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a binary_tree into a new node
 * @parent: pointer to node
 * @value: value that's stored into a new node
 * Return: pointer to new node, or NULL if unsuccessful
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t my_node;

	if (!parent)
		return (NULL);

	my_node = malloc(sizeof(binary_tree_t));
	if (!my_node)
		return (NULL);

	my_node->n = value;
	my_node->parent = parent;
	if (parent->right)
	{
		my_node->right = parent->right;
		parent->right->parent = my_node;
	}
	else
		my_node->right = NULL;
	my_node->left = NULL;
	parent->right = my_node;

	return (my_node);
}
