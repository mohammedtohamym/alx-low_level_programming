#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int k, l, m;
	int largest;

	k = 972;
	l = -98;
	m = 0;
	largest = largest_number(k, l, m);
	printf("%d is the largest number\n", largest);

	return (0);
}
