#include <stdlib.h>
#include "binary_trees.h"

size_t depth(const binary_tree_t *tree, size_t depth_t)
{
	if (tree)
	{
		return depth(tree->parent, depth_t + 1);
	}

	return (depth_t);
}


size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (depth(tree, 0) - 1);
}

