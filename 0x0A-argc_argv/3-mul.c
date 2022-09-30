#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
	if (argc != 3) //input validation
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2])); //multiply arguments passed
	return (0);
}
