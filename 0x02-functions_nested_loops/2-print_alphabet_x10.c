include "holberton.h"

/**
* print_alphabet - print alphabet in lowercase
*
* Return :0
**/


void print_alphabet_x10(void)
{
int a, x;

for (x = 0; x < 10; x++)
{

for ( a = 'a'; a <= 'z'; a++)
{
_putchar(a);

}
_putchar('\n');
}
}
