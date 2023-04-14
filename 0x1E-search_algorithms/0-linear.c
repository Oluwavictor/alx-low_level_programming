#include "search_algos.h"

/**
 * linear_search - functiont that searches for a value in an
 * array of integers using the Linear search algorithm
 *
 * @array: input array
 * @size:  cardinality of array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
			return ((int)i);
		}
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
	}
	return (-1);
}
