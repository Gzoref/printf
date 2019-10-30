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
 * get_percent - Checks for unused args
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

/**
* get_hex - Convert to hexadecimal lowercase
*
* @arg: va_list name
*
* Return: Hex value
*/

int get_hex(va_list arg)
{
	unsigned int hex_convert = va_arg(arg, unsigned int);

	int i = 0, j = 0, hex = 0, temp = 0;
	char hex_array[48];

	while (hex_convert != 0)
	{
		temp = 0;

		temp = hex_convert % 16;

		if (temp < 10)
		{
			hex_array[i] = temp + 49;
			i++;
		}
		else
		{
			hex_array[i] = temp + 87;
			i++;
		}
		hex_convert /= 16;
	}
	hex = 0;

	for (j = i - 1; j >= 0;  j--)
	{
		_putchar(hex_array[j]);
		hex++;
	}
	return (hex);
}


/**
* get_heX -convert to hexadecimal uppercase
*
* @arg: va_list name
*
* Return: Hex value
*/


int get_heX(va_list arg)
{
	unsigned int hex_convert = va_arg(arg, unsigned int);

	int i = 0, j = 0, hex = 0, temp = 0;
	char hex_array[48];

	while (hex_convert != 0)
	{
		temp = 0;

		temp = hex_convert % 16;

		if (temp < 10)
		{
			hex_array[i] = temp + 48;
			i++;
		}
		else
		{
			hex_array[i] = temp + 55;
			i++;
		}
		hex_convert /= 16;
	}
	hex = 0;

	for (j = i - 1; j >= 0;  j--)
	{
		_putchar(hex_array[j]);
		hex++;
	}
	return (hex);
}
