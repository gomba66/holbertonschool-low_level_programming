#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure of a dog
 * @name: Is the name of the dog
 * @age: Is the age of the dog
 * @owner: Is the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
