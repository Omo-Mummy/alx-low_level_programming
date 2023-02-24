#include "main.h"

/**
 * print_numbers - checks for a digit 0 to 9
 * return: always 0.
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
