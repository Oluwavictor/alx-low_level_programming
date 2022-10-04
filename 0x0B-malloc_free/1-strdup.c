#include "main.h"

/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *dupli;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		j++, i++;
	j++;

	dupli = malloc(sizeof(char) * j);

	if (dupli == NULL)
		return (NULL);

	i = 0;
	while (i < j)
	{
		*(dupli + i) = *(str + i);
		i++;
	}

	return (dupli);
}
