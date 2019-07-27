#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Entry point
 * This is a function for print a list of items
 * @separator: this is the separator between items
 * @n: Is the mount of items that are passed to the function
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		int num;

		num = va_arg(numbers, int);
		if (separator != NULL)
		{
		printf("%d", num);
		}
		if (separator != NULL)
		{
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
		if (i == (n - 1))
		{
			printf("\n");
		}
	}
	va_end(numbers);
}
