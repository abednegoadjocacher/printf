#ifndef main_h
#define main_h
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
int ab_c(const char *format, va_list list_of_args);
int _print_string(const char *str);
#endif
