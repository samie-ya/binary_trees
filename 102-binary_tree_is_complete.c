#include "binary_trees.h"

/**
* number_nodes - This will count the number of nodes in a tree
*
* @tree: the starting node for counting
*
* Return: the size of the node
*/

int number_nodes(const binary_tree_t *tree)
{
	int count, left, right;

	if (tree == NULL)
		return (0);
	left = number_nodes(tree->left);
	right = number_nodes(tree->right);
	count = left + right + 1;
	return (count);
}

/**
* if_complete - this function will do recursion to check for completeness
*
* @tree: the node to be checked
*
* @index: set to 0
*
* @size: size of the tree
*
* Return: 1 if complete else 0
*/

int if_complete(const binary_tree_t *tree, int index, int size)
{
	if (tree == NULL)
		return (1);
	if (index >= size)
		return (0);
	return (if_complete(tree->left, (2 * index) + 1, size) &&
		if_complete(tree->right, (2 * index) + 2, size));
}

/**
* binary_tree_is_complete - This will check if tree is complete
*
* @tree: the node to be checked
*
* Return: 1 if complete else 0
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size, index = 0;

	size = number_nodes(tree);
	if (if_complete(tree, index, size))
		return (1);
	else
		return (0);
}
