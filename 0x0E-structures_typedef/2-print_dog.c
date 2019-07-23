#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Entry point
 * This is a function for print the dog structure
 * @d: This is the structure
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
       	printf("Name: %s\n",d->name);
	printf("Age: %f\n",d->age);
	printf("Owner: %s\n",d->owner);
	}
}
