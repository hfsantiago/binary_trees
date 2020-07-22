#include "binary_trees.h"
#include "stdlib.h"
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (0);

	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}

