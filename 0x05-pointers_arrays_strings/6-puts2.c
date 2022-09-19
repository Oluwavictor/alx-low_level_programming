#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints a string, followed by a new line
 * @str: pointer to the string
 * Return: void
 */

void puts2(char *str)
{
	int j;

	for (j = 0; j < _strlen(str); j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar(str[i]);
}
