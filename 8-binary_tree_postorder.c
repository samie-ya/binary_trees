#include "binary_trees.h"

/**
* binary_tree_postorder - This fucntion will go through the
*                        tree in postorder fashion
*
* @tree: the tree to be checked
*
* @func: the function pointer to be used
*
* Return: Nothing
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, (*func));
	binary_tree_postorder(tree->right, (*func));
	(*func)(tree->n);
}
