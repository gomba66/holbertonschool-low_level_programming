#include "lists.h"
/**
 * listint_len - Function that returnt the number of elements in a linked list.
 * @h: Head of the list.
 * Return: The number of nodes (elements) in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
