#include "main.h"

#include <stdio.h>

/**
* print_to_98 - this is the entry point of the program
* Description: this function returns 1 or 0
* @n: takes in a value to be printed from
*/

void print_to_98(int n)
{
	if (n >= 98)

	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}

		printf("%d", n);
	} else
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}

		printf("%d", n);
	}

	printf("\n");
}
