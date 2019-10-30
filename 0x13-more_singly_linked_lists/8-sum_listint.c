#include "lists.h"
/**
 * sum_listint - Function that adds all the value integers of a linked list.
 * @head: Head of the list.
 * Return: The total sum of all elements.
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
	{
		return (total);
	}

	while (head != NULL)
	{
		total = total + head->n;
		head = head->next;
	}

	return (total);
}
