#include "main.h"

/**
 * _strncpy - Copy string and pad with null bytes if necessary
 * @deste: The destination of copy
 * @srcs: The string 
 * @v: The maximum number 
 *
 * Return: The destination  string
 */
char *_strncpy(char *deste, char *srcs, int v)
{
	int idcx = 0;
	char null_pad = 0;

	while (idcx < v)
	{
		null_pad = *(srcs + idcx) == '\0' && !null_pad ? 1 : null_pad;
		*(deste + idcx) = null_pad ? '\0' : *(srcs + idcx);
		idcx++;
	}
	return (deste);
}
