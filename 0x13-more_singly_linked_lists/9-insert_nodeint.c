#include "lists.h"
/**
 * insert_nodeint_at_index - Function that instert a new node in the
 * singly linked list, using an index.
 * @head: Head of the linked list.
 * @idx: Index of the list.
 * @n: Value of the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int iterator = 1;
	listint_t *new_node = NULL;
	listint_t *temp;
	listint_t *head2 = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
		return (NULL);

	if (idx == 0)
	{
		*head = new_node;
		new_node->next = head2;
		return (new_node);
	}
	while (iterator < idx)
	{
		head2 = head2->next;
		iterator++;
		if (head2 == NULL)
			return (NULL);
	}
	temp = head2->next;
	head2->next = new_node;
	new_node->next = temp;

	return (new_node);
}
