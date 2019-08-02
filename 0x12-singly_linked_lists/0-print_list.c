#include "lists.h"
/**
 * print_list - This is a function that print the elements of a linked list
 * @h: is the struct
 * Return: the mount of nodes.
 */
size_t print_list(const list_t *h)
{
	int x;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] %p\n", h->str);
		}
		h = h->next;
		x++;
	}
	return (x);
}
