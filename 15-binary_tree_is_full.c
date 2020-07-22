#include <stdlib.h>
#include "binary_trees.h"

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

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (full(tree));
}

