#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest ancestor of 2 nodes
 * @first:first node
 * @second: second node
 * Return: If no common ancestors return NULL, 0 if fails
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *ups, *down;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	ups = first->parent, down = second->parent;
	if (first == down || !ups || (!ups->parent && down))
		return (binary_trees_ancestor(first, down));
	else if (ups == second || !down || (!down->parent && ups))
		return (binary_trees_ancestor(ups, second));
	return (binary_trees_ancestor(ups, down));
}
