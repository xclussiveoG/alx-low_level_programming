#include "main.h"

/**
 * set_bit - returns the value of a bit at a given index
 * @n: num
 * @index: index of the bit to be printed
 *
 * Return: Allow success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
