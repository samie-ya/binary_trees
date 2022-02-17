#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return NULL;

        node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return NULL;

	if (parent->right != NULL)
		node->right = parent->right;

	parent->right = node;
	node->n = value;
	return node;
}
