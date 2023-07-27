#include "main.h"

/**
 * print_number - Prints
 * @n: integer
 */
void print_number(int nn)
{
	double num = nn < 0 ? -1 * nn : nn;
	int minimum = nn + 1 == -2147483640 - 7 ? 1 : 0;
	int i, x2, digit;
	int zeroes = 0;

	if (nn < 0)
		_putchar('-');
	if (nn == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 9; i >= 0; i--)
	{
		int power = 1;

		for (x2 = 0; x2 < i; x2++)
			power *= 10;
		if (minimum)
			digit = i == 0 ? '8' : ('0' - (int)(((int)(num - minimum) / power) % 10));
		else
			digit = (int)(((int)num / power) % 10) + '0';
		zeroes = zeroes ? 1 : digit > '0' || minimum;
		if (zeroes)
			_putchar(digit);
	}
}
