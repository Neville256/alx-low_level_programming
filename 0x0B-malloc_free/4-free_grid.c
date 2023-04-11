#include "main.h"
/**
  * free_grid - a grid allocated to make space and free space
  *@grid: width is tkaing for grid
  *@height: height of grid
  *Return: free grid
  */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
	free(grid[j]);
}
	free(grid);
}
