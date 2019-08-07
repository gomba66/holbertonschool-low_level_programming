#include "lists.h"
/**
 * add_nodeint - Function that add a new node at the beginning.
 * @head: Is the first element of the list.
 * @n: Is the data that is inside of node (integer type).
 * Return:The address of the new element or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
