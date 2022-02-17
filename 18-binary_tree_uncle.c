#include "binary_trees.h"

/**
* binary_tree_sibling - determine the sibling of a node
* @node: the node
*
* Return: pointer to a binary_tree_t
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

/**
* binary_tree_uncle - determines the uncle of the node
* @node: the node
*
* Return: pointer to a binary_tree_tw
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
