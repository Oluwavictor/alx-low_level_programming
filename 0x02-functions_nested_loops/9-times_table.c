#include "main.h"

/**
 * times_table - print the 9 multiplication table
 */

void times_table(void)
{
	int row;
	int col;
	int prod;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prod = (row * col);

			if (col == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else if (prod > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
		}
		_putchar('\n');
	}
}
