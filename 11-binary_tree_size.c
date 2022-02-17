#include "binary_trees.h"

/**
* binary_tree_size - This will count the number of nodes in a tree
*
* @tree: the starting node for counting
*
* Return: the size of the node
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count, left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	count = left + right + 1;
	return (count);
}
