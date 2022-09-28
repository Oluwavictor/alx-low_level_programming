#include "main.h"

/**
 * _puts_recursion - function that prints a string,
 *
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		{
			return;
		}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
