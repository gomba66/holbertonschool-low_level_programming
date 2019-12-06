#include "binary_trees.h"
/**
 * binary_tree_postorder - Function that prints each node of the tree in
 * postorder way.
 * @tree: Tree.
 * @func: Function that print each node of the tree.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}

}
