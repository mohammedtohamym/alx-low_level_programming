#include <stdlib.h>

/**
 * alloc_grid - a function
 *
 * @width: width
 * @height: height
 *
 * Return: NULL or grid
*/

int **alloc_grid(int width, int height)
{
	int **grid, k, m;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(width * sizeof(int));
		if (grid[k] == NULL)
		{
			while (k >= 0)
			{
				free(grid[k]);
				k--;
			}
			free(grid);
			return (NULL);
		}
		for (m = 0; m < width; m++)
			grid[k][m] = 0;
	}
	return (grid);
}
