#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at the beginning of the
 * linked list.
 * @head: Head of the linked list.
 * @n: Value of the node (integer).
 * Return: The addres of the new element or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
