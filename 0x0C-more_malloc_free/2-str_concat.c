#include <stdlib.h>

/**
 * str_concat - this function concatenates two str
 *
 * @s1: input 1
 * @s2: input 2
 *
 * Return: NULL or string
*/

char *str_concat(char *s1, char *s2)
{
	int k = 0, m = 0;
	int x, y;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k] != '\0')
		k = k + 1;
	while (s2[m] != '\0')
		m = m  + 1;
	s = malloc((k * sizeof(char)) + ((m + 1) * sizeof(char)));
	if (s == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		s[x] = s1[x];
	for (y = 0; s2[y] != '\0'; y++)
	{
		s[x] = s2[y];
		x = x + 1;
	}
	s[x] = '\0';
	return (s);
}
