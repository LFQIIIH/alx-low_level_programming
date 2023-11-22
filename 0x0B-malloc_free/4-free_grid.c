#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void	free_grid(int **grid, int height)
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
