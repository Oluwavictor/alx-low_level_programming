#include "main.h"

/**
 * _puts_recursion - function that prints a string,
 *
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}