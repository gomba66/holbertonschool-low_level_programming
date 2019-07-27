#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Entry point
 * This is a function for print a list of items
 * @separator: this is the separator between items
 * @n: Is the mount of items that are passed to the function
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *x;
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(strings, char *);
		if (x == NULL)
		{
			printf("%p", x);
		}
		else
		{
		printf("%s", x);
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
	va_end(strings);
}
