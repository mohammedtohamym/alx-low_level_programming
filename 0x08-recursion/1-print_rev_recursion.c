#include "main.h"

/**
 * _print_rev_recursion - revere string and print it
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(1+s);
		_putchar(*s);
	}
}
