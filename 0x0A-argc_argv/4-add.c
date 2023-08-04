#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print arguments
 * @argc:  raqamber of arguments
 * @argv:  arguments

 * Return: 0 or 1
 */
 
int main(int argc, char *argv[])
{
	int raqam, var1, var2;
	int sum = 0;

	for (var1 = 1; var1 < argc; var1=var1+1)
	{
		var2 = 0;
		while (argv[var1][var2] != '\0')
		{
			if (argv[var1][var2] >= '0' && argv[var1][var2] <= '9')
			{
				var2 = var2+1;
			}
			else
			{
				printf("Error");
				return (1);
			}
		}
		raqam = atoi(argv[var1]);
		sum = sum + raqam;
	}
	printf("%d", sum);
	return (0);
}
