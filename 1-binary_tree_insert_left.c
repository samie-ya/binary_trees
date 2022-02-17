#include "binary_trees.h"

/**
* binary_tree_insert_left - This function is used to insert to left child
*
* @parent: the parent of the new node
*
* @value: the valu eof the new node
*
* Return: the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *lt;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	if (parent->left != NULL)
	{
		lt = parent->left;
		parent->left = new;
		new->left = lt;
		lt->parent = new;
		return (new);
	}
	else
	{
		parent->left = new;
		new->left = NULL;
		return (new);
	}
}
