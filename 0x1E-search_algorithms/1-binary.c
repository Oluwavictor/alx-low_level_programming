#include "search_algos.h"

/**
 * iterative_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: is a pointer to the first element 
 * of the array to search in
 * @size: cardinality the array
 * @value: value to search for
 * Return: index of the number
 */
int iterative_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (iterative_search(array, half, value));

	half++;

	return (iterative_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: cardinality of array
 * @value: value to search for
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = iterative_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
