#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 *
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node of the two given node
 **/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *aux;

	if (!first || !second)
		return (NULL);

	while (first)
	{
		for (aux = second; aux; aux = aux->parent)
			if (first == aux)
				return ((binary_tree_t *) aux);

		second = second->parent;
		first = first->parent;
	}

	return (NULL);
}
