#include "main.h"

/**
 * convert_day - converts day_count
 * @month_count: month_count in number format
 * @day_count: day_count of month_count
 *
 * Return: day_count of year
 */
int convert_day(int month_count, int day_count)
{
	switch (month_count)
	{
	case 2:
		day_count = 31 + day_count;
		break;
	case 3:
		day_count = 59 + day_count;
		break;
	case 4:
		day_count = 90 + day_count;
		break;
	case 5:
		day_count = 120 + day_count;
		break;
	case 6:
		day_count = 151 + day_count;
		break;
	case 7:
		day_count = 181 + day_count;
		break;
	case 8:
		day_count = 212 + day_count;
		break;
	case 9:
		day_count = 243 + day_count;
		break;
	case 10:
		day_count = 273 + day_count;
		break;
	case 11:
		day_count = 304 + day_count;
		break;
	case 12:
		day_count = 334 + day_count;
		break;
	default:
		break;
	}
	return (day_count);
}
