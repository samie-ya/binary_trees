#include "binary_trees.h"

/**
* insert_recursion - inserts a value in a Binary Search Tree
* @value: the value
*
* Return: pointer to a bst_t
*/
bst_t *insert_recursion(bst_t *tree, int value)
{
        if (tree == NULL)
                return (NULL);

        if (value < tree->n)
        {
                if (tree->left != NULL)
                        return (insert_recursion(tree->left, value));
                else
                        return (tree);
        }

        else if (value > tree->n)
        {
                if (tree->right != NULL)
                        return (insert_recursion(tree->right, value));
                else
                        return (tree);
        }

        return (NULL);
}

/**
* bst_insert - inserts a value in a Binary Search Tree
* @tree: the tree
* @value: the value
*
* Return: pointer to a bst_t
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node, *parent;

	new_node = NULL;
	parent = NULL;
	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}

	parent = insert_recursion(*tree, value);

	if (parent)
		new_node = binary_tree_node(parent, value);
	else
		return (NULL);

	if (value < parent->n)
		parent->left = new_node;
	else
		parent->right = new_node;

	return (new_node);
}
