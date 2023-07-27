#include "main.h"

/**
 * _isdigit - checks for
 * @cb: the character
 *
 * Return: 1 if the character is a digit, otherwise 0
 */
int _isdigit(int cb)
{
	if (cb >= '0' && cb <= '9')
		return (1);
	else
		return (0);
}
