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

/**
* balance_recursion - utility for checking tree and subtrees
* @tree: the tree
*
* Return: the balance factor
*/
int balance_recursion(const binary_tree_t *tree)
{
	int balance;

	if (tree == NULL)
		return (0);

	balance = binary_tree_balance(tree);

	if (balance != 0)
		return (balance);

	return (balance_recursion(tree->left) || balance_recursion(tree->right));
}

/**
* binary_tree_is_perfect - checks if binary tree is perfect
* @tree: the tree
*
* Return: 1 if perfect, otherwise 9
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (balance_recursion(tree) == 0)
		return (1);

	return (0);
}
