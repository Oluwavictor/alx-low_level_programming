#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to print
 */

int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{}
	return (j);
}

void rev_string(char *s)
{
	int j;
	char k;

	for (j = 0; j < _strlen(s) / 2; j++)
	{
		k = s[j];
		s[j] = s[_strlen(s) - j - 1];
		s[_strlen(s) - j - 1] = k;
	}
}
