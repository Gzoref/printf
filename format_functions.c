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
	int n;
	int len = 0,div;
	unsigned int num;

	n = va_arg(arg, int);


	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);

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
