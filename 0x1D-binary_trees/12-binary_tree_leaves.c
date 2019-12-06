#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that says you the number of leaves.
 * @tree: Tree.
 * Return: The number of leaves of the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total2 = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right != NULL && tree->left != NULL)
		total2 = (binary_tree_leaves(tree->right));
	return (total2 + 1);
}
