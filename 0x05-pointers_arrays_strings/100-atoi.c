#include "main.h"

/**
 * _atoi - entry level
 * @s: user input
 * Return: Always a number
 */

int _atoi(char *s)
{
	int x, lowest, br;
	unsigned int found = 0;

	lowest = 1;
	br = 0;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == 45)
			lowest *= -1;

		while (s[x] >= 48 && s[x] <= 57)
		{
			br = 1;
			found = (found * 10) + (s[x] - '0');
			x++;
		}

		if (br == 1)
			break;
	}

	found *= lowest;

	return (found);
}
