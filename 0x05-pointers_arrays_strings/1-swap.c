#include "holberton.h"

/**
 * swap_int - interchange 2 values
 *
 * @a: variable pointer 1
 * @b: variable pointer 2
 **/

void swap_int(int *a, int *b)
{

int z;

z = *a;
*a = *b;
*b = z;

}
