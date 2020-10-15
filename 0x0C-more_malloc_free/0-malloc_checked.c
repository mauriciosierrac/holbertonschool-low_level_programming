#include <stdlib.h>

/**
 * malloc_checked - function to checked fi malloc reserved memory
 * @b: variable
 * Return: pointer to allocated memory
 **/

void *malloc_checked(unsigned int b)
{


int *s;

s = malloc(b);

if (s == NULL)
{
exit(98);
}
return (s);
}
