#include "main.h"

/**
 * _strlen_recursion - calculate lenght
 * @s: The string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(1+s));
}
