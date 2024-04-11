#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: pointer to root node
 *
 * Return: 1 if successful, 0 if not
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (my_node == NULL ||
	    my_node->parent == NULL ||
	    my_node->parent->parent == NULL)
		return (NULL);
	if (my_node->parent->parent->left == my_node->parent)
		return (my_node->parent->parent->right);
	return (my_->parent->parent->left);
}
