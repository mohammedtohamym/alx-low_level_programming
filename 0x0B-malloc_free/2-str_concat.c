#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates
 * @s1:  first 
 * @s2:  second 
 *
 * Return: The pointer to the array or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int x, y;
	char *string;

	for (x = 0; s1 != NULL && s1[x] != '\0';){
		x = x + 1;
	}
	for (y = 0; s2 != NULL && s2[y] != '\0';){
		y = y + 1;
	}
	string = malloc(x + y + 1);
	if (string)
	{
		for (x = 0; s1 != NULL && s1[x] != '\0'; x = x + 1){
			string[x] = s1[x];
		}
		for (y = 0; s2 != NULL && s2[y] != '\0'; y = y + 1){
			string[x+y] = s2[y];
		}
		string[x+y] = '\0';
		return (string);
	}
	else
	{
		return (NULL);
	}
}
