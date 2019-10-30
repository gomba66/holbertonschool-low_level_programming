#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - Function that removes a node in the linked list,
 * in an specific position using an index.
 * @head: Head of the list.
 * @index: Index for to navigate through the list.
 * Return: 1 On success or -1 in otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int status = 1;
	unsigned int n = 1;
	listint_t *temph = *head, *temp2 = NULL;

	if (*head == NULL)
	{
		return (status * -1);
	}
	if (index == 0)
	{
		*head = temph->next;
		free(temph);
		return (1);
	}

	while (n < index)
	{
		temph = temph->next;
		n++;
	}
	temp2 = temph->next;
	temph->next = temph->next->next;
	free(temp2);
	return (status);
}
