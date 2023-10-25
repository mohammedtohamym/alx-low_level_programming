#include "main.h"

/**
* _sqrt_recursion_helper - calculates natural square root
* @n: the number we calculate for
* @min: minimum possible value for the root
* @max: maximum possible value for the root
*
* Return: the natural square root
* or -1 if it doesn't exist
*/



long  _sqrt_recursion_helper(long n, long min, long max)
{
	long root, rootsqr;

	root = (min + max) / 2;
	rootsqr = root * root;

	if (rootsqr == n)
		return (root);
	else if (min == max)
		return (-1);
	else if (rootsqr > n)
		return (_sqrt_recursion_helper(n, min, root - 1));
	else
		return (_sqrt_recursion_helper(n, root + 1, max));
}


/**
* _sqrt_recursion - calculates natural square root
* @n: the number
*
* Return: the natural square root or -1 if it
* doesn't exist
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (_sqrt_recursion_helper(n, 1, n));
}
