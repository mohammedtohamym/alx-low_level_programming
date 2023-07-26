#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @destination: destination string
 * @string: string to append
 *
 * Return: destination string
 */
char *_strcat(char *destination, char *string)
{
	int destination_length = 0;
	int string_length = 0;

	while (*(destination + destination_length) != '\0')
		destination_length++;

	while (*(string + string_length) != '\0')
	{
		*(destination + destination_length + string_length) = *(string + string_length);
		string_length++;
	}
	*(destination + destination_length + string_length) = '\0';
	return (destination);
}
