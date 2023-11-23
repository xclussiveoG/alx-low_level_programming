#include "main.h"

/**
 * binary_to_uint - converts a binary to decimal
 * @b: binary val to be converted
 *
 * Return: the converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int Sum = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		Sum = 2 * Sum + (b[j] - '0');
	}

	return (Sum);
}
