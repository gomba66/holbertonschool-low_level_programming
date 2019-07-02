#include "holberton.h"
/**
 * _puts - Entry point
 * This is a function for print a string of characters
 * @str: is the string that to recibe
 */
void _puts(char *str)
{
	int s;

	s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
