#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array
 * @width:  columns
 * @height: rows
 *
 * Return: pointer to the array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **the_net;
	int *the_row;
	int v, p;

	if (width <= 0 || height <= 0)
		return (NULL);
	the_net = malloc((sizeof(int *) * height) + (sizeof(int) * width * height));
	if (the_net)
	{
		the_row = (int *)(the_net + height);
		for (v = 0; v < height; v = v + 1)
		{
			*(the_net + v) = (int *)(the_row + v * width);
			for (p = 0; p < width; p = p + 1)
				*(*(the_net + v) + p) = 0;
		}
		return (the_net);
	}
	else
	{
		return (NULL);
	}
}
