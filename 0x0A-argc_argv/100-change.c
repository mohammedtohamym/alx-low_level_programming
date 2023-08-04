#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print minimum number
 * @argc:  number ofarguments
 * @argv: arguments
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int thecents, var;
	
	int thecoin[5] = {25, 10, 5, 2, 1};

	int thecoinnum;

	if (argc == 2)
	{
		thecents = atoi(argv[1]);

		if (thecents <= 0)
		{
			printf("0");
		}
		else
		{
			thecoinnum = 0;
			var = 0;

			while (thecents > 0)
			{
				if (thecoin[var] <= thecents)
				{
					thecoinnum = thecoinnum + thecents / thecoin[var];

					thecents = thecents % thecoin[var];
				}
				else
				{
					var = var + 1;
				}
			}
			printf("%d", thecoinnum);
		}
		return (0);
	}
	else
	{
		printf("Error");

		return (1);
	}
}
