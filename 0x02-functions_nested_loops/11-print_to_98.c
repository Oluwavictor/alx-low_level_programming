#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int i)
{
	if (i < 98)
	{
		for (i = i; i < 98; i++)
			printf("%d, ", i);
		printf("%d\i", 98);
	}
	else
	{
		for (i = i; i > 98; i--)
			printf("%d, ", i);
		printf("%d\i", 98);
	}
}
