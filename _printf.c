#include "holberton.h"

/**
 * _printf - printf function
 * @format: arguments to print
 *
 */

int get_int(va_list arg);

int _printf(char *format, ...)
{
	char *f;
	unsigned int i;
	char *s;

	va_list arg;
	va_start(arg, format);

	for (f = format; *f != '\0'; f++)
	{
		while(*f != '%')
		{
			putchar(*f);
			f++;
		}
		f++;
		switch (*f)
		{
		case 'd': i = get_in(arg);
			break;
		default:
			continue;
		}
	}
	return (0);
}

int main()
{}
