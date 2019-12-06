#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function that insert a new node in the right side
 * of the brach of the tree.
 * @parent: Parent node.
 * @value: Value of the node.
 * Return: An Address of the new node or NULL if it fail.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->right = NULL;
	node->left = NULL;

	if (parent->right != NULL)
	{
		node->parent = parent;
		node->right = parent->right;
		(parent->right)->parent = node;
		parent->right = node;
	}
	else
	{
		parent->right = node;
		node->parent = parent;
	}
	return (node);
}
