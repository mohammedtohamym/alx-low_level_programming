#include <stdio.h>

/**
 * main - Print arguments
 * @argc:  number of arguments
 * @argv:  arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
