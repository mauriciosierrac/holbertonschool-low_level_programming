#include "holberton.h"


/**
 * rev_string - print string in reverse
 * @s: variable pointer
 **/

void rev_string(char *s)
{

  int  size, len;

  for (size = 0; *(s + size) != '\0'; size++)
    ;
 
  for (len = (size - 1); len >= 0 ; len--)
    {
      _putchar('0');
    }
  
  _putchar('\n');

}
