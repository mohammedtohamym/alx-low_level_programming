#include "main.h"

/**
 * *create_array - returns an initialized array
 *
 * @size: the size of array
 * @c: the character
 *
 *
 * Return: NULL if size is 0, or if there's error
 * locating memory, or the array
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = (*char) malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
