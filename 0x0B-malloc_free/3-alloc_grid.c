#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
			return (NULL);
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
