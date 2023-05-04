#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @w: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int w)
{
	int a, count = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ w;

	for (a = 63; a >= 0; a--)
	{
		curr = exclusive >> a;
		if (curr & 1)
			count++;
	}

	return (count);
}
