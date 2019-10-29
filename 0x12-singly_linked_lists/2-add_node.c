#include "lists.h"
/**
 * add_node - Function that add a new node at the beginning of
 * the singly linked list.
 *
 * @head: Head of the linked list.
 * @str: value for the new node.
 * Return: The address of the new node or NULL in otherwise.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *temp = NULL;
	char *str2;
	int i = 0;

	str2 = malloc(sizeof(char) * _len(str));
	if (str2 == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	temp = *head;
	*head = new_node;
	new_node->next = temp;
	new_node->str = str2;
	new_node->len = _len(str2);

	return (*head);
}
int _len(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
