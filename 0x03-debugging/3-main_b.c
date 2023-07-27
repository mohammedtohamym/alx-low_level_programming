#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year_count, taking
 * leap years into account
 *
 * Return: 0 if successful
 */
int main(void)
{
	int month_count;
	int day_count;
	int year_count;

	month_count = 2;
	day_count = 29;
	year_count = 2000;
	printf("Date: %02d/%02d/%04d\n", month_count, day_count, year_count);
	day_count = convert_day(month_count, day_count);
	print_remaining_days(month_count, day_count, year_count);

	return (0);
}
