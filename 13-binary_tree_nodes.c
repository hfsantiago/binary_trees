#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

size_t counts(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left && tree->right)
			return (counts(tree->left) + counts(tree->right) + 1);

		if (tree->left)
			return(counts(tree->left) + 1);

		if (tree->right)
			return (counts(tree->right) + 1);
	}

	return (0);
}

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (counts(tree));
}
