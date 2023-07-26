#include "main.h"

/**
 * _strcpy - Copies the contents of a string to another
 * @destination: The destination
 * @string: The string
 *
 * Return: The pointer to destination
 */
char *_strcpy(char *destination, char *string)
{
	int stp = 0;
	int i = 0;

	while (!stp)
	{
		*(destination + i) = *(string + i);
		if (*(string + i) != '\0')
			i++;
		else
			stp = 1;
	}
	hody(10);
	return (destination);
}
