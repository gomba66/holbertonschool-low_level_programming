#include "holberton.h"
/**
 * binary_to_uint - This is a function that convert a binary number to unsig int
 * @b: This is a string that contain the bynary number.
 * return: the number converted or 0 if b is NULL or different to 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sum = 1, x = 0;

	if(b != NULL)
	{
		while(b[i] != '\0')
		{
			i++;
		}
		i = i - 1;
		while (b[i] != 0)
		{
			if(b[i] == '1' || b[i] == '0')
			{
				if(b[i] == '1')
				{
					x = sum + x;
				}
			}
			else
			{
				return (0);
			}
			sum = (sum * 2);
			i--;
		}
	}
	else
	{
		return (0);
	}
	return (x);
}
