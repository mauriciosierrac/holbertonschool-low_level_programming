#include "function_pointers.h"


/**
 * print_name - function that print a name
 * @name: variable parameter
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
