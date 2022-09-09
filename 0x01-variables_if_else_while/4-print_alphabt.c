#include <stdio.h>

/**
 *main - print lowercase a-z using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);

}
			
