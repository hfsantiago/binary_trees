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

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (size(tree) - 1);
}
