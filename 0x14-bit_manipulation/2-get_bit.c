#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @q: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int q, unsigned int index)
{
	int bit_output;

	if (index > 63)
		return (-1);

	bit_output = (q >> index) & 1;

	return (bit_output);
}
