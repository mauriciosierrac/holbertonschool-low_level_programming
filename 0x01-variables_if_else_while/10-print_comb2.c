#include <stdio.h>

/**
* main - display numbers 00 to 99
*
* Return: 0
**/

int main(void)
{
int x = 48;
int y = 48;

while (x < 58)
{

while (y < 58)
{

putchar(x);
putchar(y);
if (x != 57 || y != 57)
{
putchar(',');
putchar(32);
}
y++;

}

y = 48;
x++;

}


putchar('\n');
return (0);
}

