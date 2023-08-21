#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	for (int i = 0; i < length ; i++)
	{
		_putchar(str[length - i - 1]);
	}
	_putchar('\n');
}

