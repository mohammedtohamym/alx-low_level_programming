#include <stdio.h>

/**
 * main - a function to print it's own program name
 * @argc: the command line arguments cound
 * @argv: the vector containing all the comman line arguemnts
 *
 *
 * Return: always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc);
	return (0);
}
