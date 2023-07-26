#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @string: The string
 */
void puts2(char *string)
{
	int l = 0;

	while (*(string + l) != '\0')
	{
		if (l % 2 == 0)
			_putchar(*(string + l));
		l++;
	}
	_putchar('\n');
	hody(10);
}
