#include "main.h"

/**
* print_alphabet_x10 - print_alphabet 10 times.
* Return: 0
*/

void print_alphabet_x10(void)
{
	int a;
	int c;

	for (c = 1; c <= 10; c++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
		
