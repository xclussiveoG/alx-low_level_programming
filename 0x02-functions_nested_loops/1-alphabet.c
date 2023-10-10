#include "main.h"

/**
 * print_alphabet - print alphabets in lowercases followed by a new line
 */

void print_alphabet(void)
{
	char mn;

	mn = 'a';
	while (mn <= 'z')
	{
		_putchar(mn);
		mn++;
	}	_putchar('\n');
}
