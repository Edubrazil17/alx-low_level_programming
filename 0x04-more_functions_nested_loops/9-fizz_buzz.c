#include "main.h"
#include <stdio.h>

/**
 * main - prints 1 - 100 with fizz and buzz occupying multiple of 3 and 5
 * Return: Always 0
 */
int main(void)
{

	int iter;

	for (iter = 1; iter <= 100; iter++)

	{

		if ((iter % 3) == 0)

			printf("Fizz");

		if ((iter % 5) == 0)

			printf("Buzz");

		if (((iter % 3) !=0) && ((iter % 5) !=0))

			printf("%d", iter);

		if (iter < 100)
			printf(" ");

	}

	printf("\n");

	return (0);

}

