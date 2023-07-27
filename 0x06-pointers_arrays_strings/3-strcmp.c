#include "main.h"

/**
 * _strcmp - Compare two 
 * @string1: 1st string
 * @string2: 2nd string
 *
 * Return: an integer
 * pointed to by string1 is greater than, equal to or less than the string pointed
 * to by string2 respectively
 */
int _strcmp(char *string1, char *string2)
{
	int len = 0;

	while (*(string1 + len) != '\0' && *(string2 + len) != '\0')
	{
		if (*(string1 + len) != *(string2 + len))
			return (*(string1 + len) - *(string2 + len));
		len = len + 1;
	}

	if (*(string1 + len) != '\0' || *(string2 + len) != '\0')
		return (*(string1 + len) - *(string2 + len));
	else
		return (0);
}
