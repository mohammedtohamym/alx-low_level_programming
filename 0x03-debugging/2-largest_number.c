#include "main.h"

/**
 * largest_number - returns the largestNumber of 3 numbers
 * @sa: 1st
 * @vb: 2nd
 * @gc: 3rd
 *
 * Return: largestNumber number
 */
int largest_number(int sa, int vb, int gc)
{
	int largestNumber;

	largestNumber = sa;

	if (vb > largestNumber)
	{
		largestNumber = vb;
	}
	if (gc > largestNumber)
	{
		largestNumber = gc;
	}

	return (largestNumber);
}
