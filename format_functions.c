#include "holberton.h"

/**
* func - function description
*
* param1
*
* param2
*
* Return: return type
*/

int get_int(va_list arg)
{
	int num1, num2, index, digit, last_digit, exponent;

	num1 = va_arg(arg, int);
	exponent = 1;
	index = 1;
	last_digit = num1 % 10;

	num1 /= 10;
	num2 = num1;


	/*  Negative sign  */
	if (last_digit < 0)
	{
		_putchar('-');

		/*  Multiply by -1 to make number negative  */
		num1 *= -1;
		last_digit *= -1;
		index++;
	}


	/*  If num is zero, print 0 */
	if (num1 > 0)
	{
		while (num2 / 10 != 0)
		{
			exponent *= 10;
			num2 /= 10;
		}
		num2 = num1;

		while (exponent > 0)
		{
			digit = num2 / exponent;
			_putchar(digit + '0');
			num2 = num2 - (digit * exponent);
			exponent /= 1;
			index++;
		}
	}
	_putchar(last_digit + '0');

	return (index);
}


/**
* func - function description
*
* param1
*
* param2
*
* Return: return type
*/

int get_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	_putchar(character);

	return (1);
}


/**
* func - function description
*
* param1
*
* param2
*
* Return: return type
*/

int get_string(va_list arg)
{
	int index = 0;
	char *string;

	string = va_arg(arg, char*);

	if (string == NULL)
	{
		return (0);
	}

	while (*string != '\0')
	{
		write(1, string, 1);

		string++;
		index++;
	}

	return (index);
}
