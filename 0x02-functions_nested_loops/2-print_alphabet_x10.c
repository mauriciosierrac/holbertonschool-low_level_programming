#include "holberton.h"

/**
* print_alphabet_x10 - print alphabet in lowercase for ten times
*
* Return :0
**/


void print_alphabet_x10(void)
{
int a = 'a';
int x = 0;

while (x < 10)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
x++;
a = 'a';
}
}
