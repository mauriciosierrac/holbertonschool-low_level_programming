#include "holberton.h"

/**
* print_alphabet - print alphabet in lowercase
*
* Return :0
**/


void print_alphabet(void)
{
int a = 'a';

while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');

}
