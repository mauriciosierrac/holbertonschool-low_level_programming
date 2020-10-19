#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print dates of pets
 * @d: variable pointer
 *Return: zero
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

if (d->name == NULL)
{
printf("Name: (nil)");
}
else
{
printf("Name: %s\n", d->name);
}
printf("Age: %f\n", d->age);

if (d->owner == NULL)
{
printf("Owner: (nil)");
}
else
{
printf("Owner: %s\n", d->owner);
}
}

