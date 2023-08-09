#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 *
 * @size: size of array
 * @c: char to initialize
 *
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int var;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array)
	{
		for (var = 0; var < size; var=var+1)
			array[var] = c;
		return (array);
	}
	else
	{
		return (NULL);
	}
}
