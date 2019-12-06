#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that instert a node in a left child
 * in the tree.
 * @parent: parent node.
 * @value: Value of the node.
 * Return: The addres of the new node or NULL if it fails.
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left = node;
		node->parent = parent;
		node->left->parent = node;

	}
	else
	{
		parent->left = node;
		node->parent = parent;
	}
	return (node);
}
