#include "lists.h"
/**
 * listint_len - This function return the number of elements in a linked list
 * @h: Is the structure.
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
