#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
int _printf(const char *format, ...);
int (*_check(const char *))(va_list);
/**
 * struct func - struct for specifier to printer
 * @t: character to compare
 * @f: function to handle printing
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;
int print_char(va_list args);
int print_cent(va_list args);
int print_str(va_list args);
int print_int(va_list);
int print_dec(va_list);
#endif
