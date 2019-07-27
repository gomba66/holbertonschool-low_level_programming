#include <stdarg.h>
/**
 * sum_them_all - Entry point
 * This is a variadic function for add multiples args
 * @n:Is the number of items that entry like args
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		int sum = 0;
		unsigned int x;
		va_list numeros;

		va_start(numeros, n);
		for (x = 0; x < n; x++)
		{
			sum = sum + va_arg(numeros, int);
		}
		va_end(numeros);
		return (sum);
	}
}
