#include "lists.h"
/**
 * free_listint2 - Function that frees all the linked list and set the
 * head in NULL value.
 * @head: Head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
