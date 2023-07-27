#include "main.h"

/**
 * cap_string - Capitalizes
 * @string: string
 *
 * Return: The string
 */
char *cap_string(char *string)
{
	int idee, i;
	char pr_char = '\t';
	char wr_spr[] = {' ', '\t', '\r', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};
	char wrSprLn = 14;
	char cappital = idee = 0;

	while (*(string + idee) != '\0')
	{
		for (i = 0; i < wrSprLn; i++)
		{
			if (wr_spr[i] == pr_char)
			{
				cappital = 1;
				break;
			}
			cappital = 0;
		}
		if ((*(string + idee) >= 'a' && *(string + idee) <= 'z') && cappital)
			*(string + idee) = *(string + idee) - 6 - 26;
		pr_char = *(string + idee);
		idee++;
	}
	return (string);
}
