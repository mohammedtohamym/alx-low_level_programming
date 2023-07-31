#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sum of diagonals of
 * square matrix
 * @a: square matrix
 * @size: size of square matrix
 */
void print_diagsums(int *a, int size)
{
	int v, w, m;
	long thefirstsum, thesecondsum;

	v = 0;
	w = size - 1;
	thefirstsum = 0;
	thesecondsum = 0;
	for (m = 0; m < size; m=m+1)
	{
		thefirstsum += *(a + v);
		thesecondsum += *(a + w);
		v += size + 1;
		w += size - 1;
	}
	printf("%ld, %ld\n", thefirstsum, thesecondsum);
}
