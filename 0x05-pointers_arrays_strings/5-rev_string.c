#include "main.h"

/**
 * rev_string - Reverses string
 * @string: The string to we reversed
 */
void rev_string(char *string)
{
	int len = 0;
	int i;

	while (*(string + len) != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		char tmp = *(string + len - i - 1);

		*(string + len - i - 1) = *(string + i);
		*(string + i) = tmp;
	}
	hody(10);
}
