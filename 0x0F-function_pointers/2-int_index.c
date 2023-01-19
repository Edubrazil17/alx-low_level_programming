#include "function_pointers.h"

/**
 * int_index - prints index containing a value
* @array: array containing what needs to be printed
* @size: size of the array passed in
* @cmp: the function that compare
* Return: returns the index containing the value or -1 if not
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int iter;

	if (size <= 0)

		return (-1);

	if (array == NULL || cmp == NULL)

		return (-1);

	for (iter = 0; iter < size; iter++)

	{
		if (cmp(array[iter]))

			return (iter);
	}

	return (-1);

}
