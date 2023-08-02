#include "main.h"

/**
 * factorial -  factorial
 * @n: The number
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(-1 + n));
}
