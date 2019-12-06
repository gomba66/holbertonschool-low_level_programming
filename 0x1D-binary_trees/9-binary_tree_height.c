#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - Function that measures the height of a binary tree.
 * @tree: Tree.
 * Return: The number node's childs.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side = 0;
	size_t right_side = 0;

	if (tree == NULL)
		return (0);


	if (tree->left != NULL)
		left_side = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_side = 1 + binary_tree_height(tree->right);
	if (right_side > left_side)
	{
		return (right_side);
	}
	else
		return (left_side);
}
