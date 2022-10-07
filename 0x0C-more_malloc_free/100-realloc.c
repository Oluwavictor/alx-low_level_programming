#include "main.h"

/**
 * _realloc - allocate memory and set all values to 0
 * @ptr: pointer to the memory previously allocated (malloc(old_size))
 *
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 *
 * Return: pointer to the new array.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrMem;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptrMem = malloc(new_size);
	if (ptrMem == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		ptrMem[i] = *((char *)ptr + i);

	free(ptr);
	return (ptrMem);
}
