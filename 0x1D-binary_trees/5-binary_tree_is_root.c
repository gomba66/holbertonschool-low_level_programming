#include "binary_trees.h"
/**
 * binary_tree_is_root - Function that says you if a node is the root
 * of the tree.
 * @node: Node that will be analized.
 * Return: 1 if the node is root, 0 in otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
