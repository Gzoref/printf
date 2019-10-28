#include "holberton.h"

int get_specifier(char format, va_list arg)
{
	int to_print = 0;

	switch (format)
	{
	case 'd': case 'i': case 'u':
		to_print += get_int(arg);
		break;
	case 'c':
		to_print _putchar(arg);
		break;
	case 's':
		to_print += get_string(arg);
		break;
	default:
		break;
		to_print++;
	}
	to_print++;

	return (to_print);
}
