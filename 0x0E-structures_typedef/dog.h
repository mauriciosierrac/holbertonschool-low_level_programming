#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib>

/**
 * struct dog - structure from dogs dates
 * @name: parameter of name
 * @age: parameter of age
 * @owner: parameter to propietary
 **/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
