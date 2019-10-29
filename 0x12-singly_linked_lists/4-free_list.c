#include "lists.h"
/**
 * free_list - Function that freezed all the linked list.
 * @head: head of the list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
