#include "lists.h"
/**
 * print_listint - Function for to print all the elements of a linked list
 * that is composed by integer.
 * @h: Head of the list.
 * Return: The number of elements.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
