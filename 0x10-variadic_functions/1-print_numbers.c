#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (separator && i < (n - 1))
			printf("%s", separator);
		i++;
	}

	printf("\n");
	va_end(list);
}
