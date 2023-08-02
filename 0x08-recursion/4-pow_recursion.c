#include "main.h"

/**
 * _pow_recursion - what x and y are
 * @x:  base
 * @y:  exponent
 *
 * Return: x exponent y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, -1 + y));
}
