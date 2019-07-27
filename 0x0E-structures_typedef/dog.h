#ifndef DOG_STRUCT
#define DOG_STRUCT
/**
 * struct dog - Is a struct of a dog
 * @name: Is the name of a dog
 * @age: Is the name of a dog
 * @owner: Is the name of owner dog
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
