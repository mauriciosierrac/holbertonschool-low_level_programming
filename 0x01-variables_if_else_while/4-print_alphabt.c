#include <stdio.h>

/**
* main - remove two letters from the alphabet
*
* Return: 0
**/

int main(void)
{
int x = 'a';
int c = 'a';
while (x <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
x++;
c++;

}
putchar('\n');
return (0);
}
