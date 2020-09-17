#include<stdio.h>
/**
* main - print size types
*
* Return: 0
**/

int main(void)
{
char charType;
int intType;
longint longintType;
longlongint longlongint;
float floatType;

printf("Size of char: %ld byte(s)\n", sizeof(charType));
printf("Size of int: %ld bytes(s)\n", sizeof(intType));
printf("Size of long int: %ld bytes(s)\n", sizeof(longintType));
printf("Size of long long int: %ld bytes(s)\n", sizeof(longlongintType));
printf("Size of float: %ld bytes(s)\n", sizeof(floatType));

return (0);
}
