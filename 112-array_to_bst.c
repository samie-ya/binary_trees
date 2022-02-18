#include "binary_trees.h"

/**
* array_to_bst - This function will craete BST from array
*
* @array: the array used
*
* @size: the size of the array
*
* Return: the root
*/

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *parent = NULL;

	for (i = 0; i < size; i++)
	{
		bst_insert(&parent, array[i]);
	}
	return (parent);
}
