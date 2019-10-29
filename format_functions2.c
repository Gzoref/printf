#include "holberton.h"

/**
 *rev_string - shows the pointer of the var
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

	while (rev > begin)
	{
		write(1, rev ,1);
		rev--;
	}
	write(1, rev, 1);

	return (index);
}
