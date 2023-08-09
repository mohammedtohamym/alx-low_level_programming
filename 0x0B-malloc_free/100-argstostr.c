#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concaticate all the
 * arguments
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the string or NULL
 */
char *argstostr(int ac, char **av)
{
	int v, p;
	char *string;
	int lenght = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (v = 0; v < ac; v = v + 1)
	{
		for (p = 0; *(*(av + v) + p) != '\0';)
		{
			lenght = lenght + 1;
			p = p + 1;
		}
	}
	string = malloc(sizeof(char) * (lenght + v + 1));
	if (string)
	{
		lenght = 0;
		for (v = 0; v < ac; v = v + 1)
		{
			for (p = 0; *(*(av + v) + p) != '\0'; p = p + 1)
			{
				string[lenght] = *(*(av + v) + p);
				lenght = lenght + 1;
			}
			string[lenght] = '\n';
			lenght = lenght + 1;
		}
		string[lenght] = '\0';
		return (string);
	}
	else
	{
		return (NULL);
	}
}
