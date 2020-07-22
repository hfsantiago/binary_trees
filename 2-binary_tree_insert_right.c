#include <stdlib.h>
#include "binary_trees.h"
/**
 *binary_tree_insert_right - Inserts a node as the right-child of another node
 *@parent: is a pointer to the node to insert the right-child in
 *@value: is the value to store in the new node
 *Return: A pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	new_node->right = parent->right;
	if (parent->right)
		parent->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
