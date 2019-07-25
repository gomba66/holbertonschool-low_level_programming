#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Entry point
 * This is a function to print a name.
 * @name: string
 * @f: function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
