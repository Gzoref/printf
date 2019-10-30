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
	int n;
	int num;
	int last;
	int dig;
	int exp = 1;
	int index = 1;

	n = va_arg(arg, int);
	last = n % 10;

	n /= 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		index++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp *= 10;
			num /= 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp /= 10;
			index++;
		}
	}
	_putchar(last + '0');
	return (index);
}

/**
* get_char - Prints for c flag
*
* @arg: va_list name
*
* Return:  Character
*/


int get_char(va_list arg)
{
	char character = va_arg(arg, int);

	return (_putchar(character));
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
	int count;
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);
	return (count);
}
