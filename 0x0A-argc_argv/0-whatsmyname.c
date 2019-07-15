#include <stdio.h>
/**
 * main - Entry point
 * @argc: arguments
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a = 0;

	a = argc;

	printf("%s\n", argv[a - 1]);
	return (0);
}
