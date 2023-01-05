#include "main.h"
#include <stdio.h>
void _puts_recursion(char *s) 

{	if ( *s == '\0' )
	{
		return;

	}
		printf("%c", *s);

	_puts_recursion(s + 1);

}

int main(void)
{
	_puts_recursion("hello world!");

	return (0);
}
