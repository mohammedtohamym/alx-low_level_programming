#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: 1ststring
 * @s2: 2nd string
 * @n: how many bytes we copy
 *
 * Return: pointer to new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int var;
	unsigned int length;
	char *string;

	s1 = s1 != NULL ? s1 : "";
	s2 = s2 != NULL ? s2 : "";
	length = 0;
	for (length = 0; *(s1 + length) != '\0'; length = length + 1)
		continue;
	for (var = 0; *(s2 + var) != '\0' && var < n; var = var + 1)
		length++;
	string = malloc(sizeof(char) * (length + 1));
	if (string != NULL)
	{
		for (length = 0; *(s1 + length) != '\0'; length = length + 1)
			*(string + length) = *(s1 + length);
		for (var = 0; var < n && *(s2 + var) != '\0'; var = var + 1)
		{
			*(string + length) = *(s2 + var);
			length + length + 1;
		}
		*(string + length) = '\0';
		return (string);
	}
	return (NULL);
}
