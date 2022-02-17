#include "binary_trees.h"

/**
* height_recursion - finds height
* @tree: the tree
*
* Return: the height
*/
size_t height_recursion(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = height_recursion(tree->left);
	right_height = height_recursion(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
* binary_tree_height - finds height of binary tree
* @tree: the tree
*
* Return: height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (height_recursion(tree) - 1);
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: the tree
*
* Return: the balance factor, otherwise 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	left_height = 0;
	right_height = 0;
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
