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
	binary_tree_t *parent, *sib;

	parent = node->parent;
	if (node == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	if (parent->left != NULL && parent->left == node)
		return (parent->right);
	else if (parent->right != NULL && parent->right == node)
		return (parent->left);
	sib = binary_tree_sibling(parent->left);
	if (sib != NULL)
		return (sib);
	sib = binary_tree_sibling(parent->right);
		return (sib);
}
