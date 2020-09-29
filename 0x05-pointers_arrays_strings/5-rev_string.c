#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - print string in reverse
 * @s: variable pointer
 **/

void rev_string(char *s)
{

int  size, a, b;
char c;

for (size = 0; *(s + size) != '\0'; size++)
;

b = size - 1;

for (a = 0; b >= 0 && a < b; b--, a++)
{
c = s[a];
s[a] = s[b];
s[b] = c;
}

}
