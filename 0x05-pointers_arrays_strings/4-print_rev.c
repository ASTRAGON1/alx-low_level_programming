#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (int i = 0; i < length ; i++)
	{
		_putchar(s[length - i - 1]);
	}
	_putchar('\n');
}

