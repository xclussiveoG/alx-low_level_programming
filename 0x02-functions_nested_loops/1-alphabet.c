#include "main.h"

/**
 * print_alphabet - print alphabet in lowercases followed by another  line
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
