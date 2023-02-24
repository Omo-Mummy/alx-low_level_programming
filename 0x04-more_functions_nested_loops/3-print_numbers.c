#include "main.h"

/**
 * print numbers - print 0-9
 * return: always 0.
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
