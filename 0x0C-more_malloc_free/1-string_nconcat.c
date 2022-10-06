#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy
 *
 * Return: pointer to concatenate string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1, l2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = 0;
	l2 = 0;
	while (s2[l2] != '\0')
		l2++;
	while (s2[l1] != '\0')
		l1++;

	if (n >= l2)
		n = l2;

	s = malloc(sizeof(char) * n + l1 + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[i + l1] = s2[i];

	s[i + l1] = '\0';

	return (s);
}
