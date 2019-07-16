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
	argc = argc;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int x = 0, y = 0;
		if(isdigit(argv[x][y]))
		{
			for(x = 0; x < argc; x++)
			{
				for(y = 0; argv[x][y] != '\0'; y++)
				{
					if(!isdigit(argv[x][y]))
					{
						printf("Error\n");
						return (1);
					}
				}
			}
		}
		else
		{
		}
	}
	return (0);
}
