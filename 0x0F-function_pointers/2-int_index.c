#include "function_pointers.h"

/**
 * int_index - function
 * @array: array parameter
 * @size: long array
 * @cmp: pointer to function
 * Return:  nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 || array == NULL || cmp == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
