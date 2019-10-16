#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point
 * This is a program for add two positive numbers
 * Return: Result of add.
 * @argc: This is the number of strings or arguments
 * @argv: This is the string or arguments passed.
 */
int main(int argc, char *argv[])
{
	int x = 1, y = 0, total = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (x < argc)
		{
			y = 0;
			while (argv[x][y] != '\0')
			{
				if (argv[x][y] < 48 || argv[x][y] > 57)
				{
					printf("Error\n");
					return (1);
				}
				y++;
			}
			total = total + atoi(argv[x]);
			x++;
		}
	}
	printf("%d\n", total);
	return (0);
}
