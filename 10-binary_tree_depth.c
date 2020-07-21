#include <stdlib.h>
#include "binary_trees.h"

size_t depth(const binary_tree_t *tree, size_t depth_t)
{
	int l, r;
	if (tree)
	{
		l = depth(tree->left, depth_t + 1);
		r = depth(tree->right, depth_t + 1);
		return l > r? l: r;
	}

	return (depth_t);
}


size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (depth(tree, 0));
}

