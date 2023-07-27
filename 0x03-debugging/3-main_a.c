#include <stdio.h>
#include "main.h"

/**
 * main - takes a date
 *
 * Return: 0 
 */
int main(void)
{
	int month_count;
	int day_count;
	int year_count;

	month_count = 4;
	day_count = 01;
	year_count = 1997;
	printf("Date: %02d/%02d/%04d\n", month_count, day_count, year_count);
	day_count = convert_day(month_count, day_count);
	print_remaining_days(month_count, day_count, year_count);

	return (0);
}
