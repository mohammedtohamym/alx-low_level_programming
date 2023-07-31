#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: string
 * @accept:  prefix
 *
 * Return: number of bytes in start of string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, m;
	char halt,bingo;

	bingo = 0;
	for (k = 0; *(s + k) != '\0';)
	{
		for (m = 0; *(accept + m) != '\0'; m=m+1)
		{
			if (*(s + k) == *(accept + m))
			{
				halt = 0;
				bingo = 1;
				break;
			}
			else
			{
				halt = 1;
			}
		}
		if (halt==0)
			k=k+1;
		else
			break;
	}
	return (bingo ? k : 0);
}
