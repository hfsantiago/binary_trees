#include <stdlib.h>
#include "binary_trees.h"
/**
 *size - measures ....
 *@tree: is a pointer to the root node of the tree
 *Return: The height of the tree if is NULL return 0
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
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: is a pointer to the root node of the tree to check
 *Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_l, height_r;
	int size_l, size_r;

	if (!tree)
		return (0);

	height_l = height(tree->left);
	height_r = height(tree->right);

	size_l = size(tree->left);
	size_r = size(tree->right);

	return (height_l == height_r && size_l == size_r);
}

