#include "holberton.h"
/**
 * str_concat - Function for concatenate two strings using malloc.
 * @s1: First string.
 * @s2: Second string.
 * Return: a pointer to the new string or NULL on fail.
 */
char *str_concat(char *s1, char *s2)
{
	char *newstring;
	int t1 = 1, t2 = 1, i = 0, total = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[i] != '\0')
	{
		t1++;
		i++;
	}
	i = 0;
	if (s2 == NULL)
		s2 = "";
	while (s2[i] != '\0')
	{
		t2++;
		i++;
	}
	total = t1 + t2;
	newstring = malloc(sizeof(char) * (total - 1));
	if (newstring == NULL)
		return (NULL);
	i = 0;
	while (i < t1)
	{
		newstring[i] = s1[i];
			i++;
	}
	t2 = 0;
	i = i - 1;
	while (i < total)
	{
		newstring[i] = s2[t2];
			t2++;
		i++;
	}
	return (newstring);
}
