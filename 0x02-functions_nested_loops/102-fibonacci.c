#include <stdio.h>

/**
 * main - this is the entry point of the program
 * Description: this function returns 1 or 0
 * Return: 0
 */
int main(void)
{
	long int accumulator_1, accumulator_2, n, temp;

	accumulator_1 = 0;
	accumulator_2 = 1;

	for (n = 0; n <= 49; n++)
	{
		temp = accumulator_1 + accumulator_2;
		accumulator_1 = accumulator_2;
		accumulator_2 = temp;

		if (n == 49)
		{
			printf("%ld", accumulator_2);
		} else
		{
			printf("%ld, ", accumulator_2);
		}
	}

	printf("\n");
	return (0);
}
