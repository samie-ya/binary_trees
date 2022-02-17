#include "binary_trees.h"

/**
* full_recursion - determines if full
* @tree: the tree
*
* Return: 1 if full, otherwise 0
*/
int full_recursion(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (full_recursion(tree->left) * full_recursion(tree->right));
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the tree
 *
 * Return: 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);

        return (full_recursion(tree));
}
