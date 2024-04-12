#include "binary_trees.h"


/**
 * array_to_bst - Buids a search tree binary from an array
 *
 * @array: pointer to array
 * @size: int array
 * Return: constructed array
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t arr, l;

	if (array == NULL)
		return (NULL);

	for (arr = 0; arr < size; arr++)
	{
		if (bst_insert(&tree, array[arr]) == NULL)
		{
			for (l = 0; l < size && array[l] != array[arr]; l++)
			{}

			if (l == arr)
				return (NULL);
		}
	}

	return (tree);
}
