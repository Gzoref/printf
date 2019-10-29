#include "holberton.h"

int main()
{
	int n = 1343;
	int n2 = -762534;
	int n3 = -43;
	char c = 'G';
	char *str = "Hello";

	_printf("%s\n", str);
	_printf("%d\n", n);
	_printf("Geoff\n");
	_printf("%d\n", n2);
	_printf("%u\n", n3);
	_printf("%c\n", c);
       	_printf("%r\n", "hello");
	_printf("\"");
	_printf("\\");

	return 0;
}
