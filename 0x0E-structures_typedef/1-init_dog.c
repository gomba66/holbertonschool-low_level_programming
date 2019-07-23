#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Entry point
 * This is a function for initializate the dog structure
 * @d: This is the structure.
 * @name: This is the name of the dog.
 * @age: This is the age of the dog.
 * @owner: This is the name of the owner.
 * Return: the structure.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
