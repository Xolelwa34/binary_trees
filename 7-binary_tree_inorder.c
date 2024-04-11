#include "binary_trees.h"

/**
 * binary_tree_inorder - recursively goes throun in-orderr function by traversing the binary_tree
 * @tree: root node to traverse
 * @func: pointer to root node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
