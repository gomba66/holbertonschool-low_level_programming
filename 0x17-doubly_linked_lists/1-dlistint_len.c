#include "lists.h"
/**
 * dlistint_len - Funct that count the number of elements in a list.
 * @h: Node or element of the list.
 * Return: The number of elements of the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numberOfElements;

	for (numberOfElements = 0; h != NULL; h = h->next, numberOfElements++)
		;
	return (numberOfElements);
}
