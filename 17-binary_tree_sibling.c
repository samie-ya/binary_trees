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
	binary_tree_t *parent;

	parent = node->parent;
	if (node == NULL)
		return (NULL);
	if (parent != NULL)
	{
		if (parent->left != NULL && parent->left == node)
			return (parent->right);
		else if (parent->right != NULL && parent->right == node)
			return (parent->left);
		else if (parent->right == NULL && parent->left == node)
			return (NULL);
		else if (parent->left == NULL && parent->right == node)
			return (NULL);
	}
	return (NULL);
}
