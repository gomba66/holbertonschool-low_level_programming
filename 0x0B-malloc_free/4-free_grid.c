B#include "holberton.h"
/**
 * free_grid - Function for to free the grid.
 * @grid: The grid.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int h = 0;

	if (grid != NULL && height > 0)
	  {
	    while (h <= height)
	      {
		free(grid[h]);
		h++;
	      }
	    free(grid);
	  }

}
