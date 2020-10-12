#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function main
 * @argc: variable
 * @argv: variable
 * Return: zero or one
 **/
int main(int argc, char *argv[])
{

if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
