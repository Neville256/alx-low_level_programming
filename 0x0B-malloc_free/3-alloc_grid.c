#include "main.h"
/**
  * alloc_grid - make space and free space by allocating grid
  *@width: grid take width
  *@height: grid in height
  *Return: freed space from the grid
  */
int **alloc_grid(int width, int height)
{
	/*declaring variables*/
	int **grid;
	int j, m;
if (width <= 0 || height <= 0)
{
	return (NULL);
}
grid = malloc(sizeof(int *) * height); /*malloc*/

if (grid == NULL)
{
return (NULL);
}
for (j = 0; j < height; j++)
{
grid[j] = malloc(sizeof(int) * width);
if (grid[j] == NULL)
{
	for (j = j - 1; j >= 0; j--)
{
	free(grid[j]);
}
free(grid);
return (NULL);
}
}
for (j = 0; m < width; m++)
grid[j][m] =  0;
return (grid);
}
