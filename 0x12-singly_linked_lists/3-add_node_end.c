#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - Function for add a new node at the end of the list.
 * @head: Head of the list.
 * @str: Value of the node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *str2 = strdup(str);
	list_t *temp = *head;

	if (str2 == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = str2;
	new_node->next = NULL;
	new_node->len = _len(str);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;


	return (new_node);
}
/**
 * _len - Function that return the lenght of a constant string.
 * @str: string.
 * Return: len of the string.
 */
int _len(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
