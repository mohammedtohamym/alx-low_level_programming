#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: memory size
 *
 * Return: pointer to the allocated memory or exit
 */
void *malloc_checked(unsigned int b)
{
	void *the_memory_allocated = malloc(b);

	if (the_memory_allocated)
		return (the_memory_allocated);
	exit(98);
}
