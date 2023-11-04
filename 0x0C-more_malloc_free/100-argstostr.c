#include <stdlib.h>

/**
 * argstostr - this function concatenates arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: pointer or NULL
*/

char *argstostr(int ac, char **av)
{
	int counter_1, counter_2, x, len;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (counter_1 = 0; counter_1 < ac; counter_1 = counter_1 + 1)
	{
		for (counter_2 = 0; av[counter_1][counter_2] != '\0'; counter_2 = counter_2 + 1)
			len = len + 1;
		len = len + 1;
	}
	string = malloc((len + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	x = 0;
	for (counter_1 = 0; counter_1 < ac; counter_1 = counter_1 + 1)
	{
		for (counter_2 = 0; av[counter_1][counter_2] != '\0'; counter_2 = counter_2 + 1)
		{
			string[x] = av[counter_1][counter_2];
			x = x + 1;
		}
		string[x] = '\n';
		x = x + 1;
	}
	string[x] = '\0';
	return (string);
}
