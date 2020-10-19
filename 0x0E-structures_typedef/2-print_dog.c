#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dates of pets
 * @d: variable pointer
 */

void print_dog(struct dog *d)
{
if (d->name == NULL)
{
printf("Name: (nil)");
}
if (d->owner == NULL)
{
printf("Owner: (nil)");
}
if (d != NULL)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
