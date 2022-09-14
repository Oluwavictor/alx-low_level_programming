#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int i)
{
	while (i < 98)
	{
		printf("%d, ", i);
		i++;
	}

	while (i > 98)
	{
		printf("%d, ", i);
		i--;
	}

	if (i == 98)
		printf("%d, ", i);

	printf("\n");
}
