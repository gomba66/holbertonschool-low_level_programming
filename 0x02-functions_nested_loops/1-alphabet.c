#include "holberton.h"
/**
 * print_alphabet - Entry point
 *
 * No-Return: repeat a loop to print letters
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
