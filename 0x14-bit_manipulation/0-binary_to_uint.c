#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @p: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *p)
{
	int a;
	unsigned int decimal_value = 0;

	if (!p)
		return (0);

	for (a = 0; p[a]; a++)
	{
		if (p[a] < '0' || p[a] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (p[a] - '0');
	}

	return (decimal_value);
}
