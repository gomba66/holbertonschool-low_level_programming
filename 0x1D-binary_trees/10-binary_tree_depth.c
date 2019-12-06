#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth
 * of a node in a binary tree.
 * @tree: Tree.
 * Return: The number of depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		total = 1 + binary_tree_depth(tree->parent);
	return (total);
}
