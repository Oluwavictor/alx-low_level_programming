#include "main.h"

/**
 * array_range - create array of integers
 * @min: start range from
 * @max: end range at
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr, i, len;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;

	arr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
