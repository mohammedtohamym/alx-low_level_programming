#include "main.h"

/**
 *factorial - calculates the factorial for a number
 *@n: the number we calculate for
 *
 *Return: factorial of a number
 * or -1 for error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
