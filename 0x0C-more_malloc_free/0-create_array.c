#include <stdlib.h>

/**
 * create_array - creates array and initalizes it
 *
 * @size: array size
 * @c: init char
 *
 * Return: array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *s;
	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (k = 0; k < size; k = k + 1)
		s[k] = c;
	return (s);
}
