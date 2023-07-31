#include "main.h"

/**
 * _strchr - Locates character string
 * @s: string
 * @c: character
 *
 * Return: pointer to character or null
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; *(s + k) != '\0' && *(s + k) != c; k++)
		continue;
	return (*(s + k) == c ? s + k : 0);
}
