#include "holberton.h"

/**
 * convert - converter
 * @n - number
 * @base: base
 * Return: pointer
 */

char *convert(unsigned int num, int base)
{
	char *hex = "0123456789ABCDEF";
	char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = hex[num % base];
		num /= base;
	}while (num != 0);

	return (ptr);
}
