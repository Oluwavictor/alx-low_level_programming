#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** main - random valid password generator for the generator
 *
 * Return: 0 always
 */

int main(void)
{
	int my_rand;
	int count;
	int  aggre;

	srand(time(NULL));
	for (count = 0, aggre = 2772; aggre > 122; count++)
	{
		my_rand = (rand() % 125) + 1;
		printf("%c", my_rand);
		aggre -= my_rand;
	}
	printf("%c", aggre);

	return (0);
}
