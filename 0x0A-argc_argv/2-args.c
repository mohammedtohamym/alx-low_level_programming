#include <stdio.h>

/**
 * main - a function to print all the arguments the program recieves
 * @argc: the command line arguments cound
 * @argv: the vector containing all the comman line arguemnts
 *
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for ( ; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
