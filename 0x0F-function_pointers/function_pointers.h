#ifndef __FUNCTION_POINTERS_H__
#define __FUNCTION_POINTERS_H__
#include <stdlib.h>
#include <stdio.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* __FUNCTION_POINTERS_H__ */
