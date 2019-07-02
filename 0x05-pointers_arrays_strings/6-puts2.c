#include "holberton.h"
/**
 * puts2 - Entry point
 * This is a function for print characters (out of 2 of a string)
 * @str: This is a parameter that entry in the function
 */
void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{

		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
