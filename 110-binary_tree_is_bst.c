#include "binary_trees.h"

/**
* bst_recursion - checks if a binary tree is a valid Binary Search Tree
* @tree: the tree
* @min: current minimum
* @max: current maximum
*
* Return: 1 if it's BST, otherwise 0
*/
int bst_recursion(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if ((tree->n < min) || (tree->n > max))
		return (0);

	return (bst_recursion(tree->left, min, tree->n - 1)
		&& bst_recursion(tree->right, tree->n + 1, max));
}

/**
* binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
* @tree: the tree
*
* Return: 1 if it's BST, otherwise 0
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bst_recursion(tree, INT_MIN, INT_MAX));
}
