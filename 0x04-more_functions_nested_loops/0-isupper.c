#include "holberton.h"
/**
 * _isupper - check if char is upper
 * Return: the variable for check
 * @c: containt the char
 **/

int _isupper(int c)
{
int res;
if (c >= 'A' && c <= 'Z')
{
res = 1;
}
else
{
res = 0;
}

return (res);
}
