#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - print string in reverse
 * @s: variable pointer
 **/

void rev_string(char *s)
{

  int  size;

  for (size = 0; *(s + size) != '\0'; size++)
    {
      _putchar(*(s + size));
    }
  /* 
 _putchar('\n');
 
  for (len = (size - 1); len >= 0 ; len--)
    {
      _putchar(*(s + len));
    }
  */
  _putchar('\n');

}
