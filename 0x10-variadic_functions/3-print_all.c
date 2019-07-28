#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_char(va_list x)
{
	printf("%c", (char) va_arg(x, int));
}

void print_int(va_list x)
{
	printf("%d", va_arg(x, int));
}
void print_float(va_list x)
{
	printf("%f", (float)va_arg(x, double));
}
void print_string(va_list x)
{
	printf("%s", va_arg(x, char *));
}

/**
 * print_all - Function that print anything data-type
 * @format: Is the format data
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list x;
	char *separator = "";
	int j, i = 0;
	tp a[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(x, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == a[j].c[0])
			{
				printf("%s", separator);
				a[j].f(x);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(x);

}
