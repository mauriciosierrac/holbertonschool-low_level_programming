#ifndef DOG_H
#define DOG_H

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


#endif
