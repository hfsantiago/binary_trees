#include <stdlib.h>
#include "binary_trees.h"
/**
 *height - measures the height of a binary tree
 *@tree: is a pointer to the root node of the tree
 *Return: The height of the tree if is NULL return 0
 */
size_t height(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = height(tree->left);
	r = height(tree->right);

	return ((l > r ? l : r) + 1);
}
/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: is a pointer to the root node of the tree
 *Return: The height of the tree if is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree) - 1);
}
