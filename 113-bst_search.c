#include "binary_trees.h"

/**
* bst_search - This function will search BST for a value
*
* @tree: the treen to be checked
*
* @value: the value to be checked
*
* Return: the node with value
*/

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node;

	if (tree == NULL)
		return (NULL);
	if (value == tree->n)
		return ((bst_t *)tree);
	if (value < tree->n)
		node = bst_search(tree->left, value);
	else
		node = bst_search(tree->right, value);
	return (node);
}
