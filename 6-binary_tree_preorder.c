#include "binary_trees.h"

/**
 * binary_tree_preorder - Treaverses a root node of the tree with a preOrder func
 * @tree: root node of the tree to triverse
 * @func: pointer to the root node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree && !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
