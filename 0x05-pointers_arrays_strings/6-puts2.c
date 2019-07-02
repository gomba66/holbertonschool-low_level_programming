#include "holberton.h"
/**
 * puts2 - Entry point
 * This is a function for print characters (out of 2 of a string)
 * @str: This is a parameter that entry in the function
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\0');
	_putchar('\n');
}
