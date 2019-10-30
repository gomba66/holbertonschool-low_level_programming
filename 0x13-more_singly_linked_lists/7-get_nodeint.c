#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns a n node using a index.
 * @head: Head of the list.
 * @index: The index for obtain the node.
 * Return: The node indexed, if it doesn't exist return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 1;

	while (n <= index)
	{
		head = head->next;
		n++;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
