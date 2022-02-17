#include "binary_trees.h"

/**
* binary_tree_depth - This function finds the depth of a node
*
* @tree: Node given
*
* Return: depth of the node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent;

	if (tree == NULL)
		return (0);
	else if (tree->parent == NULL)
		return (0);
	parent = binary_tree_depth(tree->parent);
	return (parent + 1);
}
