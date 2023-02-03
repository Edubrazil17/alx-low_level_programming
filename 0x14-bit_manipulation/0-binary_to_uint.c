#include "main.h"

/**
 * get_exponent - checks the size of a char
 * @b: user input
 *
 * Return: collected exponent
 */

int get_exponent(int b)
{
	int counter = 0, exponented = 0;

	while (counter <= b)
	{
		if (counter == 0)
			exponented = 1;
		else
			exponented *= 2;

		counter++;
	}

	return (exponented);
}

/**
 * is_valid - checks the validity of the input
 * @b: user input
 *
 * Return: 1 or 0
 */

int is_valid(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);

		b++;
	}

	return (1);
}

/**
 * binary_to_uint - entry level
 * @b: user input
 *
 * Return: 0 if b is NULL or the content of b isn't 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int iter = 0, size = 0,  decimal = 0;

	if (b == NULL || is_valid(b) == 0)
		return (decimal);

	while (b[size] != '\0')
		size++;

	while (size)
	{
		decimal += get_exponent(iter) * (b[size - 1] - '0');
		size--;
		iter++;
	}

	return (decimal);
}
