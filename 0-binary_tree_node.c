#include <stdlib.h>
#include "binary_trees.h"
/**
 *binary_tree_node - Makes a binary tree node
 *@parent: Pointer to parent node from the node to create
 *@value: Value into new node's maked
 *Return: A pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	new_node->n = value;

	return (new_node);
}

