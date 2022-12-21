#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * _strcpy - entry level.
 * @dest: input from user
 * @src: input from user
 *
 * Return: Always returns char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int iter;

	for (iter = 0; iter <= _strlen(src); iter++)
	{
		dest[iter] = src[iter];
	}

	return (dest);
}
