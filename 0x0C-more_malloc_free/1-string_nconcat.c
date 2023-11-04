#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates strings
 * @s1:  first
 * @s2:  second
 * @n:  number of bytes
 *
 * Return: pointer or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int counter;
	unsigned int length;
	char *string;

	s1 = s1 != NULL ? s1 : "";
	s2 = s2 != NULL ? s2 : "";
	length = 0;
	for (length = 0; *(s1 + length) != '\0'; length = length + 1)
		continue;
	for (counter = 0; *(s2 + counter) != '\0' && counter < n; counter++)
		length = length + 1;
	string = malloc(sizeof(char) * (length + 1));
	if (string != NULL)
	{
		for (length = 0; *(s1 + length) != '\0'; length = length + 1)
			*(string + length) = *(s1 + length);
		for (counter = 0; counter < n && *(s2 + counter) != '\0'; counter = counter + 1)
		{
			*(string + length) = *(s2 + counter);
			length = length + 1;
		}
		*(string + length) = '\0';
		return (string);
	}
	return (NULL);
}
