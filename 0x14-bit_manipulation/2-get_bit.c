#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: num
 * @index: index to be printed
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
