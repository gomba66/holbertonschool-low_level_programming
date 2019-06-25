#include "holberton.h"
/**
 * _isalpha - Entry point
 * This function verify if the character is a letter or otherwise
 * @c: is the character
 * Return: 1 if the Character is a letter (lowercase or uppercase)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
