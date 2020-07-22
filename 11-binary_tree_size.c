#include <stdlib.h>
#include "binary_trees.h"
/**
 *size- XXXXXXXXX
 *@tree: is a pointer to the root node of the tree
 *Return: 1 ...
 */
size_t size(const binary_tree_t *tree)
{
	int l, r;

	if (tree)
	{
		l = size(tree->left);
		r = size(tree->right);
		return (l + r);
	}

	return (1);
}
/**
 *binary_tree_size - measures the size of a binary tree
 *@tree: is a pointer to the root node of the tree
 *Return: The size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (size(tree) - 1);
}
