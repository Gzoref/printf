#include "holberton.h"

/**
 *_puts - shows the pointer of the var
 *@str: string pointer
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
