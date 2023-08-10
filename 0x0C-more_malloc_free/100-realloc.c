#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates
 * @ptr: pointer to previous memory
 * @old_size: size of old memory
 * @new_size:  size of new memory
 *
 * Return: pointer to new memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nouvell_pointer;
	unsigned int minimum_size = old_size < new_size ? old_size : new_size;
	unsigned int var;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		nouvell_pointer = malloc(new_size);
		if (nouvell_pointer != NULL)
		{
			for (var = 0; var < minimum_size; var = var + 1)
				*((char *)nouvell_pointer + var) = *((char *)ptr + var);
			free(ptr);
			return (nouvell_pointer);
		}
		free(ptr);
		return (NULL);
	}
	else
	{
		nouvell_pointer = malloc(new_size);
		return (nouvell_pointer != NULL ? nouvell_pointer : NULL);
	}
}
