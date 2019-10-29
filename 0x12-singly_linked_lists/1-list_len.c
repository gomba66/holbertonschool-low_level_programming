#include "lists.h"
/**
 * list_len - Function that returns the number of elements
 * in the linked list.
 *
 * @h: head of the list.
 * Return: The number of nodes of the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
