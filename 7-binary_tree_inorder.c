#include "binary_trees.h"

/**
* binary_tree_inorder - This fucntion will go through the
*                        tree in inorder fashion
*
* @tree: the tree to be checked
*
* @func: the function pointer to be used
*
* Return: Nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, (*func));
	(*func)(tree->n);
	binary_tree_inorder(tree->right, (*func));
}
