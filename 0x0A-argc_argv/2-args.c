#include <stdio.h>
/**
 * main - prints the number of arguments.
 * @argc: argument.
 * @argv: argument.
 * Return: Always to 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	argc = argc;
	for (i = 0; argv[i] != '\0'; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
