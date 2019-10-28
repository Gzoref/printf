#include "holberton.h"

/**
 *rev_string - shows the pointer of the var
 *@s: var for string pointer
 *Return: (rev string)
 */

int rev_string(va_list arg)
{
	char rev[1000];
	int a, b;

	a = 0;

	char *s = va_arg(arg, char*);
	while (*(s + a) != '\0')
	{
		rev[a] = *(s + a);
		a++;
	}
	b = a - 1;
	a = 0;

	while (b >= 0)
	{
		*(s + b) = rev[a];
		b--;
		a++;
	}
	return (a);
}

#include "holberton.h"

/**
 * rot13 -encodes a string into 1337
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = (s[i] + 13);
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && (s[i] + 13) <= 'Z'))
		{
			s[i] = (s[i] - 13);
		}
		i++;
	}
	return (s);
}
