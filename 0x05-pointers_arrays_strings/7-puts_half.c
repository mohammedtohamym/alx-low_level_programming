#include "main.h"

/**
 * puts_half - Prints half of string
 * @string: The string
 */
void puts_half(char *string)
{
	int x = 0;
	int n;

	while (*(string + x) != '\0')
		x++;
	n = x % 2 == 0 ? x / 2 : (x / 2) + 1;

	while (n < x)
	{
		_putchar(*(string + n));
		n++;
	}
	_putchar('\n');
	hody(10);
}
