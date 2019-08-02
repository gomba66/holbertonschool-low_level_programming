#include "lists.h"
/**
 * list_len - This is a function for count the nodes and return this counter
 * @h: This is the direccion structure
 * Return: total of nodes.
 */
size_t list_len(const list_t *h)
{
	int x;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
