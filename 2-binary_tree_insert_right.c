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
	binary_tree_t *new, *rt = NULL;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	if (parent->right != NULL)
	{
		rt = parent->right;
		parent->right = new;
		new->right = rt;
		rt->parent = new;
		return (new);
	}
	else
	{
		parent->right = new;
		new->right = NULL;
		return (new);
	}
}
