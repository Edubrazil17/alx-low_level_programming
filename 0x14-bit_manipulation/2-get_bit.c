#include "main.h"

/**
*get_bit - entry level
*@n: user input
*@index: user input
*
*Return: value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
