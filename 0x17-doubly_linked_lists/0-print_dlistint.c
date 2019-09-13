#include "lists.h"
/**
 * print_dlistint - Function that iterate over the linked lists and print
 * each one.
 * @h: element of the list
 * Return: The number of elements in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numberOfElements;

	for (numberOfElements = 0; h != NULL; h = h->next, numberOfElements++)
	{
		printf("%d\n", h->n);
	}

	return (numberOfElements);
}
