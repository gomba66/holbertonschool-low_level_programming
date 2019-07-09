#include "holberton.h"
/**
 * print_chessboard - Entry point
 * this is a function for print a chess
 * @a: The array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
