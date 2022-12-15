#include "main.h"
/**
 * print_times_table - this is the entry point of the program
 * Description: this funtion return 1 or 0
 * @n: this is the user input
 * Return: does nothing
 */
void print_times_table(int n)
{
	int i;
	int j;
	int total;

	if ((n > 15) || (n < 0))
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			total = i * j;

			if (total >= 10 && total <= 99)
			{
				_putchar(' ');
				_putchar((total / 10) + '0');
				_putchar((total % 10) + '0');
			} else if (total >= 100)
			{
				_putchar((total / 100) + '0');
				_putchar(((total % 100) / 10) + '0');
				_putchar(((total % 100) + 10) + '0');
			} else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(total + '0');
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
