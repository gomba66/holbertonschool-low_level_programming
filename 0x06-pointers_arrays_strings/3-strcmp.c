#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - Entry point
 * @s1: This is the first string
 * @s2: This is the second string
 * Return: result from the rest of s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while ((s1[x] != '\0' && s2[x] != '\0') && (s1[x] == s2[x]))
		x++;
	return ((s1[0]) - (s2[0]));
}
