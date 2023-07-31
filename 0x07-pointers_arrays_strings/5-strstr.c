#include "main.h"

/**
 * _strstr - finds a substring
 * @haystack: string
 * @needle: aubstring
 *
 * Return: a pointer to where subsring begins or null
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int r, x;

	for (r = 0; *(haystack + r) != '\0'; r=r+1)
	{
		for (x = 0; *(needle + x) != '\0' && *(needle + x) == *(haystack + r + x);)
			x=x+1;
		if (*(needle + x) == '\0')
			return (haystack + r);
	}
	return (*(needle + x) == '\0' ? haystack + r : 0);
}
