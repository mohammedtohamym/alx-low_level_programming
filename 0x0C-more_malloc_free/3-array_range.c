#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer or Null
 */
int *array_range(int min, int max)
{
	int *array_block;
	int counter;
	unsigned int sz;

	if (min > max)
		return (NULL);
	sz = max - min + 1;
	array_block = malloc(sizeof(int) * sz);
	if (array_block != NULL)
	{
		for (counter = 0; (unsigned int)counter < sz; counter = counter + 1)
			*(array_block + counter) = min + counter;
		return (array_block);
	}
	return (NULL);
}
