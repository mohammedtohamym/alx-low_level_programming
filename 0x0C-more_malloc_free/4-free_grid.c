#include <stdlib.h>

/**
 * free_grid -  frees grid
 *
 * @grid: double pointer
 * @height: the height
 *
 * Return: no return
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
