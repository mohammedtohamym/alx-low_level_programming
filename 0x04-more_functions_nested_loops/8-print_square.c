#include "main.h"

/**
 * print_square - square
 * @the_size_: square
 */
void print_square(int the_size_)
{
	int ix, jc;

	for (ix = 1; ix <= the_size_; ix++)
	{
		for (jc = 1; jc <= the_size_; jc++)
			_putchar('#');
		_putchar('\n');
	}
	if (the_size_ <= 0)
		_putchar('\n');
}
