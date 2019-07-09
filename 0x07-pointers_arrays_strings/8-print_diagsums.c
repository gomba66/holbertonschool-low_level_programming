#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input a
 * @size: size matrix
 * Return: none
 */



void print_diagsums(int *a, int size)
{

	int i, x = 0, z = 0;

	for (i = 0; i < size; i++)
	{
		x = x + a[(size * i) + i];
		z = z + a[(size - 1) * (i + 1)];

	}
	printf("%d, %d\n", x, z);

}
