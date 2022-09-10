#include <stdio.h>

/**
 *main - print lowercase a-z using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if ((lower != 'q') && (lower != 'e'))
		{
			putchar(lower);
		}
		lower++;
	}

	putchar('\n');

	return (0);

}		
