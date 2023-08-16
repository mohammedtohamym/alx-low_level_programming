#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - artith ops
 * @argc: args num
 * @argv: args
 *
 *
 * Return: 0,98,99 or 1`qfevc a00
 */
int main(int argc, char *argv[])
{
	int res, west, east;
	
	int (*op_func)(int, int);

	if (argc == 4)
	{
		west = atoi(argv[1]);
		
		east = atoi(argv[3]);
		
		op_func = get_op_func(argv[2]);
		
		if (op_func == NULL)
		{
			printf("this gives an error\n");
			exit(99);
		}
		res = op_func(west, east);
		
		printf("%d\n", res);
	}
	else
	{
		printf("this gives an rror\n");

		exit(98);
	}
	return (0);
}
