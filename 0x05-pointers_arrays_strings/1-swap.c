#include "holberton.h"
/**
 * swap_int - Entry point
 * This is a function for swap the values of two integers
 * @a: is the first value
 * @b: is the second value
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
