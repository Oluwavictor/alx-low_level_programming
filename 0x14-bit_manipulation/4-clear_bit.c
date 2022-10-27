#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * at a given index.
 * @n: the input number
 * @index: the input index
 * Return: 1 if works, or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
