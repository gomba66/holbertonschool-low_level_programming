#include "binary_trees.h"
/**
 * binary_tree_node - Function that create a binary tree node.
 * @parent: root of the tree.
 * @value: value of the root.
 * Return: A pointer to a binary tree.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->parent = parent;
		node->n = value;
	}

	return (node);
}
