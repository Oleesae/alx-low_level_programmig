#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
int _isspace(char c);
char *skipspace(char *str);
unsigned int countchars(char *str);
unsigned int countwords(char *str);
char **strtow(char *str);

#endif /* MAIN_H */
