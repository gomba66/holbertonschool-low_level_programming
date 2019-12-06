#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Function tha returns 1 if the node is a leaf,
 * or 0 in otherwise.
 * @node: Node that will be analized.
 * Return: 1 or 0
 **/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right != NULL || node->left != NULL)
		return (0);
	else
		return (1);

}
