#include "main.h"

/**
 * _strlen - String length
 * @s: pointer to string to check
 * Return: void
 */

int _strslen(char *s)
{
int i = 0;

while (s[i])
  i++;

return (i);
}
