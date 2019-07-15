#include <stdio.h>
/**
 * main - prints the number of arguments.
 * @argc: argument.
 * @argv: argument.
 * Return: Always to 0 on success.
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
