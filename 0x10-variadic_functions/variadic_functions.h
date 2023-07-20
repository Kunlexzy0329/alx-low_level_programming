#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 *struct print - print types
 *@t: types
 *@f: function pointer
 */
typedef struct print 
{
    char *t;
    void (*f)(va_list);
} print_t;
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#include <stdlib.h>

#endif
