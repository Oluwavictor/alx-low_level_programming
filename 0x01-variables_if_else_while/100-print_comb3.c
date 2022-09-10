#include <stdio.h>

/**
 * Entry point
 *
 * Return: Always 0 (Success)
 */

init main(void)
{
	init o;
	init t;

	for (o = 0; o <= 9; o++)
	{
		for (t = 0 ; t <= 9; t++)
		{
			if ( t > o)
			{
				putchar(o);
				putchar(t);

				if (o != 8 || t != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

							
