#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts node to the right
* @parent: parent node
* @value: value of the node
*
* Return: pointer to a binary_tree_t
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *rt = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	if (parent->right != NULL)
	{
		rt = parent->right;
		parent->right = node;
		node->right = rt;
		rt->parent = node;
	}
	else
	{
		parent->right = node;
		node->right = NULL;
	}
	return (node);
}
