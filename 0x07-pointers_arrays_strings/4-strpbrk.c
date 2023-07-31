#include "main.h"

/**
 * _strpbrk - Searches string for certain bytes
 * @s: string
 * @accetpance:  substring
 *
 * Return: a pointer to the byte or null
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int m, b;

	for (m = 0; *(s + m) != '\0'; m=m+1)
	{
		for (b = 0; *(accept + b) != '\0'; b=b+1)
		{
			if (*(s + m) == *(accept + b))
				return (s + m);
		}
	}
	return (0);
}
