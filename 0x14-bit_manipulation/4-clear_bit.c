#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @q: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *q, unsigned int index)
{
	if (index > 63)
		return (-1);

	*q = (~(1 << index) & *q);
	return (1);
}
