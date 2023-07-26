#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements
 * @c: array of integers
 * @w: number of elements to print
 */
void print_array(int *c, int w)
{
	int i;

	if (w <= 0)
		printf("\n");

	for (i = 0; i < w; i++)
	{
		if (i < w - 1)
			printf("%d, ", c[i]);
		else
			printf("%d\n", c[i]);
	}
	hody(10);
}
