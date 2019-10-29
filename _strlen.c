#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @str: char arg
 *
 * Return: int
 */

int _strlen(char *str)
{
	if (*str)
	{
		return (1 + _strlen(str + 1));
	}
	else
		return (0);
}
