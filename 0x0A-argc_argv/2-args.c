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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
