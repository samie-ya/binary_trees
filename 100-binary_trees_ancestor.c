#include "binary_trees.h"

/**
* ancestor_recursion - finds the lowest common ancestor of two nodes
* @root: the root
* @first: pointer to the first child
* @second: pointer to the second child
*
* Return: pointer to a binary_tree_t
*/
binary_tree_t *ancestor_recursion(binary_tree_t *root,
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *left_lca, *right_lca;

	left_lca = NULL;
	right_lca = NULL;
	if (root == NULL || first == NULL || second == NULL)
		return (NULL);

	if (root == first || root == second)
		return (root);

	left_lca = ancestor_recursion(root->left, first, second);
	right_lca = ancestor_recursion(root->right, first, second);

	if (left_lca && right_lca)
		return (root);

	if (left_lca != NULL)
		return (left_lca);
	return (right_lca);
}

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: the first node
* @second: the second noder
*
* Return: pointer to binary_tree_t
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *root = NULL;

	if (first == NULL || second == NULL)
		return (NULL);

	root = (binary_tree_t *)first;
	while (root->parent != NULL)
		root = root->parent;

	return (ancestor_recursion(root, first, second));
}
