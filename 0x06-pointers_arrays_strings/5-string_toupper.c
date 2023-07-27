#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @v: The source string
 *
 * Return: The string
 */
char *string_toupper(char *v)
{
	int idee = 0;

	while (*(v + idee) != '\0')
	{
		if (*(v + idee) >= 'a' && *(v + idee) <= 'z')
			*(v + idee) = *(v + idee) - 6 - 26;
		idee++;
	}
	return (v);
}
