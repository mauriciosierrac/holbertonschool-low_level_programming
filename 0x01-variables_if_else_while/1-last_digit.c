#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* main - assigns a random value to a number, captures the last digit and validates its value to meet the conditions
*
* Return: 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int last;
last= n % 10;

if (last > 5)
{
printf("Last digit of %d  is %d and is greater than 5", n, last);
}
else 
if(last == 0)
{
printf("Last digit of %d is %d and is 0", n, last);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
}
return (0);
}
