#include "main.h"

/**
 * _strlen - String length
 * @s: pointer to string to check
 * Return: void
 */

int _strslen(char *s)
{
int n = 0;

while (s[n])
  n++;

return (n);
}
