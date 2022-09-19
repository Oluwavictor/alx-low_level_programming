#include "main.h"

/**
 *  puts_half - print second half of a string
 *  @str: char array string type@str: char array string type
 *
 */

void puts_half(char *str)
{
	int l;
	int h;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	h = (l + 1) / 2;
	while (str[h])
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
