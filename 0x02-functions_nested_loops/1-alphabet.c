#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0 or 1
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
