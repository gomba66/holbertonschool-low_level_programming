#include "binary_trees.h"
/**
 * binary_tree_delete - Function that delete all nodes of the tree.
 * @tree: Tree that will be deleted.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	free(tree);
}
