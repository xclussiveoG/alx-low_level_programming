#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lower case
 * follow by a new line
 */
void print_alphabet_x10(void)
{
	char mn;
	int i;

	i = 0;
	while (i < 10)
	{
		mn = 'a';
		while (mn <= 'z')
		{
			_putchar(mn);
			mn++;
		}
		_putchar('\n');
		i++;
	}

}
