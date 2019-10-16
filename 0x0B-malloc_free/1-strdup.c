#include "holberton.h"
/**
 * _strdup - Function that returns a pointer to a new string in HEAP memory
 * @str: string that is passed as argument.
 * Return: A pointer to the new string, NULL if str is null, NULL if it fail.
 */
char *_strdup(char *str)
{
	char *newstr = NULL;
	int i = 0, x = 0;

	if (str[0] == '\0' || str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	newstr = malloc(sizeof(char) * i);
	if (newstr == NULL)
		return (NULL);
	while (x <= i)
	{
		newstr[x] = str[x];
		x++;
	}
	return (newstr);
}
