#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees array 
 * @grid: array
 * @height: rows
 */
void free_grid(int **grid, int height __attribute__((unused)))
{
	free(grid);
}
