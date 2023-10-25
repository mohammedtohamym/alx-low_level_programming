#include "main.h"

/**
* _pow_recursion - raises a number to the power of another
* @x: the base number
* @y: the power
*
* Return: the result of the caluculation
* or -1 if power is munis
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
