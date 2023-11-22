#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_all : free all tabs in the grid.
* @grid : the double dimension array.
* @height : Height of the array.
*
* Return : Nothing0
*/

void free_all(int **grid, int height)
{
	int	h;

	h = 0;
	while (grid && h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}

/**
 * alloc_grid : allocate an double dimension array as a grid initialisied with 0.
 * @width : width of grid
 * @height : height of grid
 *
 * Return: pointer to double demension array or NULL if fail.
 */

int		**alloc_grid(int width, int height)
{
	int		**grid;
	int		i;
	int		j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free_all(grid, i);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
