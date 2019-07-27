#include "dog.h"
#include <stdio.h>
/**
 * print_dog - This is a function for print a structure
 * @d: This is the structure that i need to print
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
