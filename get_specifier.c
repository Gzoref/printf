#include "holberton.h"

/**
 *  get_specifier - Link format specifier to appropriate function
 *
 *  @format: Format character
 *
 *  Return: Type of specifierx
 */


int (*get_specifier(char format))(va_list)
{
	int i;

	spec_type type[] = {
		{"i", get_int},
		{"d", get_int},
		{"c", get_char},
		{"s", get_string},
		{"r", get_reverse},
		{"%", get_percent},
		{NULL, NULL}
	};

	for (i = 0; type[i].spec != NULL; i++)
	{
		if (format == *type[i].spec)
		{
		return (type[i].f);
		}
	}
	return (NULL);
}
