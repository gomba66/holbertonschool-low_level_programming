#include "binary_trees.h"
/**
 * binary_tree_inorder - Function that prints the nodes of a tree in inorder.
 * @tree: Tree.
 * @func: Function that prints each node of the tree.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}

}
