#include "holberton.h"

/**
 *  get_int - Prints integersfor i, d, u flags
 *
 *  @arg: va_list name
 *
 *  Return: Integer
 */

int get_int(va_list arg)
{
	int n;
	int num;
	int last;
	int digit;
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
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp /= 10;
			index++;
		}
	}
	_putchar(last + '0');
	return (index);
}


/**
 *  get_unsigned - Prints unsigned integers
 *
 *  @arg: va_list name
 *
 *  Return: Integer
 */


int get_unsigned(va_list arg)
{
	int index = 0, sum = 0, digit, last_digit;
	int div = 1000000000;
	unsigned int num = va_arg(arg, unsigned int);

	while (div > 1)
	{
		digit = (num / div) % 10;
		sum += digit;

		if (sum != 0)
		{
			_putchar(digit + '0');
			index++;
		}
		div /= 10;
	}
	last_digit = num % 10;
	_putchar(last_digit + '0');
	index++;

	return (index);
}
