#include "main.h"

/**
 * print_remaining_days - takes a date, prints out the days left int that year
 * @month: ...
 * @day: ...
 * @year: ...
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day)
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - dat);
		}
	}
}
