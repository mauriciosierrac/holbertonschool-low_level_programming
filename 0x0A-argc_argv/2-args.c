#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: variable
 * @argv: variable
 * Return: zero
 **/

int main(int argc, char *argv[])
{
int a;
for (a = 0; a < argc; a++)
printf("%s\n", argv[a]);

return (0);

}
