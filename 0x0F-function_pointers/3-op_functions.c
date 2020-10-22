#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - function to sum
* @a: integer 1
* @b: integer 2
* Return: value of calc
**/

int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - function to rest
* @a: integer 1
* @b: integer 2
* Return: sub
**/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - function to mul
* @a: integer 1
* @b: integer 2
* Return: mul
**/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - function to div
* @a: integer 1
* @b: integer 2
* Return: div
**/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod - function to mod
* @a: integer 1
* @b: integer 2
* Return: mod
**/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
