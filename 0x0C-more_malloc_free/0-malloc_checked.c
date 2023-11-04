#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks if malloc didn't return null
 * @b: size
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *block = malloc(b);

	if (block)
		return (block);
	exit(98);
}
