#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function that iniciate the dog struct
 *
 * @d: Is the new name with inicialice it
 * @name: Is the name that inicialice
 * @age: Is the age that inicialice
 * @owner: Is the name of owner that inicialice
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
