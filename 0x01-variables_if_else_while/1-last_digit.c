#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - captures the last digit and validates its value to meet the conditions
*
* Return: 0
*/

int main(void)
{
int n;
int u;

srand(time(0));
n = rand() - RAND_MAX / 2;
u = n % 10;

if (u > 5)
{
printf("Last digit of %d  is %d and is greater than 5\n", n, u);
}
else
if (u == 0)
{
printf("Last digit of %d is %d and is 0\n", n, u);
}
else
if
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, u);
}
return (0);
}
