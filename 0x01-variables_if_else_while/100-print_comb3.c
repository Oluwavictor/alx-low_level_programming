#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int o;
	int t;

	for (o = '0'; o <= '9'; o++)
	{
		for (t = o + 1 ; t <= '9'; t++)
		{
			if (t != o)
			{
				putchar(o);
				putchar(t);

				if (o == '8' && t == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}		
