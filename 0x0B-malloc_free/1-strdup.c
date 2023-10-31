#include <stdlib.h>

/**
* *_strdup - a function
*
* @str: input
*
* Return: NULL or s
*
*/

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	while (str[len] != '\0')
		len++;
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
