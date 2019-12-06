#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that says you the number of leaves.
 * @tree: Tree.
 * Return: The number of leaves of the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t total1 = 0;
size_t total2 = 1;

if (tree == NULL)
{
return (0);
}

if (tree->left != NULL)
	total1 = (binary_tree_leaves(tree->left));
if (tree->right != NULL)
	total2 = (binary_tree_leaves(tree->right));
return (total1 + total2);
}
