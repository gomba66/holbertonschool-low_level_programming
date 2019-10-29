#include "lists.h"
/**
 * pop_listint - Function that removes the first element of
 * a linked list, and returns the value removed.
 * @head: Head of the linked list.
 * Return: The value removed or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int temp = 0;
	listint_t *temph;

	if (*head == NULL)
	{
		return (temp);
	}
	temph = *head;
	temp = (*head)->n;
	*head = (*head)->next;
	free(temph);

	return (temp);
}
