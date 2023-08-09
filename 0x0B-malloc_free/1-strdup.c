#include "main.h"
#include <stdlib.h>

/**
 * _strdup - adds string copy to new space in memory
 * @str: string
 *
 * Return: pointer to the array or NULL
 */

char *_strdup(char *str)
{
	char *array;
	int x = 0;
	int lenght = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + lenght) != '\0')
		lenght = lenght + 1;
	array = malloc(sizeof(char) * lenght + 1);
	if (array)
	{
		while (x < lenght)
		{
			array[x] = str[x];
			x = x + 1;
		}
		array[x] = '\0';
		return (array);
	}
	else
	{
		return (NULL);
	}
}
