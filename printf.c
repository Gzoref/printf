#include "holberton.h"

int _printf(const char *format, ...)
{
	char next_letter;
	va_list arg;
	int index = 0;

	va_start(arg, format);

	while (format[index] != '\0')
	{
		/* Check for % */
		if (format[index] == '%')
		{
			next_letter = format[index + 1];

			get_specifier(next_letter, arg);
		}
		index++;
	}
	return(index);
}
