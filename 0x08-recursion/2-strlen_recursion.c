#include "main.h"

/**
 * _strlen_recursion - Returnsthe length of the string.
 * @s: the string to be printed.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
