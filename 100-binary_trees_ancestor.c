#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

binary_tree_t *get_opposite(const binary_tree_t *node)
{
	binary_tree_t *parent;

	if(!node)
		return (NULL);

	if (!(parent = node->parent))
		return (NULL);

	if (parent->left == node)
		return (parent->right);

	return (parent->left);
}

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *parent_f, *parent_s;
	binary_tree_t *op_f, *op_s;

	if (!first || !second)
		return (NULL);

	while ((parent_f = first->parent) && (parent_s = second->parent))
	{
		if (parent_f == parent_s)
			return (parent_f);

		if ((op_f = get_opposite(first)) && op_f == parent_s)
			return (op_f->parent);

		if ((op_s = get_opposite(second)) && op_s == parent_f)
			return (op_s->parent);

		if (first == parent_s)
			return (parent_s);

		if (second == parent_f)
			return (parent_f);

		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}
