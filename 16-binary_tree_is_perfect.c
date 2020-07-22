#include <stdlib.h>
#include "binary_trees.h"

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

size_t height(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = height(tree->left);
	r = height(tree->right);

	return ((l > r ? l : r) + 1);
}

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

