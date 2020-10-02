#include "holberton.h"

/**
 * reverse_array - print reverse to string
 * @a: variable
 * @n: integer
 *
 **/

void reverse_array(int *a, int n)
{
int x, y, z;

z = 0;

for (x = n - 1; x >= (n / 2); x--)
{
y = a[z];
a[z] = a[x];
a[x] = y;
z++;
}

}
