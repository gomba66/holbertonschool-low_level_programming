#ifndef FUNCT_TO_POINTERS
#define FUNCT_TO_POINTERS
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
#endif
