#include "main.h"

/**
 * _memset - Fills memory
 * @s: memory we fill
 * @b: constant
 * @n: number of bytes
 *
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		*(s + k) = b;
	}
	return (s);
}
