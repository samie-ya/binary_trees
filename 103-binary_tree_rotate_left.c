#include "binary_trees.h"

/**
* binary_tree_rotate_left - performs a left-rotation on a binary tree
* @tree: the tree
*
* Return: pointer to a binary_tree_t
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new, *root;

	new = NULL;
	root = NULL;
	if (tree == NULL)
		return (tree);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (tree);

	new = tree->right;
	tree->right = new->left;

	if (new->left != NULL)
		new->left->parent = tree;
	new->parent = tree->parent;

	if (tree->parent == NULL)
		root = new;
	else if (tree == tree->parent->left)
		tree->parent->left = new;
	else
		tree->parent->right = new;

	new->left = tree;
	tree->parent = new;
	if (root != NULL)
		return (root);
	return (new);
}
