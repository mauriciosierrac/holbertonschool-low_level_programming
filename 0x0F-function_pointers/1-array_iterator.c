#include "function_pointers.h"

/**
 * array_iterator - function pointer
 * @array: array parameter
 * @size: long to array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
for (i = 0; i < size; i++)
(*action)(array[i]);
}
