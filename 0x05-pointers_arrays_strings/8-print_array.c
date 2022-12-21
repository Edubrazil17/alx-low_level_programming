#include "main.h"
#include <stdio.h>

/**
 * print_array - entry level.
 * @a: input from user
 * @n: input from user
 */

void print_array(int *a, int n)
{
	int iter;

	for (iter = 0; iter < n; iter++)
	{
		printf("%d", a[iter]);

		if (iter < (n - 1))
			printf(", ");
	}

	printf("\n");
}
