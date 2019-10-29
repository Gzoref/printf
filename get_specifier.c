#include "holberton.h"

int (*get_specifier(char format))(va_list)
{
	int i;

	spec_type type [] = {
		{"i", get_int},
		{"d", get_int},
		{"c", get_char},
		{"s", get_string},
		{NULL, NULL}
	};

	for (i = 0; type[i].spec != NULL; i++)
	{
		if (format != '\0')
		{
		return (type[i].f);
		}
	}
	return (NULL);
}
