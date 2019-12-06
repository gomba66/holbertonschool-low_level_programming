#include "binary_trees.h"
/**
 * binary_tree_size - This is a function that returns the size of the tree.
 * @tree: Tree.
 * Return: size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_side = 0;
	size_t right_side = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_side = binary_tree_size(tree->left);
	if (tree->right != NULL)
		right_side = binary_tree_size(tree->right);

	return (right_side + left_side + 1);
}
