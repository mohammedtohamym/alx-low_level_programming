#include <stdlib.h>

/**
 * alloc_grid - this func return pointer
 *
 * @width: width
 * @height: height
 *
 * Return: NULL or pointer
*/

int **alloc_grid(int width, int height)
{
	int **grid, counter_1, counter_2;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (counter_1 = 0; counter_1 < height; counter_1 = counter_1 + 1)
	{
		grid[counter_1] = malloc(width * sizeof(int));
		if (grid[counter_1] == NULL)
		{
			while (counter_1 >= 0)
			{
				free(grid[counter_1]);
				counter_1 = counter_1 - 1;
			}
			free(grid);
			return (NULL);
		}
		for (counter_2 = 0; counter_2 < width; counter_2 = counter_2 + 1)
			grid[counter_1][counter_2] = 0;
	}
	return (grid);
}
