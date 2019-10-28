#include "holberton.h"

int _printf(const char *format, ...)
{
	int to_print;

	va_list arg;

	va_start(arg, format);


	while (format[to_print] != '\0')
	{
		/* Check for % */
		if (format[to_print == '%'])
		{
			to_print++;
		}
		while (format[to_print] == ' ')
		{
			switch (format[to_print])
			{
			case 'd': case 'i': case 'u':
				to_print += get_int(arg);
				if (to_print < 0)
				{
					to_print *= -1;
				}
				break;
			case 'c':
				to_print += get_char(arg);
				break;
			case 's':
				to_print += get_string(arg);
				break;

			default:
				break;
			}
		}
	}
	va_end(arg);
	return (to_print);
}
