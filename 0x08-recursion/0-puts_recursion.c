#include "holberton.h"
/**
 * _puts_recursion - Entry point
 * This is a function for print a string using recursions
 * Return: the string, character per character
 * @s: is the string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
