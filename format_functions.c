#include "holberton.h"

/**
 *  get_int - Prints integersfor i, d, u flags
 *
 *  @arg: va_list name
 *
 *  Return: Inxteger
 */



int get_int(va_list arg)
{

	int n = va_arg(arg, int);
	int num;
	int last = n % 10;
	int dig;
	int exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);

}


/**
 * get_char- Prints for char flag
*
* @arg: va_list name
*
* Return: Character
*/

int get_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	_putchar(character);

	return (1);
}


/**
* get_string - Prints for s flag
*
* @arg: va_list name
*
* Return:  Character pointer
*/

int get_string(va_list arg)
{
	int index = 0;
	char *string;

	string = va_arg(arg, char*);

	if (!string)
	{
		return (0);
	}

	while (string[index] != '\0')
	{
		_putchar(string[index]);
		index++;
	}

	return (index);
}
