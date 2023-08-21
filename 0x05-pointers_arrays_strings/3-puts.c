#include "main.h"

/**
 * _puts - this is used to print a string and a new line to the stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
