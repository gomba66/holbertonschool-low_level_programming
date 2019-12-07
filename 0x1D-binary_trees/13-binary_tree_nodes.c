#include "binary_trees.h"
/**
 * binary_tree_nodes - This function counts the nodes
 * with at least 1 child in a binary tree.
 * @tree: Tree.
 * Return: The number of nodes that have one or more childs
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (binary_tree_nodes(tree->left) + 1 +
		binary_tree_nodes(tree->right));
}
