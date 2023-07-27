#include "main.h"

/**
 * print_triangle - triangle
 * @the_size_: height 
 */
void print_triangle(int the_size_)
{
	int xc, hn;

	for (xc = 1; xc <= the_size_; xc++)
	{
		for (hn = xc; hn < the_size_; hn++)
			_putchar(' ');
		for (hn = 1; hn <= xc; hn++)
			_putchar('#');
		_putchar('\n');
	}
	if (the_size_ <= 0)
		_putchar('\n');
}
