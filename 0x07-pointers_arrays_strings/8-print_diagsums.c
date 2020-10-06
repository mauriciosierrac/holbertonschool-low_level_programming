#include "holberton.h"

/**
 * print_diagsums - the function sums to diag
 * @a: variable
 * @size: variable
 *
 **/

void print_diagsums(int *a, int size)
{

  int i, suma1, suma2;

  for (i = 0; i < size * size; i+= (size + 1))
    {
      suma1 += a[i];
    }
  for (i =  size - 1; i < (size * size) -1;  i += (size -1))
    {
      suma2 += a[i];
    }

  printf("%d, %d\n", suma1, suma2);    
    
  
}
