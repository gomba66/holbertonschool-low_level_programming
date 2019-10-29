#include "lists.h"
/**
 * free_listint - Function that frees a single linked list.
 * @head: Head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
