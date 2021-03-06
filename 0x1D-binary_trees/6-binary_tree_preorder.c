#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that print each node of the tree
 * in preorder.
 * @tree: Tree.
 * @func: Function that prints each node.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
