#ifndef __FUNCTION_POINTERS_H__
#define __FUNCTION_POINTERS_H__
#include <stdlib.h>
#include <stdio.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif /* __FUNCTION_POINTERS_H__ */
