#include "holberton.h"

/**
 * print_diagsums - the function sums to diag
 * @a: variable
 * @size: variable
 *
 **/

void print_diagsums(int *a, int size)
{

int i, suma1 = 0, suma2 = 0;

for (i = 0; i < size; i++)
{
suma1 += a[(size + 1) * i];
}
for (i =  1; i <= size; i++)
{
suma2 += a[(size - 1) * i];
}

printf("%d, %d\n", suma1, suma2);

}
