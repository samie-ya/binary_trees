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
* levelorder_recursion - goes through a binary tree using\
* level-order traversal
* @tree: the tree
* @func: function pointer
* @level: level of the tree
*
* Return: always void
*/
void levelorder_recursion(const binary_tree_t *tree,
	void (*func)(int), size_t level)
{
	if (tree == NULL)
		return;

	if (level == 0)
		func(tree->n);

	levelorder_recursion(tree->left, func, level - 1);
	levelorder_recursion(tree->right, func, level - 1);
}

/**
* binary_tree_levelorder - goes through a binary tree using\
* level-order traversal
* @tree: the tree
* @func: function pointer
*
* Return: always void
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, level;

	level = 0;
	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);

	while (level <= height)
	{
		levelorder_recursion(tree, func, level);
		level++;
	}
}
