#include "lists.h"
#include <stdio.h>
/**
 * print_list - This is a function that prints all the elements
 * of a singly linked list and returns the number of nodes.
 *
 * @h: head of the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] %p\n", h->str);
		h = h->next;
		n++;
	}

	return (n);
}
