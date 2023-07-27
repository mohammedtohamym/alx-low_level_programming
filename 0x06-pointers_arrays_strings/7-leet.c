#include "main.h"

/**
 * leet - Encodes a string into 1337 with
 * @string: The source string
 *
 * Return: The string
 */
char *leet(char *string)
{
	int idee;
	char maps[26 * 2];

	for (idee = 0; idee < 26 * 2; idee++)
		maps[idee] = 0;
	maps['a' - 'a'] = maps['A' - 'A' + 26] = '4';
	maps['e' - 'a'] = maps['E' - 'A' + 26] = '3';
	maps['o' - 'a'] = maps['O' - 'A' + 26] = '0';
	maps['t' - 'a'] = maps['T' - 'A' + 26] = '7';
	maps['l' - 'a'] = maps['L' - 'A' + 26] = '1';

	for (idee = 0; *(string + idee) != '\0'; idee++)
	{
		int low = *(string + idee) >= 'a' && *(string + idee) <= 'z';
		int up = *(string + idee) >= 'A' && *(string + idee) <= 'Z';
		int k = *(string + idee) - (low * 'a') - (up * ('A' - 26));

		if ((low || up) && maps[k] != 0)
			*(string + idee) = maps[k];
	}

	return (string);
}
