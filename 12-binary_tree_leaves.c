#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_is_leaf - checks if a node is a leaf
 *@node: Is a pointer to the node to check
 *Return: 1 if node is a leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (node->left == NULL && node->right == NULL);
}

/**
 * leaves - Counts the numbers of leaf in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the numbers of lvs;
 *
 * Return: The amount of leaves
 **/
size_t leaves(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = leaves(tree->left);
	r = leaves(tree->right);

	return (l + r + binary_tree_is_leaf(tree));
}

/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree:  is a pointer to the root node of the tree to count the number of lvs.
 *Return: The amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (leaves(tree));
}
