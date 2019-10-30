#include "holberton.h"

/**
 *get_reverse - shows the pointer of the var
 *@arg: var for string pointer
 *Return: (rev string)
 */

int get_reverse(va_list arg)
{
	char *rev = va_arg(arg, char*);
	char *begin = rev;
	int index = 0;

	if (rev == NULL)
	{
		return (0);
	}
	while (*rev != '\0')
	{
		index++;
		rev++;
	}
	rev--;
	while (rev > begin)
	{
		_putchar(*rev);
		rev--;
	}
	_putchar(*rev);
	return (index);
}

/**
 *  get_percnt - Checks for unused args
 *
 *  @arg: va_list name
 *
 *  Return: Percent character
 */


int get_percent(va_list __attribute__((unused)) arg)
{
	_putchar('%');

	return (1);
}
