#include "main.h"

/**
 * function that returns the length of a string.
 * string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s != '\0')
	{
		k = _strlen_recursion(s + 1);
		return (k += 1);
	}
	return (0);
}
