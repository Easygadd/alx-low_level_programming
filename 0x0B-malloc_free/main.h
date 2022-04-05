#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int _strlen(char *s);
char *str_addChar (char *str, char c);
unsigned int nbr_spaces(char *s);
