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
	int num1, num2, length, digit, flag;
	char buffer [2] = { '0', '\0'};
	
	num1 = va_arg(arg, int);

	length = 1000000000;
	num2 = 0;
	flag = 0;

	
	/*  Negative sign  */
	if (num1 < 0)
	{
		write(1, "-", 1);

		/*  Multiply by -1 to make number negative  */
		num1 *= -1;
	}

	
	/*  If num is zero, print 0 */            
	if (num1 == 0)
	{
		write(1, "0", 1);
		return (1);
	}

		/*  If num equals type int minimum  */
	if (num1 == INT_MIN)
	{
		flag = 1;
		num1++;
	}
	
	if (num1 > 0)
	{
		while (num1 / length < 0)
		{
			length /= 10;
		}
		while (num1 > 0)
		{
			num2++;
			digit = num1 / length;
			length /= 10;
			buffer[0] = digit + '0';

			if (flag == 1)
			{
				num1++;
			}
			flag = 0;
			write(1, buffer, 1);
		}
		if (num1 == 0 && length == 1)
		{
			num2++;
			write(1, "0", 1);
		}
	}
	return (num2);
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

	character = (char)va_arg(arg, int);
	write(1, &character,1 );
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

}
