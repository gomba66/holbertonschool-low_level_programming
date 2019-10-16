#include "holberton.h"
/**
 * size - Function for obtain the size of the string.
 * @s: string.
 * Return: size of the string.
 */
int size(char *s)
{
	int tsize = 0;

	if (*s != '\0')
	{
		tsize++;
		return (tsize + size(s + 1));
	}
	else
		return (tsize);
}
/**
 * comp - comp chars
 * @s: string.
 * @size: size.
 * @i: iterator.
 * Return: 1 if is palindrome / 0 in otherwise
 */
int comp(char *s, int size, int i)
{
	if (i >= size)
		return (1);
	else if (s[i] == s[size])
		return (comp(s, size - 1, i + 1));
	else
		return (0);
}
/**
 * is_palindrome - catculates size of a str
 * @s: string
 * Return: 1 if is palindrome / 0 in otherwise
 */
int is_palindrome(char *s)
{
	int sz = size(s);
	int i = 0;

	return (comp(s, sz - 1, i));
}
