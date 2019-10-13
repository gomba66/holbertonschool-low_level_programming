#include "holberton.h"
/**
 * cap_string - Function that capitalize all words of a string.
 * @s: String.
 * Return: a string with all it words capitalized.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] >= 97 && s[i] <= 122))
			s[i] -= 32;
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		else if (s[i] == '?' || s[i] == '"' || s[i] == '(')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		else if (s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		else if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		i++;
	}

	return (s);
}
