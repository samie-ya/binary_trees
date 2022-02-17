#include "binary_trees.h"

/**
* binary_tree_sibling - This function finds the sibling of a given node
*
* @node: the node whose sibling is to be found
*
* Return: The sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
