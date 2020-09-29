#include "holberton.h"

/**
 * puts2 - print the peers positions
 *
 * @str:  variable of pointer
 *
 **/

void puts2(char *str)
{

  int len;

  for (len = 0; *(str + len) != '\0'; len++)
    {
      if (len % 2 == 0)
	{
      _putchar(*(str + len));
	}
    }


  _putchar('\n');

}
