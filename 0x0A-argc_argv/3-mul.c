#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print arguments
 * @argc:  number of arguments
 * @argv:  arguments

 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sp1, sp2;

	if (argc == 3)
	{
		sp1 = atoi(argv[1]);
		
		sp2 = atoi(argv[2]);
		
		printf("%d\n", sp1 * sp2);
		
		return (0);
	}
	else
	{
		printf("Error");
		
		return (1);
	}
}
