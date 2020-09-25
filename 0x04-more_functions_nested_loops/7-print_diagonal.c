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
      for (b = 0; b <= a;  b++)
	{
	  if(b == a)
	    {
	      _putchar('\\');
	      _putchar('\n');
		}
	  else 
	  _putchar(' ');

	}
      
    }
  _putchar('\n');
}
