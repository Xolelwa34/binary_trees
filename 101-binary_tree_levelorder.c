#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: the height of the tree, or 0 if not
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->l);
	r = binary_tree_height(tree->r);
	if (l >= r)
		return (1 + l);
	return (1 + r);
}

/**
 * workon_tree_level - Perfom functions in a level order binary tree
 * @tree: pointer to the root node of the tree
 * @l: level of the tree
 * @func: function to use
 *
 * Return: nothing
 */
void workon_tree_level(const binary_tree_t *tree, size_t level_p, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level_p == 1)
		func(tree->n);
	else if (level_p > 1)
	{
		binary_tree_level(tree->left, level_p - 1, func);
		binary_tree_level(tree->right, level_p - 1, func);
	}
}

/**
 * binary_tree_levelorder - traverse a binary_tree and mantain current nodes
 * @tree: pointer to root node
 * @func: node function
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, head;

	if (tree == NULL || func == NULL)
		return;
	h = binary_tree_h(tree);
	for (head = 1; head <= h; head++)
		binary_tree_level(tree, head, func);
