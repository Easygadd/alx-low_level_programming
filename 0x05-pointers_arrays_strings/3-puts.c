#include "main.h"
#include <stdio.h>
/**
 * _puts - puts a string, followed by a new line
 * @str: pointer to tge string to print
 * Return: void
 */

void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar (str[i]);
i++;
}
_putchar ('\n');
}
