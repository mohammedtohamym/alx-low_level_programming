#include <stdlib.h>

/**
 * *_strdup - function that duplicates string
 *
 * @str: the string
 *
 * Return: NULL or str
 *
*/

char *_strdup(char *str)
{
	int k = 0, length = 0;
	char *str;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length = length + 1;
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (str[k] != '\0')
	{
		str[k] = str[k];
		k = k + 1;
	}
	return (str);
}
