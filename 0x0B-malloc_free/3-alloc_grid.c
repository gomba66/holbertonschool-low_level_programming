#include "holberton.h"
/**
 * alloc_grid - Function that allocate memory for a grid or 2 dimensinal array.
 * @width: Width of the grid.
 * @height: Height of the grid.
 * Return: A pointer to the grid, or NULL if it fail.
 */
int **alloc_grid(int width, int height)
{
	int w = 0;
	int h = 0;
	int **grid = 0;

	if (width == 0 || height == 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	while (w < width)
	{
		grid[w] = malloc(height * sizeof(int *));
		if (grid[w] == NULL)
		{
			while (w >= 0)
			{
				free(grid[w]);
				w--;
			}
			w++;
			if (w == 0)
			{
				free(grid);
				return (NULL);
			}
		}
		w++;
	}
	w = 0;
	while (w < width)
	{
		h = 0;
		while (h < height)
		{
			grid[w][h] = 0;
			h++;
		}
		w++;
	}
	return (grid);
}
