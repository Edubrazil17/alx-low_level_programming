#include "function_pointers.h"

/**
* array_iterator - prints contents of an array
* @array: array containing what needs to be printed
* @size: size of the array passed in
* @action: the function that prints
* Return: void
*/



void array_iterator(int *array, size_t size, void (*action)(int))

{

	size_t iter;



	if (array == NULL || action == NULL)

	return;



	for (iter = 0; iter < size; iter++)

	action(array[iter]);

}
