#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - free all tabs in the grid.
* @grid : the double dimension array.
* @height : Height of the array.
*
* Return : Nothing0
*/

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
