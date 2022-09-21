#include "main.h"

/**
 * string_toupper - capitalize all letters in string
 * @s: string to manipulate
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	return s;
}
