#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign values
 *
 * Return: 0 
 */
void positive_or_negative(int ncs)
{
	if (ncs > 0)
		printf("%d is positive\n", ncs);
	else if (ncs == 0)
		printf("%d is zero\n", ncs);
	else
		printf("%d is negative\n", ncs);
}
