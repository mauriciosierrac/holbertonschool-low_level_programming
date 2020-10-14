#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function to print a bidimensional array
 * @width: variable of raw
 * @height: variable of column
 * Return: bidimentional array
 **/

int **alloc_grid(int width, int height)
{

int  i, j, k, **arr;

if (width <= 0 || height <= 0)
{
return (NULL);
}

arr = (int **) malloc(height * sizeof(int));

for (i = 0; i < height; i++)
{
arr[i] = (int *) malloc(width * sizeof(int));
if (arr[i] == NULL)
{
while (i >= 0)
{
free(arr[i]);
i--;
}
free(arr);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
{
arr[j][k] = 0;
}
}
return (arr);

}
