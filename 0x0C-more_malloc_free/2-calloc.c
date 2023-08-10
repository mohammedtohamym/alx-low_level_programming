#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory
 * @nmemb: items number
 * @size: item size
 *
 * Return: pointer to block or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array_block_in_memory;
	unsigned int var;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array_block_in_memory = malloc(nmemb * size);
	if (array_block_in_memory != NULL)
	{
		pointer = array_block_in_memory;
		for (var = 0; var < nmemb * size; var++)
			pointer[var] = 0;
		return (array_block_in_memory);
	}
	return (NULL);
}
