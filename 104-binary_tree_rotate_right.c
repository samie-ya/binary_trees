#include "binary_trees.h"

/**
* binary_tree_rotate_right - performs a right-rotation on a binary tree
* @tree: the tree
*
* Return: pointer to a binary_tree_t
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new, *root;

	new = NULL;
	root = NULL;
	if (tree == NULL)
		return (tree);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (tree);

	new = tree->left;
	tree->left = new->right;

	if (new->right != NULL)
		new->right->parent = tree;
	new->parent = tree->parent;
	if (tree->parent == NULL)
		root = new;
	else if (tree == tree->parent->right)
		tree->parent->right = new;
	else
		tree->parent->left = new;

	new->right = tree;
	tree->parent = new;
	if (root != NULL)
		return (root);
	return (new);
}
