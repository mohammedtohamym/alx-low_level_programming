#include <stdio.h>
#include <stdlib.h>

/**
 * main - opcode
 * @argc: arg num
 * @argv: arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int num_of_bytes__, var;
	int (*program)(int, char **) = &main;

	if (argc == 2)
	{
		num_of_bytes__ = atoi(argv[1]);
		
		if (num_of_bytes__ < 0)
		{
			printf("this gives an error\n");
			exit(2);
		}
		for (var = 0; var < num_of_bytes__;)
		{	
			printf("%02x",(unsigned char)*((char *)program + var));
			if(var < num_of_bytes__ - 1)
				printf("%c",' ');
			else
				printf("%c",'\n');
			var = var + 1;
		}
	}


	else
	{
		printf("this gives an error\n");
		exit(1);
	}
	return (0);
}
