#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H


void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, int  size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);

#endif
