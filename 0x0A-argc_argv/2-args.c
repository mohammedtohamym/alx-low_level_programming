#include <stdio.h>

/**
 * main - Print arguments
 * @argc:  number of arguments
 * @argv:  arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int var;

	for (var = 0; var < argc; var + var + 1)
		printf("%s\n", argv[var]);
	return (0);
}