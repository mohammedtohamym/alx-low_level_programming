#include "main.h"

/**
 * print_line - draws line
 * @bn: length
 */
void print_line(int bn)
{
	int it;

	for (it = 1; it <= bn; it++)
		_putchar('_');
	_putchar('\n');
}
