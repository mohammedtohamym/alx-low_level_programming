#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array
 * @min:  minimum value
 * @max:  maximum value
 *
 * Return:  pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int *array_memory_block;
	int var;
	unsigned int the_size;

	if (min > max)
		return (NULL);
	the_size = max - min + 1;
	array_memory_block = malloc(sizeof(int) * the_size);
	if (array_memory_block != NULL)
	{
		for (var = 0; (unsigned int)var < the_size; var = var + 1)
			*(array_memory_block + var) = min + var;
		return (array_memory_block);
	}
	return (NULL);
}
