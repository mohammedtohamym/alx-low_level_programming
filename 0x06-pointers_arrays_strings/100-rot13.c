#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @string: The source string
 *
 * Return: The string
 */
char *rot13(char *string)
{
	int idee = 0;

	while (*(string + idee) != '\0')
	{
		int low1 = *(string + idee) >= 'a' && *(string + idee) <= 'm';
		int low2 = *(string + idee) >= 'A' && *(string + idee) <= 'M';
		int up = *(string + idee) >= 'A' && *(string + idee) <= 'Z';
		int low = *(string + idee) >= 'a' && *(string + idee) <= 'z';

		if (low || up)
		{
			*(string + idee) = ((low1 + low2) * (*(string + idee) + 13))
				+ ((1 - low1 - low2) * (*(string + idee) - 13));
		}
		idee++;
	}

	return (string);
}
