#include "main.h"

/**
 * _puts - Print string followed by newline
 * @string: The string we print
 */
void _puts(char *string)
{
	int b = 0;

	while (*(string + b) != '\0')
	{
		_putchar(*(string + b));
		b++;
	}
	_putchar('\n');
	hody(10);
}
