#include <stdio.h>
#include "holberton.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{

	int m = month;
	int d = day;
	int y = year;

	if ((y % 4 == 0 && !(y % 100 == 0)) || (y % 100 == 0 && y % 400 == 0))
	{
		if (m >= 2 && d >= 60)
		{
			d++;
		}
		printf("Day of the year: %d\n", d);
		printf("Remaining days: %d\n", 366 - d);
	}
	else
	{
		if (m == 2 && d == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", m, d - 31, y);
		}
		else
		{
			printf("Day of the year: %d\n", d);
			printf("Remaining days: %d\n", 365 - d);
		}
	}

}
