#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds a node sibling in a binary tree
 * @node: pointer to root node
 *
 * Return: a pointer to sibling, otherwise NULL if there is no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (my_node == NULL || my_node->parent == NULL)
		return (NULL);
	if (my_node->parent->left == my_node)
		return (my_node->parent->right);
	return (my_node->parent->left);
}
