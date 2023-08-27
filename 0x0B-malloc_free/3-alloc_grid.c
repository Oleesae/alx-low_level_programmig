#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: width of the 2D array (int)
 * @height: height of the 2D array (int)
 * Return: pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;

	int **grid = malloc(sizeof(int *) * height);

	if (width < 1 || height < 1)
		return (NULL);

	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
		grid[i] = malloc(sizeof(int) * 3);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
