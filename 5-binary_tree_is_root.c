#include "binary_trees.h"

/**
* binary_tree_is_root - This function will check if a node is a oot
*
* @node: the node to be checked
*
* Return: 1 if it is node else 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
		else
			return (0);
	}
	return (0);
}
