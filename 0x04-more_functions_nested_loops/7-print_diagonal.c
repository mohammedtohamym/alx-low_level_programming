#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @nb: the length of the line
 */
void print_diagonal(int nb)
{
	int ik, jv;

	for (ik = 1; ik <= nb; ik++)
	{
		for (jv = 1; jv < ik; jv++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (nb <= 0)
		_putchar('\n');
}
