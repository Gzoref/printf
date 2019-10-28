#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int get_specifier(char format, va_list arg);
int get_int(va_list arg);
int get_char(va_list arg);
int get_string(va_list arg);
void _put (char *str);

#endif
