#include "holberton.h"
/**
 * _strlen - Entry point
 * This is a function for count the number of letters of a string
 * @s: Is the variable where is the string
 * Return: This function return a int, that is the number of letters
*/
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
