#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @x: The character to print
 *
 * Return: 1 on no error.
 * On error, -1.
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
