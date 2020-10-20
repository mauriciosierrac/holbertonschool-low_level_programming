#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - pointer
 * @name: variable name of pet
 * @age: age of pet
 * @owner: propietarie of pet
 *Return: null
 **/


dog_t *new_dog(char *name, float age, char *owner)
{
int  size1, size2, i;

dog_t *dog;

if (name == NULL || owner == NULL)
return (NULL);

dog =  malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

for (size1 = 0; name[size1]; size1++)
;
size1++;

dog->name = malloc((size1) *sizeof(char));

if (dog->name == NULL)
free(dog);
return (NULL);

for (i = 0; i < size1; i++)
dog->name[i] = name[i];
dog->age = age;

for (size2 = 0; owner[size2]; size2++)
;
size2++;
dog->owner = malloc((size2) *sizeof(char));

if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

for (i = 0; i < size2; i++)
dog->owner[i] = owner[i];
return (dog);
}
