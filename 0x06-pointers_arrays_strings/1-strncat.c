#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @ destination:   destination string
 * @string:   string containing   substring to append to  destination
 * @n:   maximum number of characters to copy from  string
 *
 * Return:   destination string
 */
char *_strncat(char * destination, char *string, int n)
{
	int  destination_length = 0;
	int string_length = 0;

	while (*( destination +  destination_length) != '\0')
		 destination_length++;

	while (*(string + string_length) != '\0' && string_length < n)
	{
		*( destination +  destination_length + string_length) = *(string + string_length);
		string_length++;
	}
	*( destination +  destination_length + string_length) = '\0';
	return ( destination + 0);
}
