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
		putchar(lower);
		lower++;
	}

	putchar('\n');

	return (0);

}
			
