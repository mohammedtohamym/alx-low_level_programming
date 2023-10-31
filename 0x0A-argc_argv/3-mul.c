#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function to print the multiplication of two numbers it recieves
 * @argc: the command line arguments cound
 * @argv: the vector containing all the comman line arguemnts
 *
 *
 * Return: 0 in case of success or -1 in case of error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
