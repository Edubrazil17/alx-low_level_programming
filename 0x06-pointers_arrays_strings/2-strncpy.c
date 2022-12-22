#include "main.h"

/**
 * _strncpy - entry level.
 * @dest: input from user
 * @src: input from user
 * @n: input from user
 *
 * Return: Always returning a character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
