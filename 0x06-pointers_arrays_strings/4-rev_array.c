#include "holberton.h"
/**
 * reverse_array - Entry point
 * @a: this is the array that the program return in reverse
 * @n: this is the value of space from the array
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	n = n - 1;
	while (i < (n / 2))
	{
		tmp = a[n];
		a[n] = a[i];
		a[i] = tmp;
		i++;
		n--;
	}
}
