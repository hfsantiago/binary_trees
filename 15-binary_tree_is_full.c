#include <stdlib.h>
#include "binary_trees.h"
/**
 *full - checks if a binary tree is full
 *@tree: is a pointer to the root node of the tree
 *Return: 0 or 1
 */
int full(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	if (tree->right && !tree->left)
		return (0);

	if (!tree->right && tree->left)
		return (0);

	l = full(tree->left);
	r = full(tree->right);

	return (l == r);
}
/**
 *binary_tree_is_full - checks if a binary tree is full
 *@tree: is a pointer to the root node of the tree
 *Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (full(tree));
}

