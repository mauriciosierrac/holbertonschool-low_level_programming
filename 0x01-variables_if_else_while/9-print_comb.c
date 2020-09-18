#include <stdio.h>

/**
* main - display numbers 0 to 9
*
* Return: 0
**/

int main(void)
{

int y = 48;


while (y < 58)
{

putchar(y);
if (y != 57)
{
putchar(',');
putchar(32);
}
y++;
}
putchar('\n');
return (0);
}
