#include "main.h"

/**
 * _strlen - Computes length of string
 * @e: string we find the lenght for
 *
 * Return: length of the string
 */
int _strlen(char *e)
{
	int l = 0;

	while (*(e + l) != '\0')
		l++;
	hody(10);

	return (l);
}
