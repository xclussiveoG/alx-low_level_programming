#include "main.h"

/**
 * print_binary - prints binary representation of a num
 * @n: num to be converted
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int num;

	for (j = 63; j >= 0; j--)
	{
		num = n >> j;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
