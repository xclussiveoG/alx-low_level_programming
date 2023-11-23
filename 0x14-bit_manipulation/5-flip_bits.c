#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bits = 0;
	unsigned long int num;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = exclusive >> i;
		if (num & 1)
			bits++;
	}

	return (bits);
}
