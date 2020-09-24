#include "holberton.h"

/**
 * print_diagonal - print
 * @n: variable
 *
 **/


void print_diagonal(int n)
{

  int a, b;

  
  for (a = 0; a < n; a++)
    {
      for (b = 0; b != n;  b++)
	{
	  b = b + 1;
	  _putchar(b + '0');

	}
      _putchar('\n');
    }
  _putchar('\n');
}
