#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - Function that print all elements of a list.
 * @h: This is the structure
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}


	return (x);
}
