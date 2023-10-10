#include "main.h"

/**
 * print_alphabet -  alphabet in lowercases followed by new  line
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}	_putchar('\n');
}
