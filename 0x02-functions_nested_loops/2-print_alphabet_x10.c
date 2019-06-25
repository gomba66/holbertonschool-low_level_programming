#include <unistd.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 * No-return: This function print 10 times the alphabet
 * separated for new lines.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 10)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
