#include <stdio.h>

/**
 * Entry point
 *
 * REturn: Always 0 (Success)
 */

init main(void)
{
	init o , t;

	for (t = '0'; t <= '9'; t++)
	{
		for (o = (t + 1); o <= '9'; o++)
		{
			putchar(t);
			putchar(o);

			if (t != '8' || o != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

							
