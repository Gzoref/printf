#HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int get_int(va_list arg);
int get_char(va_list arg);
int get_string(va_list arg);


#endif
