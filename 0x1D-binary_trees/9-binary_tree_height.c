#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree.
 * @tree: Tree.
 * Return: The number node's childs.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		count++;
	if (tree->right != NULL)
		count++;
	return count;
}
