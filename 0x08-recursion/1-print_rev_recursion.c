#include "holberton.h"
/**
 * _print_rev_recursion - Entry point
 * This is a function for print a string in reverse
 * Return: Nothing
 * @s: This is the string
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
