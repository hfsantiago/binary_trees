#include <stdlib.h>
#include "binary_trees.h"
/**
 *depth - measures the depth of a node in a binary tree
 *@tree: is a pointer to the node to measure the depth
 *@depth_t: is a...
 *Return: The depth of a node.
 */
size_t depth(const binary_tree_t *tree, size_t depth_t)
{
	if (tree)
	{
		return (depth(tree->parent, depth_t + 1));
	}

	return (depth_t);
}
/**
 *binary_tree_depth - measures the depth of a node in a binary tree
 *@tree: is a pointer to the node to measure the depth
 *Return: The depth of a node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (depth(tree, 0) - 1);
}

