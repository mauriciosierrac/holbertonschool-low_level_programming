#include <stdio.h>

/**
* main - print all letters of alphabetic
*
* Return: 0
**/

int main(void)

{

int x = 'a';
int y = 'A';

while (x <= 'z')
{
putchar(x);
x++;
}
while (y <= 'Z')
{
putchar(y);
y++;
}

putchar('\n');

return (0);
}


