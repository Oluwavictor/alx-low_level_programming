#include "main.h"

/**
 * aid - helps function
 * @word: wordCount
 * @size: length
 * @s : array you want to assign
 * @str : string
 */

char **aid(int word, int size, char *str, char **s)
{
	int i, j, k;

	j = 0;
	for (i = 0; i < word; i++)
	{
		k = 0;
		{
			for (j; j < size; j++)
				if (str[0] != ' ' || str[j] != ' ')
				{
					s[i][k] = str[j];
					k++;
				}
			if (j != 0 && str[j] == ' ' && str[j - 1] != ' ')
			{
				j++;
				break;
			}
		}
		s[i][k + 1] = '\0';
	}
	s[word + 1] = NULL;
	return (s);
}

/**
 * strtow - splits a string into words
 * @str: input string to check
 * Return: pointer to new string
 */

char **strtow(char *str)
{
	int len, i, j, size, k, word;
	char **s;

	if (str == NULL)
		return (NULL);
	len = 0;
	word = 0;
	while (str[len] != '\0')
	{
		if (str[0] != ' ')
			word++;
		if (str[len] != ' ' && str[len - 1] == ' ' && len != 0)
			word++;
		len++;
	}
	s = (char **)malloc(sizeof(char *) * word + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < word; i++)
	{
		size = 0;
		for (; j < len; j++)
		{
			if (str[0] != ' ' || str[j] != ' ')
				size++;
			if (str[j] == ' ' && size > 0)
				break;
		}
		printf("%d\n", size);
		s[i] = (char *)malloc(sizeof(char) * size + 1);
		if (s[i] == NULL)
		{
			for (k = i - 1; k >= 0; k--)
				free(s[k]);
			free(s);
		}
	}
	s = aid(word, len, str, s);
	return (s);
}
