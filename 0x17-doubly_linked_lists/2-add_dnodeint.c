#include "lists.h"
/**
 * add_dnodeint - Function that add a new node at the beginning
 * @head: Head of the list.
 * @n: Integer that storage in each node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (new->next != NULL)
	{
		(new->next)->prev = new;
	}
	*head = new;
	return (new);
}
