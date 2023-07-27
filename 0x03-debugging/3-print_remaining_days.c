#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year_count, taking leap years into account
 * @month_count: month_count in number format
 * @day_count: day_count of month_count
 * @year_count: year_count
 */
void print_remaining_days(int month_count, int day_count, int year_count)
{
	int months_c_days[] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 0, 0, 0};

	months_c_days[9] = 304;
	months_c_days[10] = 334;
	months_c_days[11] = 365;

	if ((year_count % 4 == 0 && year_count > 1582) && (year_count % 100 != 0 || year_count % 400 == 0))
	{
		if (month_count > 2)
			day_count++;

		printf("day_count of the year_count: %d\n", day_count);
		printf("Remaining days: %d\n", 366 - day_count);
	}
	else
	{
		if (month_count >= 2 && day_count > months_c_days[month_count - 1])
		{
			int day_of_month = day_count - months_c_days[month_count - 2];

			printf("Invalid date: %02d/%02d/%04d\n", month_count, day_of_month, year_count);
		}
		else
		{
			printf("day_count of the year_count: %d\n", day_count);
			printf("Remaining days: %d\n", 365 - day_count);
		}
	}
}
