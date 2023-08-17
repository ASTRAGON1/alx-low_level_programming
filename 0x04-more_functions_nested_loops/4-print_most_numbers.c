#include "main.h"

/**
 * print_numbers - print 0-9 exept of 2 and 4
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			break;
		}
		else
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
