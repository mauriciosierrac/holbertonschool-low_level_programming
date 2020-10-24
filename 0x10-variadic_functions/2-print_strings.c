#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - function that print to strings
 * @separator: char ,
 * @n: length of array
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i;
va_list arg;
va_start(arg, n);

for (i = 0; i < n; i++)
{

str = va_arg(arg, char *);

if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}

if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(arg);
}
