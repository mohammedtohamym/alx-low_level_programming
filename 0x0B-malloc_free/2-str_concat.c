#include <stdlib.h>

/**
 * str_concat - a funnction
 *
 * @s1: input 1
 * @s2: input 2
 *
 * Return: NULL or s 
*/

char *str_concat(char *s1, char *s2)
{
	int k = 0, m = 0;
	int i, j;
	char *s;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k] != '\0')
		k++;
	while (s2[m] != '\0')
		m++;
	s = malloc((k * sizeof(char)) + ((m + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
