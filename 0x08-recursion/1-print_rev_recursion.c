#include "main.h"

/**
 * _puts_recursion - function that prints a string,
 *
 * @s: The pointer variable to string s
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
