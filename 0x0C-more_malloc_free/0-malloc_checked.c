#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: memory size
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
