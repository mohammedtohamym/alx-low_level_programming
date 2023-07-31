#include "main.h"

/**
 * _memcpy - Copies memory
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		*(dest + k) = *(src + k);
	}
	return (dest);
}
