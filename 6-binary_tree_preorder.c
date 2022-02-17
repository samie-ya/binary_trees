#include "binary_trees.h"

/**
* binary_tree_preorder - This fucntion will go through the
*                        tree in preorder fashion
*
* @tree: the tree to be checked
*
* @func: the function pointer to be used
*
* Return: Nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, (*func));
	binary_tree_preorder(tree->right, (*func));
}
