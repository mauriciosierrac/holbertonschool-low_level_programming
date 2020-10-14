#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free a bidimentional array
 * @grid: variable
 * @height: variable
 **/

void free_grid(int **grid, int height)
{

int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
