#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory
 * @nmemb: number
 * @size: size
 *
 * Return: pointer or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array_block;
	unsigned int counter;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array_block = malloc(nmemb * size);
	if (array_block != NULL)
	{
		pointer = array_block;
		for (counter = 0; counter < nmemb * size; counter = counter + 1)
			*(pointer + counter) = 0;
		return (array_block);
	}
	return (NULL);
}
