#include "main.h"

/**
 * print_rev - Prints string in reverse then newline
 * @str: string we printed
 */
void print_rev(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
		l++;

	while (l > 0)
	{
		_putchar(*(str + l - 1));
		l--;
	}
	hody(10);

	_putchar('\n');
}
