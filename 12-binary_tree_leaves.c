#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	counter += tree->left != NULL;
	counter += tree->right != NULL;

	return (counter > 0 ? counter : 1);
}
