#include <stdio.h>

/**
 * main - Write a program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	int i;
	int n;

	for (i = 0; i < 98; i++)
	{
		for (n = 0; n < 99; n++)
		{
			if (i < n)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				if (i != 98 || n != 99)
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

